#? stdlib
`.find_calls_in_package_code` <- function (dir, predicate = NULL, recursive = FALSE, .worker = NULL, 
    which = "code") 
{
    dir <- file_path_as_absolute(dir)
    dfile <- file.path(dir, "DESCRIPTION")
    encoding <- if (file.exists(dfile)) 
        .read_description(dfile)["Encoding"]
    else NA
    if (is.null(.worker)) 
        .worker <- function(file, encoding) .find_calls_in_file(file, 
            encoding, predicate, recursive)
    which <- match.arg(which, c("code", "vignettes", "tests", 
        "NAMESPACE", "CITATION"), several.ok = TRUE)
    code_files <- c(character(), if ("code" %in% which) list_files_with_type(file.path(dir, 
        "R"), "code", OS_subdirs = c("unix", "windows")), if (("vignettes" %in% 
        which) && dir.exists(file.path(dir, "vignettes")) && 
        dir.exists(fp <- file.path(dir, "inst", "doc"))) list_files_with_type(fp, 
        "code"), if (("tests" %in% which) && dir.exists(fp <- file.path(dir, 
        "tests"))) c(list.files(fp, pattern = "\\.[rR]$", full.names = TRUE), 
        if (dir.exists(fp <- file.path(fp, "testthat"))) list.files(fp, 
            pattern = "\\.[rR]$", full.names = TRUE)), if (("NAMESPACE" %in% 
        which) && file.exists(fp <- file.path(dir, "NAMESPACE"))) fp, 
        if (("CITATION" %in% which) && file.exists(fp <- file.path(dir, 
            "inst", "CITATION"))) fp)
    calls <- lapply(code_files, .worker, encoding)
    names(calls) <- .file_path_relative_to_dir(code_files, dirname(dir))
    calls
}
