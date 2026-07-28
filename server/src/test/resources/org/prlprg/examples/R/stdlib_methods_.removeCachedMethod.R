#? stdlib
`.removeCachedMethod` <- function (f, sig, fdef = getGeneric(f)) 
cacheMethod(f, sig, NULL, names(sig), fdef)
