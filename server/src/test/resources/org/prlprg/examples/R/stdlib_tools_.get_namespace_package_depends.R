#? stdlib
`.get_namespace_package_depends` <- function (dir, selective_only = FALSE) 
{
    nsInfo <- .check_namespace(dir)
    getter <- if (selective_only) {
        function(e) {
            if (is.list(e) && length(e[[2L]])) 
                e[[1L]]
            else character()
        }
    }
    else {
        function(e) e[[1L]]
    }
    depends <- c(lapply(nsInfo$imports, getter), lapply(nsInfo$importClasses, 
        getter), lapply(nsInfo$importMethods, getter))
    unique(sort(as.character(unlist(depends, use.names = FALSE))))
}
