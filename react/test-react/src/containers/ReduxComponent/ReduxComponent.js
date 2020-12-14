import React, { Component } from 'react';
import { connect } from 'react-redux';

class ReduxComponent extends Component {
  state = {
    nameList: [],
  };

  render() {
    return (
      <div>
        <h1>React Redux</h1>
        <ul>
          {this.props.nameList.map((el, index) => (
            <li key={index}>{el}</li>
          ))}
        </ul>
        <input onClick={(event) => this.onAddName(event)} />
      </div>
    );
  }
}

// the state managed by redux is not passed as state but instead as porps to component
const mapStateToProps = (state) => {
  return {
    nameList: state.nameList,
  };
};

const mapDispatchToProps = (dispatch) => {
  return {
    onAddName: () => dispatch({ type: 'ADD' }),
  };
};

// connect returns a function which takes an hoc
// to connect we can pass config i.e which state is required and which actions do we need to dispatch
export default connect(mapStateToProps, mapDispatchToProps)(ReduxComponent);
