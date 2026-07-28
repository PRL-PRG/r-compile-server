#? stdlib
`.genEnv` <- function (f, default = .requirePackage("methods"), package = "") 
{
    if (!nzchar(package)) 
        package <- packageSlot(f)
    if (is.null(package)) {
        value <- default
        def <- .getGeneric(f, value)
        if (is.null(def)) {
            value <- .GlobalEnv
            def <- .getGeneric(f, value)
            if (is.null(def)) {
                value <- .requirePackage("methods")
                if (!identical(default, value)) 
                  def <- .getGeneric(f, value)
            }
        }
        if (is.null(def)) 
            baseenv()
        else value
    }
    else .requirePackage(package)
}
