#? stdlib
`registerS3method` <- function (genname, class, method, envir = parent.frame()) 
{
    addNamespaceS3method <- function(ns, generic, class, method) {
        regs <- rbind(.getNamespaceInfo(ns, "S3methods"), c(generic, 
            class, method, NA_character_))
        setNamespaceInfo(ns, "S3methods", regs)
    }
    groupGenerics <- c("Math", "Ops", "matrixOps", "Summary", 
        "Complex")
    defenv <- if (genname %in% groupGenerics) 
        .BaseNamespaceEnv
    else {
        genfun <- get(genname, envir = envir)
        if (.isMethodsDispatchOn() && methods::is(genfun, "genericFunction")) 
            genfun <- methods::finalDefaultMethod(genfun@default)
        if (typeof(genfun) == "closure") 
            environment(genfun)
        else .BaseNamespaceEnv
    }
    if (is.null(table <- defenv[[".__S3MethodsTable__."]])) {
        table <- new.env(hash = TRUE, parent = baseenv())
        defenv[[".__S3MethodsTable__."]] <- table
    }
    if (is.character(method)) {
        assignWrapped <- function(x, method, home, envir) {
            method <- method
            home <- home
            delayedAssign(x, get(method, envir = home), assign.env = envir)
        }
        if (!exists(method, envir = envir)) {
            warning(gettextf("S3 method %s was declared but not found", 
                sQuote(method)), call. = FALSE)
        }
        else {
            assignWrapped(paste(genname, class, sep = "."), method, 
                home = envir, envir = table)
        }
    }
    else if (is.function(method)) 
        assign(paste(genname, class, sep = "."), method, envir = table)
    else stop("bad method")
    if (isNamespace(envir) && !identical(envir, .BaseNamespaceEnv)) 
        addNamespaceS3method(envir, genname, class, method)
}
