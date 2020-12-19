import React, { Component } from 'react';

import Input from '../../components/FormsComponent/input/input';

class Auth extends Component {
  state = {
    formFields: {
      email: {
        elementType: 'input',
        elementConfig: {
          type: 'email',
          placeholder: 'Email',
        },
        value: '',
        validation: {
          required: true,
        },
        valid: false,
      },
      password: {
        elementType: 'input',
        elementConfig: {
          type: 'password',
          placeholder: 'Password',
        },
        value: '',
        validation: {
          required: true,
        },
        valid: false,
      },
    },
  };

  checkValidity(value, rules) {
    let isValid = true;
    if (rules.required) {
      isValid = value.trim() !== '' && isValid;
    }
    return isValid;
  }

  inputChangeHandler = (event, formElement) => {
    const updatedForm = {
      ...this.state.formFields,
    };
    const updatedFormField = {
      ...updatedForm[formElement],
    };
    updatedFormField.value = event.target.value;
    updatedFormField.valid = this.checkValidity(
      event.target.value,
      updatedFormField.validation
    );
    updatedForm[formElement] = updatedFormField;
    this.setState({ formFields: updatedForm });
  };

  submitHandler = (event) => {
    event.preventDefault();
    const formData = {};
    for (const key in this.state.formFields) {
      formData[key] = this.state.formFields[key].value;
    }
    console.log(formData);
  };

  clearHandler = () => {
    const formData = { ...this.state.formFields };
    for (const key in formData) {
      if (formData.hasOwnProperty(key)) {
        formData[key].value = '';
      }
    }
    this.setState({ formFields: formData });
  };

  render() {
    const formElements = [];
    for (const key in this.state.formFields) {
      if (this.state.formFields.hasOwnProperty(key)) {
        formElements.push({
          id: key,
          config: this.state.formFields[key],
        });
      }
    }

    let formOut = (
      <form onSubmit={this.submitHandler}>
        {formElements.map((formEl) => {
          return (
            <Input
              key={formEl.id}
              elementtype={formEl.config.elementType}
              elementconfig={formEl.config.elementConfig}
              value={formEl.config.value}
              changed={(event) => this.inputChangeHandler(event, formEl.id)}
            />
          );
        })}
        <button type="submit">Submit</button>
        <button type="reset" onClick={this.clearHandler}>
          Clear
        </button>
      </form>
    );

    return (
      <div>
        <h1>Authentication</h1>
        {formOut}
      </div>
    );
  }
}

export default Auth;
