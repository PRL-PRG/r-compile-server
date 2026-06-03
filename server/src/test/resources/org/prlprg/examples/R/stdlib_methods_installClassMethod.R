#? stdlib
`installClassMethod` <- function (def, self, me, selfEnv, thisClass) 
{
    if (is(def, "externalMethodDef") || !is(def, "refMethodDef")) {
        assign(me, def, envir = thisClass@refMethods)
        return(def)
    }
    depends <- def@mayCall
    environment(def) <- selfEnv
    assign(me, def, envir = selfEnv)
    done <- names(selfEnv)
    notDone <- setdiff(depends, done)
    superCase <- match("callSuper", notDone, 0)
    if (superCase > 0) {
        if (nzchar(def@superClassMethod)) 
            notDone[[superCase]] <- def@superClassMethod
        else stop(gettextf("a call to superClass() is in the method %s but there is no superclass definition of this method for class %s", 
            sQuote(me), dQuote(thisClass@className)), domain = NA)
    }
    for (what in notDone) installClassMethod(get(what, envir = thisClass@refMethods), 
        self, what, selfEnv, thisClass)
    if (superCase > 0) {
        newEnv <- new.env(FALSE, parent = selfEnv)
        assign("callSuper", get(def@superClassMethod, envir = selfEnv), 
            envir = newEnv)
        environment(def) <- newEnv
        assign(me, def, envir = selfEnv)
    }
    def
}
