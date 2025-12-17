fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner815072961;
    st checkCRAN = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner815072961(method) {
  (reg method:*) -+> V { var method:*, reg available_packages:cls, reg contrib_url:cls, reg r:V, reg p:p(V +), reg method1:*, reg method2:V, reg p1:p(V +), reg r3:V, reg getCRANmirrors:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg list:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg m:*, reg m1:V, reg c:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg as_character:cls, reg r11:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg available_packages1:cls, reg contrib_url1:cls, reg url:*, reg url1:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg method3:*, reg method4:V, reg p4:p(V +), reg r16:V, reg l1:*, reg c2:L, reg i6:I, reg r18:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg url2:*, reg url3:V, reg ____:cls, reg r21:V, reg lapply:cls, reg z:*, reg z1:V, reg p5:p(V +), reg r23:cls, reg p6:p(V +), reg r25:V |
    mkenv;
    st method = method;
    available_packages = ldf `available.packages`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      contrib_url = ldf `contrib.url`;
      r = dyn contrib_url("https://CRAN.R-project.org");
      return r;
    };
    p1 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r3 = dyn available_packages[, method](p, p1);
    check L6() else D1();
  D1():
    deopt 5 [r3];
  L6():
    st master = r3;
    getCRANmirrors = ldf getCRANmirrors;
    check L7() else D2();
  D2():
    deopt 8 [];
  L7():
    r4 = dyn getCRANmirrors();
    check L8() else D3();
  D3():
    deopt 9 [r4];
  L8():
    st m = r4;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r6):
    st z = r6;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L9():
    list = ldf list in base;
    r7 = dyn list();
    check L11() else D4();
  L10():
    r5 = dyn base();
    goto L0(r5);
  D4():
    deopt 14 [r7];
  L1(r9):
    s = toForSeq(r9);
    l = length(s);
    i = 0;
    goto L2(i);
  L11():
    goto L0(r7);
  L12():
    m = ld m;
    check L14() else D5();
  L13():
    r8 = dyn base1(<lang `$`(m, URL)>);
    goto L1(r8);
  D5():
    deopt 18 [m];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L20() else L4();
  L14():
    m1 = force? m;
    checkMissing(m1);
    c = `is.object`(m1);
    if c then L16() else L17(m1);
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st url = x;
    available_packages1 = ldf `available.packages`;
    check L21() else D7();
  L15(dx1):
    as_character = ldf `as.character` in base;
    r11 = dyn as_character(dx1);
    check L19() else D6();
  L16():
    dr = tryDispatchBuiltin.1("$", m1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(m3):
    r10 = `$`(m3, <sym URL>);
    goto L15(r10);
  L20():
    lapply = ldf lapply;
    check L27() else D10();
  D6():
    deopt 22 [r11];
  D7():
    deopt 24 [i2];
  D10():
    deopt 38 [];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L19():
    goto L1(r11);
  L21():
    p3 = prom<V +>{
      contrib_url1 = ldf `contrib.url`;
      p2 = prom<V +>{
        url = ld url;
        url1 = force? url;
        checkMissing(url1);
        return url1;
      };
      r13 = dyn contrib_url1(p2);
      return r13;
    };
    p4 = prom<V +>{
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      return method4;
    };
    r16 = dyn available_packages1[, method](p3, p4);
    check L22() else D8();
  L27():
    p5 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    p6 = prom<V +>{
      r23 = clos inner119611165;
      return r23;
    };
    r25 = dyn lapply(p5, p6);
    check L28() else D11();
  D8():
    deopt 28 [i2, r16];
  D11():
    deopt 41 [r25];
  L22():
    l1 = ld z;
    c2 = `is.object`(l1);
    if c2 then L23() else L24(i2, r16, l1);
  L28():
    popenv;
    return r25;
  L3(i8, dx3):
    st z = dx3;
    goto L2(i8);
  L23():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, r16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(i2, r16, dr2);
  L24(i6, r18, l3):
    url2 = ld url;
    check L26() else D9();
  D9():
    deopt 30 [i6, r18, l3, r16, url2];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(i2, dx2);
  L26():
    url3 = force? url2;
    ____ = ldf `[[<-` in base;
    r21 = dyn ____(l3, r16, url3);
    goto L3(i6, r21);
  }
}
fun inner119611165(a) {
  (reg a:*) -+> V { var a:*, reg all_equal:cls, reg a1:*, reg a2:V, reg p:p(V +), reg master:*, reg master1:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st a = a;
    all_equal = ldf `all.equal`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      a1 = ld a;
      a2 = force? a1;
      checkMissing(a2);
      return a2;
    };
    p1 = prom<V +>{
      master = ld master;
      master1 = force? master;
      checkMissing(master1);
      return master1;
    };
    r2 = dyn all_equal(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}