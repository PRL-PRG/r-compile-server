#? stdlib
`.searchNamespaceNames` <- function (env) 
paste0("namespace:", getNamespaceName(env))
