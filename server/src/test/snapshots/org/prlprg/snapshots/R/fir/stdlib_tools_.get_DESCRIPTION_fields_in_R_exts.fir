fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner605703774;
    st `.get_DESCRIPTION_fields_in_R_exts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner605703774(texi) {
  (reg texi:*) -+> V { var texi:*, reg texi_isMissing:L, reg texi_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg texi1:*, reg texi2:V, reg c:V, reg c1:L, reg file_path:cls, reg _R_top_srcdir_from_Rd:cls, reg r2:V, reg p:p(V +), reg r4:V, reg readLines:cls, reg texi3:*, reg texi4:V, reg p1:p(V +), reg r7:V, reg sort:cls, reg unique:cls, reg sub:cls, reg re:*, reg re1:V, reg p2:p(V +), reg lines:*, reg lines1:V, reg c2:L, reg lines3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grepl:cls, reg re2:*, reg re3:V, reg p3:p(V +), reg lines4:*, reg lines5:V, reg p4:p(V +), reg r11:V, reg __:cls, reg r12:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V |
    mkenv;
    texi_isMissing = missing.0(texi);
    if texi_isMissing then L0(NULL) else L0(texi);
  L0(texi_orDefault):
    st texi = texi_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L7() else L2();
  L4():
    texi1 = ld texi;
    check L6() else D0();
  L5():
    r = dyn base(<sym texi>);
    goto L1(r);
  D0():
    deopt 1 [texi1];
  L2():
    goto L3();
  L3():
    readLines = ldf readLines;
    check L11() else D3();
  L6():
    texi2 = force? texi1;
    checkMissing(texi2);
    c = `==`(texi2, NULL);
    goto L1(c);
  L7():
    file_path = ldf `file.path`;
    check L8() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 15 [];
  L8():
    p = prom<V +>{
      _R_top_srcdir_from_Rd = ldf `.R_top_srcdir_from_Rd`;
      r2 = dyn _R_top_srcdir_from_Rd();
      return r2;
    };
    r4 = dyn file_path(p, "doc", "manual", "R-exts.texi");
    check L9() else D2();
  L11():
    p1 = prom<V +>{
      texi3 = ld texi;
      texi4 = force? texi3;
      checkMissing(texi4);
      return texi4;
    };
    r7 = dyn readLines(p1);
    check L12() else D4();
  D2():
    deopt 10 [r4];
  D4():
    deopt 17 [r7];
  L9():
    st texi = r4;
    goto L3();
  L12():
    st lines = r7;
    st re = "^@c DESCRIPTION field ";
    sort = ldf sort;
    check L13() else D5();
  D5():
    deopt 23 [];
  L13():
    p7 = prom<V +>{
      unique = ldf unique;
      p6 = prom<V +>{
        sub = ldf sub;
        p2 = prom<V +>{
          re = ld re;
          re1 = force? re;
          checkMissing(re1);
          return re1;
        };
        p5 = prom<V +>{
          lines = ld lines;
          lines1 = force? lines;
          checkMissing(lines1);
          c2 = `is.object`(lines1);
          if c2 then L1() else L2(lines1);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", lines1);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(lines3):
          grepl = ldf grepl;
          p3 = prom<V +>{
            re2 = ld re;
            re3 = force? re2;
            checkMissing(re3);
            return re3;
          };
          p4 = prom<V +>{
            lines4 = ld lines;
            lines5 = force? lines4;
            checkMissing(lines5);
            return lines5;
          };
          r11 = dyn grepl(p3, p4);
          __ = ldf `[` in base;
          r12 = dyn __(lines3, r11);
          goto L0(r12);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r14 = dyn sub(p2, "", p5);
        return r14;
      };
      r16 = dyn unique(p6);
      return r16;
    };
    r18 = dyn sort(p7);
    check L14() else D6();
  D6():
    deopt 25 [r18];
  L14():
    popenv;
    return r18;
  }
}