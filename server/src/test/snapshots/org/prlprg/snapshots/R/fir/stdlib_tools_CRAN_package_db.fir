fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st CRAN_package_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg as_data_frame:cls, reg read_CRAN_object:cls, reg CRAN_baseurl_for_web_area:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V |
    mkenv;
    as_data_frame = ldf `as.data.frame`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      read_CRAN_object = ldf read_CRAN_object;
      p = prom<V +>{
        CRAN_baseurl_for_web_area = ldf CRAN_baseurl_for_web_area;
        r = dyn CRAN_baseurl_for_web_area();
        return r;
      };
      r2 = dyn read_CRAN_object(p, "web/packages/packages.rds");
      return r2;
    };
    r4 = dyn as_data_frame[, stringsAsFactors](p1, FALSE);
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}