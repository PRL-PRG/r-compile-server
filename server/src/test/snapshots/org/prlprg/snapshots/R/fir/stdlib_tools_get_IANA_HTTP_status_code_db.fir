fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st get_IANA_HTTP_status_code_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg __:cls, reg r:V, reg r1:cls, reg url:cls, reg paste0:cls, reg baseurl:*, reg baseurl1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg db:*, reg db1:V, reg c:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg db4:*, reg db5:V, reg c1:L, reg db8:V, reg db9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg r9:V, reg __1:cls, reg r10:V |
    mkenv;
    st baseurl = "https://www.iana.org/assignments/http-status-codes/";
    __ = ldf `::`;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r = dyn __("utils", "read.csv");
    check L2() else D1();
  D1():
    deopt 7 [r];
  L2():
    checkFun.0(r);
    r1 = r as cls;
    p2 = prom<V +>{
      url = ldf url;
      p1 = prom<V +>{
        paste0 = ldf paste0;
        p = prom<V +>{
          baseurl = ld baseurl;
          baseurl1 = force? baseurl;
          checkMissing(baseurl1);
          return baseurl1;
        };
        r3 = dyn paste0(p, "http-status-codes-1.csv");
        return r3;
      };
      r5 = dyn url(p1);
      return r5;
    };
    r7 = dyn r1[, stringsAsFactors](p2, FALSE);
    check L3() else D2();
  D2():
    deopt 12 [r7];
  L3():
    st db = r7;
    db = ld db;
    check L4() else D3();
  D3():
    deopt 14 [db];
  L4():
    db1 = force? db;
    checkMissing(db1);
    c = `is.object`(db1);
    if c then L5() else L6(db1);
  L0(dx1):
    popenv;
    return dx1;
  L5():
    dr = tryDispatchBuiltin.1("[", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(db3):
    db4 = ld db;
    check L8() else D4();
  D4():
    deopt 16 [db3, db4];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    db5 = force? db4;
    checkMissing(db5);
    c1 = `is.object`(db5);
    if c1 then L10() else L11(db3, db5);
  L9(dx3):
    r9 = `!=`(dx3, "Unassigned");
    __1 = ldf `[` in base;
    r10 = dyn __1(db1, r9, <missing>);
    goto L0(r10);
  L10():
    dr2 = tryDispatchBuiltin.1("$", db5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(db3, dr2);
  L11(db8, db9):
    r8 = `$`(db9, <sym Description>);
    goto L9(r8);
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  }
}