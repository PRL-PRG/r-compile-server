fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st CRAN_check_issues = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg read_CRAN_object:cls, reg CRAN_baseurl_for_web_area:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    read_CRAN_object = ldf read_CRAN_object;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      CRAN_baseurl_for_web_area = ldf CRAN_baseurl_for_web_area;
      r = dyn CRAN_baseurl_for_web_area();
      return r;
    };
    r2 = dyn read_CRAN_object(p, "web/checks/check_issues.rds");
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}