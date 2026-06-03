#! ../../../../../../../external/R/bin/Rscript
# Script to regenerate example in `./R` starting with `stdlib_`, from various packages.
# The example defines the function, then runs any example code in its documentation.

# Check that working directory is correct, because the rest of the code uses relative paths
if (!endsWith(getwd(), file.path("resources", "org", "prlprg", "examples"))) {
  stop("Must call in same directory as script")
}

# Remove old stdlib files
invisible(file.remove(list.files("R", pattern = "^stdlib_.*\\.R$", full.names = TRUE)))

# Process functions from these packages
for (pkg in c("base", "tools", "utils", "graphics", "methods", "stats")) {
  cat(sep = "", "- ", pkg, "\n")

  # Package info
  namespace <- getNamespace(pkg)
  db <- tools:::Rd_db(pkg)
  db_names <- tools:::.Rd_get_names_from_Rd_db(db)
  db_examples <- lapply(db, tools:::.Rd_get_example_code)

  # Process functions
  for (name in ls(namespace, all.names = TRUE)) {
    f <- get(name, envir=namespace)
    if (!is.function(f) || !identical(environment(f), namespace)) {
      # Skip non-functions
      next
    }

    cat(sep = "", "  - ", name, "\n")

    # Process function
    examples <- db_examples[match(name, db_names)][[1]]
    if (length(examples) == 0 || grepl("\\\\dont\\w+\\{", examples)) {
      examples <- NULL
    }
    filename <- file.path("R", paste0("stdlib_", pkg, "_", sub("[\\/:\n]", "_", name), ".R"))
    content <- paste0(
      "#? stdlib\n",
      "`" , name, "` <- ", paste(deparse(f), collapse = "\n"),
      if (is.null(examples)) "" else paste0("\n\n# Examples", examples)
    )
    writeLines(content, filename)
  }
}