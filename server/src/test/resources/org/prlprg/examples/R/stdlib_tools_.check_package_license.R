#? stdlib
`.check_package_license` <- function (dfile, dir) 
{
    dfile <- file_path_as_absolute(dfile)
    db <- .read_description(dfile)
    if (missing(dir)) 
        dir <- dirname(dfile)
    out <- list()
    if (!is.na(val <- db["License"])) {
        status <- analyze_license(val)
        ok <- status$is_canonical
        if (length(pointers <- status$pointers)) {
            bad_pointers <- pointers[!file_test("-f", file.path(dir, 
                pointers))]
            if (length(bad_pointers)) {
                status$bad_pointers <- bad_pointers
                ok <- FALSE
            }
        }
        patt <- "(^Modified BSD License$|^BSD$|^CC BY.* [23][.]0)"
        if (any(ind <- grepl(patt, status$components))) {
            status$deprecated <- status$components[ind]
            ok <- FALSE
        }
        if (length(extensions <- status$extensions) && any(ind <- !extensions$extensible)) {
            status$bad_extensions <- extensions$components[ind]
            ok <- FALSE
        }
        if (any(ind <- status$components %in% c("MIT License", 
            "MIT", "BSD 2-clause License", "BSD_2_clause", "BSD 3-clause License", 
            "BSD_3_clause"))) {
            status$miss_extension <- status$components[ind]
            ok <- FALSE
        }
        if (length(extensions <- status$extensions)) {
            components <- extensions$components
            nms <- if (any(grepl("^BSD[ _]3", components))) 
                c("YEAR", "COPYRIGHT HOLDER", "ORGANIZATION")
            else if (any(grepl("^(MIT|BSD[ _]2)", components))) 
                c("YEAR", "COPYRIGHT HOLDER")
            else NULL
            if (!is.null(nms) && length(pointers <- status$pointers) && 
                file_test("-f", file.path(dir, pointers[1L]))) {
                val <- tryCatch(read.dcf(file.path(dir, pointers[1L]), 
                  fields = nms), error = identity)
                if (inherits(val, "error")) {
                  status$license_stub_is_bad_DCF <- TRUE
                  ok <- FALSE
                }
                else {
                  ind <- is.na(val) | !nzchar(val)
                  pos <- which(rowSums(ind) > 0)
                  if (length(pos)) {
                    status$license_stub_fields_not_complete <- gettextf("Record: %d Field(s): %s", 
                      pos, vapply(pos, function(p) paste(nms[ind[p, 
                        ]], collapse = ", "), ""))
                    ok <- FALSE
                  }
                }
            }
        }
        if (any(ind <- status$components %in% "ACM") && !(db["Package"] %in% 
            c("akima", "tripack"))) {
            status$ACM <- status$components[ind]
            ok <- FALSE
        }
        if (!ok) 
            out <- c(list(license = val), status)
    }
    class(out) <- "check_package_license"
    out
}
