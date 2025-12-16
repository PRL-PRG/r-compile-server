#? stdlib
`.check_code_usage_in_package` <- function (package, lib.loc = NULL) 
{
    is_base <- package == "base"
    check_without_loading <- config_val_to_logical(Sys.getenv("_R_CHECK_CODE_USAGE_VIA_NAMESPACES_", 
        "TRUE"))
    if (!is_base) {
        if (!check_without_loading) {
            .load_package_quietly(package, lib.loc)
            .eval_with_capture({
                desc <- readRDS(file.path(find.package(package, 
                  NULL), "Meta", "package.rds"))
                pkgs1 <- sapply(desc$Suggests, `[[`, "name")
                pkgs2 <- sapply(desc$Enhances, `[[`, "name")
                for (pkg in unique(c(pkgs1, pkgs2))) suppressMessages(tryCatch(require(pkg, 
                  character.only = TRUE, quietly = TRUE), error = function(.) NULL, 
                  warning = function(.) NULL))
            }, type = "output")
        }
        if (is.null(.GlobalEnv$.Random.seed)) 
            stats::runif(1)
        attach(compatibilityEnv(), name = "compat", pos = length(search()), 
            warn.conflicts = FALSE)
        on.exit(detach("compat"))
    }
    out <- character()
    foo <- function(x) out <<- c(out, x)
    checkMethodUsageEnv <- function(env, ...) {
        for (g in .get_S4_generics(env)) for (m in .get_S4_methods_list(g, 
            env)) {
            fun <- methods::unRematchDefinition(methods::getDataPart(m))
            signature <- paste(m@generic, paste(m@target, collapse = "-"), 
                sep = ",")
            codetools::checkUsage(fun, signature, ...)
        }
    }
    checkMethodUsagePackage <- function(pack, ...) {
        pname <- paste0("package:", pack)
        if (pname %notin% search()) 
            stop("package must be loaded", domain = NA)
        checkMethodUsageEnv(if (isNamespaceLoaded(pack)) 
            getNamespace(pack)
        else as.environment(pname), ...)
    }
    args <- list(skipWith = TRUE, suppressPartialMatchArgs = FALSE, 
        suppressLocalUnused = TRUE)
    opts <- unlist(strsplit(Sys.getenv("_R_CHECK_CODETOOLS_PROFILE_"), 
        "[[:space:]]*,[[:space:]]*"))
    if (length(opts)) {
        args[sub("[[:space:]]*=.*", "", opts)] <- lapply(sub(".*=[[:space:]]*", 
            "", opts), config_val_to_logical)
    }
    if (check_without_loading) 
        env <- suppressWarnings(suppressMessages(getNamespace(package)))
    .glbs <- suppressMessages(utils::globalVariables(, package))
    if (length(.glbs)) {
        dflt <- c(if (package == "base") "last.dump", ".Generic", 
            ".Method", ".Class")
        args$suppressUndefined <- c(dflt, .glbs)
    }
    if (check_without_loading) {
        args <- c(list(env, report = foo), args)
        suppressMessages(do.call(codetools::checkUsageEnv, args))
        suppressMessages(do.call(checkMethodUsageEnv, args))
    }
    else {
        args <- c(list(package, report = foo), args)
        suppressMessages(do.call(codetools::checkUsagePackage, 
            args))
        suppressMessages(do.call(checkMethodUsagePackage, args))
    }
    out <- unique(out)
    class(out) <- "check_code_usage_in_package"
    out
}
