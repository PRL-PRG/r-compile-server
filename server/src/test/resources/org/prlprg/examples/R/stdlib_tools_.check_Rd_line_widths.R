#? stdlib
`.check_Rd_line_widths` <- function (dir, limit = c(usage = 95, examples = 105), installed = FALSE) 
{
    db <- if (installed) 
        Rd_db(basename(dir), lib.loc = dirname(dir))
    else Rd_db(dir = dir)
    out <- find_wide_Rd_lines_in_Rd_db(db, limit, installed)
    class(out) <- "check_Rd_line_widths"
    attr(out, "limit") <- limit
    out
}
