fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner309648556;
    st chooseBioCmirror = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner309648556(graphics, ind, `local.only`) {
  (reg graphics:*, reg ind:*, reg local_only:*) -+> V { var graphics:*, reg graphics_isMissing:L, reg graphics_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var ind:*, reg ind_isMissing:L, reg ind_orDefault:*, var `local.only`:*, reg local_only_isMissing:L, reg local_only_orDefault:*, reg _getMirrors:cls, reg file_path:cls, reg R_home:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg local_only1:*, reg local_only2:V, reg p3:p(V +), reg r7:V, reg _chooseMirror:cls, reg m:*, reg m1:V, reg p4:p(V +), reg graphics1:*, reg graphics2:V, reg p5:p(V +), reg ind1:*, reg ind2:V, reg p6:p(V +), reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg url:*, reg url1:V, reg length:cls, reg r14:V, reg c:L, reg options:cls, reg url2:*, reg url3:V, reg p7:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg invisible:cls, reg r20:V |
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
    _getMirrors = ldf `.getMirrors`;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        R_home = ldf `R.home`;
        r2 = dyn R_home("doc");
        return r2;
      };
      r4 = dyn file_path(p1, "BioC_mirrors.csv");
      return r4;
    };
    p3 = prom<V +>{
      local_only1 = ld `local.only`;
      local_only2 = force? local_only1;
      checkMissing(local_only2);
      return local_only2;
    };
    r7 = dyn _getMirrors[, , all, `local.only`]("https://bioconductor.org/BioC_mirrors.csv", p2, FALSE, p3);
    check L9() else D1();
  D1():
    deopt 8 [r7];
  L9():
    st m = r7;
    _chooseMirror = ldf `.chooseMirror`;
    check L10() else D2();
  D2():
    deopt 11 [];
  L10():
    p4 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    p5 = prom<V +>{
      graphics1 = ld graphics;
      graphics2 = force? graphics1;
      checkMissing(graphics2);
      return graphics2;
    };
    p6 = prom<V +>{
      ind1 = ld ind;
      ind2 = force? ind1;
      checkMissing(ind2);
      return ind2;
    };
    r11 = dyn _chooseMirror(p4, "BioC", p5, p6);
    check L11() else D3();
  D3():
    deopt 16 [r11];
  L11():
    st url = r11;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L4(r13):
    c = `as.logical`(r13);
    if c then L16() else L5();
  L12():
    url = ld url;
    check L14() else D4();
  L13():
    r12 = dyn base(<sym url>);
    goto L4(r12);
  D4():
    deopt 20 [url];
  L5():
    goto L6();
  L6():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L14():
    url1 = force? url;
    checkMissing(url1);
    length = ldf length in base;
    r14 = dyn length(url1);
    check L15() else D5();
  L16():
    options = ldf options;
    check L17() else D6();
  D5():
    deopt 23 [r14];
  D6():
    deopt 25 [];
  L7(r19):
    popenv;
    return r19;
  L15():
    goto L4(r14);
  L17():
    p7 = prom<V +>{
      url2 = ld url;
      url3 = force? url2;
      checkMissing(url3);
      return url3;
    };
    r16 = dyn options[BioC_mirror](p7);
    check L18() else D7();
  L20():
    invisible = ldf invisible in base;
    r20 = dyn invisible();
    check L22() else D8();
  L21():
    r18 = dyn base1();
    goto L7(r18);
  D7():
    deopt 28 [r16];
  D8():
    deopt 34 [r20];
  L18():
    goto L6();
  L22():
    goto L7(r20);
  }
}