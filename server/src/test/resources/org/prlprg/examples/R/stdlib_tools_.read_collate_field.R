#? stdlib
`.read_collate_field` <- function (txt) 
{
    con <- textConnection(gsub("\n", " ", txt, fixed = TRUE))
    on.exit(close(con))
    scan(con, what = character(), strip.white = TRUE, quiet = TRUE)
}
