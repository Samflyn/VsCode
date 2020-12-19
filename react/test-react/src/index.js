import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import App from './containers/App';
import reportWebVitals from './reportWebVitals';
import axios from 'axios';
import { createStore, combineReducers, applyMiddleware } from 'redux';
import reducer from './store/reducers/reducer';
import { Provider } from 'react-redux';
import thunk from 'redux-thunk';

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

// REDUX

// if using multiple reducers import them and add to the object with any name
// the state will be merged but it will be nested
const rootReducer = combineReducers({ reduce: reducer });

// for creating middleware in redux
const logger = (store) => {
  return (next) => {
    return (action) => {
      console.log('[Middleware] ', action);
      return next(action);
    };
  };
};

// middleware is applied to store
// enhancer is the so called middleware
// we can pass list of enhancers which will be executed in order
const store = createStore(rootReducer, applyMiddleware(logger, thunk));

// for one reducer
// const store = createStore(reducer);

ReactDOM.render(
  //  A helper component that injects redux store into react components
  <Provider store={store}>
    <React.StrictMode>
      <App />
    </React.StrictMode>
  </Provider>,
  document.getElementById('root')
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
