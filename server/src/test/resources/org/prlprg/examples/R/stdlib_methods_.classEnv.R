#? stdlib
`.classEnv` <- function (Class, default = .requirePackage("methods"), mustFind = TRUE) 
{
    package <- {
        if (is.character(Class)) 
            packageSlot(Class)
        else Class@package
    }
    if (is.null(package)) {
        value <- default
        def <- getClassDef(Class, value, NULL)
        if (is.null(def)) {
            value <- .GlobalEnv
            def <- getClassDef(Class, value, NULL)
            if (is.null(def)) {
                value <- .requirePackage("methods")
                if (!identical(default, value)) 
                  def <- getClassDef(Class, value, NULL)
            }
        }
        if (is.null(def) && mustFind) 
            stop(gettextf("unable to find an environment containing class %s", 
                dQuote(Class)), domain = NA)
        value
    }
    else .requirePackage(package)
}
