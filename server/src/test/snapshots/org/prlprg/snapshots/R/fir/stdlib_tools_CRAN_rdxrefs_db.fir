fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st CRAN_rdxrefs_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg read_CRAN_object:cls, reg CRAN_baseurl_for_src_area:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    read_CRAN_object = ldf read_CRAN_object;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      CRAN_baseurl_for_src_area = ldf CRAN_baseurl_for_src_area;
      r = dyn CRAN_baseurl_for_src_area();
      return r;
    };
    r2 = dyn read_CRAN_object(p, "src/contrib/Meta/rdxrefs.rds");
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}