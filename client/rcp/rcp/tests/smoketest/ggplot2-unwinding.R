# See https://github.com/PRL-PRG/rcp/issues/13

library(rcp)
library(ggplot2)


# Compile only ggplot2::ggproto and patch it into namespace.
ns <- asNamespace("ggplot2")
ggproto_fun <- get("ggproto", envir = ns)
ggproto_compiled <- rcp::rcp_cmpfun(ggproto_fun, list(name = "ggplot2::ggproto"))

unlockBinding("ggproto", ns)
assign("ggproto", ggproto_compiled, envir = ns)
lockBinding("ggproto", ns)

# Trigger path seen in traceback: list2(...) -> ggproto(...) -> coord_sf(...)
ggplot2::coord_sf(crs = 5070, default_crs = 4326)

cat("OK (bug did not manifest in this run)\n")
