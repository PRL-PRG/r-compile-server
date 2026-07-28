#? stdlib
`.Rd_topic_for_display` <- function (name, aliases) 
if (name %in% aliases) name else aliases[1L]
