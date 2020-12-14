import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import App from './containers/App';
import reportWebVitals from './reportWebVitals';
import axios from 'axios';
import { createStore } from 'redux';
import reducer from './store/reducer';
import { Provider } from 'react-redux';

// to set defaults to all requests being sent
axios.defaults.baseURL = 'https://jsonplaceholder.typicode.com';

// global function that runs for every request
// the request config should be returned so that the request can be passed on
axios.interceptors.request.use(
  (axiosRequestConfig) => {
    // console.log(axiosRequestConfig);
    return axiosRequestConfig;
  },
  (error) => {
    console.log(error);
    return Promise.reject(error);
  }
);

axios.interceptors.response.use(
  (axiosResponse) => {
    // console.log(axiosResponse);
    return axiosResponse;
  },
  (error) => {
    console.log(error);
    return Promise.reject(error);
  }
);

const store = createStore(reducer);

ReactDOM.render(
  <React.StrictMode>
    {/* A helper component that injects redux store into react components */}
    <Provider store={store}>
      <App />
    </Provider>
  </React.StrictMode>,
  document.getElementById('root')
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
