#? stdlib
`className` <- function (class, package) 
{
    if (is(class, "character")) {
        className <- as.character(class)
        if (missing(package)) 
            package <- packageSlot(class)
        if (is.null(package)) {
            if (exists(className, envir = .classTable, inherits = FALSE)) 
                classDef <- get(className, envir = .classTable)
            else {
                classDef <- findClass(className, topenv(parent.frame()))
                if (length(classDef) == 1) 
                  classDef <- classDef[[1L]]
            }
            if (is(classDef, "classRepresentation")) 
                package <- classDef@package
            else if (length(classDef) > 1L) {
                pkgs <- sapply(classDef, function(cl) cl@package)
                warning(gettextf("multiple class definitions for %s from packages: %s; picking the first", 
                  dQuote(className), paste(sQuote(pkgs), collapse = ", ")), 
                  domain = NA)
                package <- pkgs[[1L]]
            }
            else stop(gettextf("no package name supplied and no class definition found for %s", 
                dQuote(className)), domain = NA)
        }
    }
    else if (is(class, classDef)) {
        className <- class@className
        if (missing(package)) 
            package <- class@package
    }
    new("className", .Data = className, package = package)
}

# Examples


