sketchApi.login = function(email, password, callback) {
  var callbackID = this.registerCallback(callback);
  SketchApi.loginWithEmail_password_callbackID_(email, password, callbackID);
}

sketchApi.loginEnterprise = function(domain, email, password, callback) {
  var callbackID = this.registerCallback(callback);
  SketchApi.loginEnterpriseDomain_email_password_callbackID_(domain, email, password, callbackID);
}

sketchApi.loginEnterpriseSSO = function(domain, callback) {
  var callbackID = this.registerCallback(callback);
  SketchApi.loginEnterpriseSSODomain_callbackID_(domain, callbackID);
}

sketchApi.manifest = function(callback) {
  var callbackID = this.registerCallback(callback);
  SketchApi.manifestWithCallbackID_(callbackID);
}

sketchApi.getPublicLink = function(prototypeId, callback) {
  var callbackID = this.registerCallback(callback);
  SketchApi.publicLinkWithPrototypeId_callbackID_(prototypeId, callbackID);
}

sketchApi.sync = function(prototypeId, density, syncAll, callback) {
  var callbackID = this.registerListener(callback);
  SketchApi.syncWithPrototypeId_density_syncAll_callbackID_(prototypeId, density, syncAll, callbackID);
}

sketchApi.cancelSync = function() {
  SketchApi.cancelSync();
}

sketchApi.isLoggedIn = function() {
  return SketchApi.isLoggedIn();
}

sketchApi.enterpriseDomainInfo = function(domain, callback) {
  var callbackID = this.registerListener(callback);
  SketchApi.enterpriseDomainInfo_callbackID_(domain, callbackID);
}

sketchApi.logout = function() {
  SketchApi.logout();
}
