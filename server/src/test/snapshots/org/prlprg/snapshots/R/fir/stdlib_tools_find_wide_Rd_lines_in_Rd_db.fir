fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3159632791;
    st find_wide_Rd_lines_in_Rd_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3159632791(x, limit, installed) {
  (reg x:*, reg limit:*, reg installed:*) -+> V { var x:*, var limit:*, reg limit_isMissing:L, reg limit_orDefault:*, var installed:*, reg installed_isMissing:L, reg installed_orDefault:*, reg lapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg find_wide_Rd_lines_in_Rd_object:*, reg find_wide_Rd_lines_in_Rd_object1:V, reg p1:p(V +), reg limit1:*, reg limit2:V, reg p2:p(V +), reg installed1:*, reg installed2:V, reg p3:p(V +), reg r4:V, reg Filter:cls, reg length:*, reg length1:V, reg p4:p(V +), reg y:*, reg y1:V, reg p5:p(V +), reg r7:V |
    mkenv;
    st x = x;
    limit_isMissing = missing.0(limit);
    if limit_isMissing then L0(NULL) else L0(limit);
  L0(limit_orDefault):
    st limit = limit_orDefault;
    installed_isMissing = missing.0(installed);
    if installed_isMissing then L1(FALSE) else L1(installed);
  L1(installed_orDefault):
    st installed = installed_orDefault;
    lapply = ldf lapply;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      find_wide_Rd_lines_in_Rd_object = ld find_wide_Rd_lines_in_Rd_object;
      find_wide_Rd_lines_in_Rd_object1 = force? find_wide_Rd_lines_in_Rd_object;
      checkMissing(find_wide_Rd_lines_in_Rd_object1);
      return find_wide_Rd_lines_in_Rd_object1;
    };
    p2 = prom<V +>{
      limit1 = ld limit;
      limit2 = force? limit1;
      checkMissing(limit2);
      return limit2;
    };
    p3 = prom<V +>{
      installed1 = ld installed;
      installed2 = force? installed1;
      checkMissing(installed2);
      return installed2;
    };
    r4 = dyn lapply(p, p1, p2, p3);
    check L3() else D1();
  D1():
    deopt 6 [r4];
  L3():
    st y = r4;
    Filter = ldf Filter;
    check L4() else D2();
  D2():
    deopt 9 [];
  L4():
    p4 = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p5 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r7 = dyn Filter(p4, p5);
    check L5() else D3();
  D3():
    deopt 12 [r7];
  L5():
    popenv;
    return r7;
  }
}