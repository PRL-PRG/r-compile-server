#? stdlib
`.check_packages_used_helper` <- function (db, files) 
{
    pkg_name <- db["Package"]
    depends <- .get_requires_from_package_db(db, "Depends")
    imports <- .get_requires_from_package_db(db, "Imports")
    suggests <- .get_requires_from_package_db(db, "Suggests")
    enhances <- .get_requires_from_package_db(db, "Enhances")
    standard_package_names <- .get_standard_package_names()$base
    depends_suggests <- c(depends, imports, suggests, enhances, 
        pkg_name, standard_package_names)
    common_names <- c("pkg", "pkgName", "package", "pos")
    parse_errors <- bad_exprs <- character()
    bad_imports <- character()
    bad_data <- character()
    find_bad_exprs <- function(e) {
        if (is.call(e) || is.expression(e)) {
            Call <- deparse(e[[1L]])[1L]
            if ((Call %in% c("library", "require", "loadNamespace", 
                "requireNamespace")) && (length(e) >= 2L)) {
                keep <- vapply(e, function(x) deparse(x)[1L] != 
                  "...", NA)
                mc <- match.call(baseenv()[[Call]], e[keep])
                if (!is.null(pkg <- mc$package)) {
                  dunno <- FALSE
                  if ((Call %in% c("loadNamespace", "requireNamespace"))) {
                    if (!identical(class(pkg), "character")) 
                      dunno <- TRUE
                  }
                  else {
                    if (!identical(class(pkg), "character") && 
                      !is.null(co <- mc$character.only) && !isFALSE(co)) 
                      dunno <- TRUE
                  }
                  if (!dunno) {
                    pkg <- as.character(pkg)
                    if (pkg %notin% c(depends_suggests, common_names)) 
                      bad_exprs <<- c(bad_exprs, pkg)
                  }
                }
            }
            else if (Call %in% "::") {
                pkg <- deparse(e[[2L]])
                if (!pkg %in% depends_suggests) 
                  bad_imports <<- c(bad_imports, pkg)
            }
            else if (Call %in% ":::") {
                pkg <- deparse(e[[2L]])
                if (!pkg %in% depends_suggests) 
                  bad_imports <<- c(bad_imports, pkg)
            }
            else if ((Call %in% "data" && length(e) >= 3L) || 
                (Call %in% c("utils::data", "utils:::data"))) {
                mc <- match.call(utils::data, e)
                if (is.character(pkg <- mc$package) && pkg %notin% 
                  depends_suggests) 
                  bad_data <<- c(bad_data, pkg)
            }
            for (i in seq_along(e)) Recall(e[[i]])
        }
    }
    if (is.character(files)) {
        for (f in files) {
            tryCatch({
                exprs <- parse(file = f, n = -1L)
                for (i in seq_along(exprs)) find_bad_exprs(exprs[[i]])
            }, error = function(e) {
                msg <- .massage_file_parse_error(e)
                if (!startsWith(msg, "invalid multibyte character")) {
                  parse_errors <<- c(parse_errors, f)
                  warning(gettextf("parse error in file '%s':\n%s", 
                    f, msg), domain = NA, call. = FALSE)
                }
            })
        }
    }
    else {
        tryCatch({
            exprs <- parse(file = files, n = -1L)
            for (i in seq_along(exprs)) find_bad_exprs(exprs[[i]])
        }, error = function(e) warning(gettextf("parse error in file '%s':\n%s", 
            summary(files)$description, .massage_file_parse_error_message(conditionMessage(e))), 
            domain = NA, call. = FALSE))
    }
    res <- list(others = unique(bad_exprs), imports = unique(bad_imports), 
        data = unique(bad_data), methods_message = "", parse_errors = unique(parse_errors))
    class(res) <- "check_packages_used"
    res
}
