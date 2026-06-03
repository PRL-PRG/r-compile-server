#? stdlib
`.get_example_texts_from_source_dir` <- function (dir) 
{
    if (!dir.exists(file.path(dir, "man"))) 
        return(NULL)
    lapply(Rd_db(dir = dir), .Rd_get_example_code)
}
