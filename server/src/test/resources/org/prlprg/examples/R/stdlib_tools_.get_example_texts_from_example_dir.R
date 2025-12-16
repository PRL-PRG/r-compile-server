#? stdlib
`.get_example_texts_from_example_dir` <- function (dir) 
{
    if (!dir.exists(dir)) 
        return(NULL)
    files <- list_files_with_exts(dir, "R")
    texts <- lapply(files, function(f) paste(readLines(f, warn = FALSE), 
        collapse = "\n"))
    names(texts) <- files
    texts
}
