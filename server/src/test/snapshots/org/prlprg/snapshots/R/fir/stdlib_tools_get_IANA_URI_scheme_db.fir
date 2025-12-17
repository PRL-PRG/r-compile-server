fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st get_IANA_URI_scheme_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg __:cls, reg r:V, reg r1:cls, reg url:cls, reg paste0:cls, reg baseurl:*, reg baseurl1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg chartr:cls, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg db:*, reg db1:V, reg names:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg l:*, reg names__:cls, reg r13:V, reg sub:cls, reg db2:*, reg db3:V, reg c:L, reg db5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg p4:p(V +), reg r16:V, reg l1:*, reg c1:L, reg r18:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r21:V, reg db6:*, reg db7:V |
    mkenv;
    st baseurl = "https://www.iana.org/assignments/uri-schemes/";
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r = dyn __("utils", "read.csv");
    check L1() else D1();
  D1():
    deopt 7 [r];
  L1():
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
        r3 = dyn paste0(p, "uri-schemes-1.csv");
        return r3;
      };
      r5 = dyn url(p1);
      return r5;
    };
    r7 = dyn r1[, stringsAsFactors, encoding](p2, FALSE, "UTF-8");
    check L2() else D2();
  D2():
    deopt 14 [r7];
  L2():
    st db = r7;
    chartr = ldf chartr;
    check L3() else D3();
  D3():
    deopt 17 [];
  L3():
    p3 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r9):
      return r9;
    L1():
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      names = ldf names in base;
      r10 = dyn names(db1);
      goto L0(r10);
    L2():
      r8 = dyn base(<sym db>);
      goto L0(r8);
    };
    r12 = dyn chartr(".", "_", p3);
    check L4() else D4();
  D4():
    deopt 21 [r12];
  L4():
    l = ld db;
    names__ = ldf `names<-`;
    check L5() else D5();
  D5():
    deopt 23 [r12, l, r12];
  L5():
    r13 = dyn names__(l, NULL, r12);
    check L6() else D6();
  D6():
    deopt 25 [r12, r13];
  L6():
    st db = r13;
    sub = ldf sub;
    check L7() else D7();
  D7():
    deopt 28 [];
  L7():
    p4 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      c = `is.object`(db3);
      if c then L1() else L2(db3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", db3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(db5):
      r14 = `$`(db5, <sym URI_Scheme>);
      goto L0(r14);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r16 = dyn sub(" .*", "", p4);
    check L8() else D8();
  D8():
    deopt 32 [r16];
  L8():
    l1 = ld db;
    c1 = `is.object`(l1);
    if c1 then L10() else L11(r16, l1);
  L9(dx3):
    st db = dx3;
    db6 = ld db;
    check L13() else D9();
  L10():
    dr2 = tryDispatchBuiltin.0("$<-", l1, r16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(r16, dr2);
  L11(r18, l3):
    r21 = `$<-`(l3, <sym URI_Scheme>, r16);
    goto L9(r21);
  D9():
    deopt 36 [db6];
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L13():
    db7 = force? db6;
    checkMissing(db7);
    popenv;
    return db7;
  }
}