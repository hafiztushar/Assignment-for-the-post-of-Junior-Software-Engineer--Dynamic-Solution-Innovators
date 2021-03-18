import './App.css';
import {Switch, Route,   BrowserRouter as Router } from 'react-router-dom';

import Home from './componenets/Home';
import Success from './componenets/Success';
import Failure from './componenets/Failure';

function App() {
  return (
    <div>
      <Router>
        <Switch>
          <Route exact path="/success" component={Success} />
          <Route exact path="/failure" component={Failure} />
          <Route exact path="/" component={Home} />
        </Switch>
      </Router>
    </div>
  );
}

export default App;
