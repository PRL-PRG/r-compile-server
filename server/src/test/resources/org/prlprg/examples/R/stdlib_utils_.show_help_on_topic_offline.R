#? stdlib
`.show_help_on_topic_offline` <- function (file, topic, type = "pdf", texinputs = NULL) 
{
    encoding <- ""
    lines <- readLines(file)
    encpatt <- "^\\\\inputencoding\\{(.*)\\}$"
    if (length(res <- grep(encpatt, lines, perl = TRUE, useBytes = TRUE))) 
        encoding <- sub(encpatt, "\\1", lines[res], perl = TRUE, 
            useBytes = TRUE)
    texfile <- paste0(topic, ".tex")
    on.exit(unlink(texfile))
    if (nzchar(opt <- Sys.getenv("R_RD4PDF"))) 
        opt
    else "times,inconsolata"
    has_figure <- any(grepl("\\Figure", lines))
    cat("\\documentclass[", getOption("papersize"), "paper]{article}\n", 
        "\\usepackage[", opt, "]{Rd}\n", if (nzchar(encoding)) 
            sprintf("\\usepackage[%s]{inputenc}\n", encoding), 
        "\\InputIfFileExists{Rhelp.cfg}{}{}\n", "\\usepackage{graphicx}\n", 
        "\\begin{document}\n", file = texfile, sep = "")
    file.append(texfile, file)
    cat("\\end{document}\n", file = texfile, append = TRUE)
    helper <- if (exists("offline_help_helper", envir = .GlobalEnv)) 
        get("offline_help_helper", envir = .GlobalEnv)
    else offline_help_helper
    if (has_figure) 
        helper(texfile, type, texinputs)
    else helper(texfile, type)
    invisible()
}
