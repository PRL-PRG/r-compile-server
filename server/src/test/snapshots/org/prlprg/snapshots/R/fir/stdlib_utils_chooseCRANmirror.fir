fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner309648556;
    st chooseCRANmirror = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner309648556(graphics, ind, `local.only`) {
  (reg graphics:*, reg ind:*, reg local_only:*) -+> V { var graphics:*, reg graphics_isMissing:L, reg graphics_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var ind:*, reg ind_isMissing:L, reg ind_orDefault:*, var `local.only`:*, reg local_only_isMissing:L, reg local_only_orDefault:*, reg getCRANmirrors:cls, reg local_only1:*, reg local_only2:V, reg p1:p(V +), reg r3:V, reg _chooseMirror:cls, reg m:*, reg m1:V, reg p2:p(V +), reg graphics1:*, reg graphics2:V, reg p3:p(V +), reg ind1:*, reg ind2:V, reg p4:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg url:*, reg url1:V, reg length:cls, reg r10:V, reg c:L, reg getOption1:cls, reg r11:V, reg url2:*, reg url3:V, reg l:*, reg c1:L, reg url5:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r12:V, reg options:cls, reg repos:*, reg repos1:V, reg p5:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg invisible:cls, reg r18:V |
    mkenv;
    graphics_isMissing = missing.0(graphics);
    if graphics_isMissing then L0() else L1(graphics);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("menu.graphics");
      return r;
    };
    goto L1(p);
  L1(graphics_orDefault):
    st graphics = graphics_orDefault;
    ind_isMissing = missing.0(ind);
    if ind_isMissing then L2(NULL) else L2(ind);
  L2(ind_orDefault):
    st ind = ind_orDefault;
    local_only_isMissing = missing.0(local_only);
    if local_only_isMissing then L3(FALSE) else L3(local_only);
  L3(local_only_orDefault):
    st `local.only` = local_only_orDefault;
    getCRANmirrors = ldf getCRANmirrors;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p1 = prom<V +>{
      local_only1 = ld `local.only`;
      local_only2 = force? local_only1;
      checkMissing(local_only2);
      return local_only2;
    };
    r3 = dyn getCRANmirrors[all, `local.only`](FALSE, p1);
    check L10() else D1();
  D1():
    deopt 6 [r3];
  L10():
    st m = r3;
    _chooseMirror = ldf `.chooseMirror`;
    check L11() else D2();
  D2():
    deopt 9 [];
  L11():
    p2 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    p3 = prom<V +>{
      graphics1 = ld graphics;
      graphics2 = force? graphics1;
      checkMissing(graphics2);
      return graphics2;
    };
    p4 = prom<V +>{
      ind1 = ld ind;
      ind2 = force? ind1;
      checkMissing(ind2);
      return ind2;
    };
    r7 = dyn _chooseMirror(p2, "CRAN", p3, p4);
    check L12() else D3();
  D3():
    deopt 14 [r7];
  L12():
    st url = r7;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L4(r9):
    c = `as.logical`(r9);
    if c then L17() else L5();
  L13():
    url = ld url;
    check L15() else D4();
  L14():
    r8 = dyn base(<sym url>);
    goto L4(r8);
  D4():
    deopt 18 [url];
  L5():
    goto L7();
  L7():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L15():
    url1 = force? url;
    checkMissing(url1);
    length = ldf length in base;
    r10 = dyn length(url1);
    check L16() else D5();
  L17():
    getOption1 = ldf getOption;
    check L18() else D6();
  D5():
    deopt 21 [r10];
  D6():
    deopt 23 [];
  L8(r17):
    popenv;
    return r17;
  L16():
    goto L4(r10);
  L18():
    r11 = dyn getOption1("repos");
    check L19() else D7();
  L27():
    invisible = ldf invisible in base;
    r18 = dyn invisible();
    check L29() else D11();
  L28():
    r16 = dyn base1();
    goto L8(r16);
  D7():
    deopt 25 [r11];
  D11():
    deopt 44 [r18];
  L19():
    st repos = r11;
    url2 = ld url;
    check L20() else D8();
  L29():
    goto L8(r18);
  D8():
    deopt 27 [url2];
  L20():
    url3 = force? url2;
    checkMissing(url3);
    l = ld repos;
    c1 = `is.object`(l);
    if c1 then L21() else L22(url3, l);
  L6(dx1):
    st repos = dx1;
    options = ldf options;
    check L24() else D9();
  L21():
    dr = tryDispatchBuiltin.0("[<-", l, url3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(url3, dr);
  L22(url5, l2):
    ___ = ldf `[<-` in base;
    r12 = dyn ___(l2, url3, "CRAN");
    goto L6(r12);
  D9():
    deopt 35 [];
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L24():
    p5 = prom<V +>{
      repos = ld repos;
      repos1 = force? repos;
      checkMissing(repos1);
      return repos1;
    };
    r14 = dyn options[repos](p5);
    check L25() else D10();
  D10():
    deopt 38 [r14];
  L25():
    goto L7();
  }
}