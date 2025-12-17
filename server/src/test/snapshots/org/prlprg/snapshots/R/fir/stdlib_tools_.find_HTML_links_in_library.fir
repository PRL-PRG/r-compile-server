fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner266178714;
    st `.find_HTML_links_in_library` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner266178714(dir, absolute) {
  (reg dir:*, reg absolute:*) -+> V { var dir:*, var absolute:*, reg absolute_isMissing:L, reg absolute_orDefault:*, reg file_test:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg readRDS:cls, reg f:*, reg f1:V, reg p2:p(V +), reg r5:V, reg r6:V, reg _build_library_links_index:cls, reg dir3:*, reg dir4:V, reg p3:p(V +), reg r8:V, reg absolute1:*, reg absolute2:V, reg c1:L, reg structure:cls, reg file_path1:cls, reg dir5:*, reg dir6:V, reg p4:p(V +), reg substring:cls, reg ans:*, reg ans1:V, reg p5:p(V +), reg r11:V, reg p6:p(V +), reg r13:V, reg p7:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg ans2:*, reg ans3:V, reg names:cls, reg r17:V, reg p8:p(V +), reg r19:V, reg ans4:*, reg ans5:V |
    mkenv;
    st dir = dir;
    absolute_isMissing = missing.0(absolute);
    if absolute_isMissing then L0(FALSE) else L0(absolute);
  L0(absolute_orDefault):
    st absolute = absolute_orDefault;
    file_test = ldf file_test;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r1 = dyn file_path(p, ".Meta", "links.rds");
      st f = r1;
      invisible.0();
      return r1;
    };
    r3 = dyn file_test("-f", p1);
    check L5() else D1();
  D1():
    deopt 4 [r3];
  L5():
    c = `as.logical`(r3);
    if c then L6() else L1();
  L1():
    _build_library_links_index = ldf `.build_library_links_index`;
    check L10() else D4();
  L2(r6):
    st ans = r6;
    absolute1 = ld absolute;
    check L12() else D6();
  L6():
    readRDS = ldf readRDS;
    check L7() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 10 [];
  D6():
    deopt 14 [absolute1];
  L7():
    p2 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r5 = dyn readRDS(p2);
    check L8() else D3();
  L10():
    p3 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r8 = dyn _build_library_links_index(p3);
    check L11() else D5();
  L12():
    absolute2 = force? absolute1;
    checkMissing(absolute2);
    c1 = `as.logical`(absolute2);
    if c1 then L13() else L3();
  D3():
    deopt 8 [r5];
  D5():
    deopt 12 [r8];
  L3():
    ans4 = ld ans;
    check L17() else D9();
  L8():
    goto L2(r5);
  L11():
    goto L2(r8);
  L13():
    structure = ldf structure;
    check L14() else D7();
  D7():
    deopt 17 [];
  D9():
    deopt 22 [ans4];
  L14():
    p7 = prom<V +>{
      file_path1 = ldf `file.path`;
      p4 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      p6 = prom<V +>{
        substring = ldf substring;
        p5 = prom<V +>{
          ans = ld ans;
          ans1 = force? ans;
          checkMissing(ans1);
          return ans1;
        };
        r11 = dyn substring[, first](p5, 7.0);
        return r11;
      };
      r13 = dyn file_path1[, , fsep](p4, p6, "/");
      return r13;
    };
    p8 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r16):
      return r16;
    L1():
      ans2 = ld ans;
      ans3 = force? ans2;
      checkMissing(ans3);
      names = ldf names in base;
      r17 = dyn names(ans3);
      goto L0(r17);
    L2():
      r15 = dyn base(<sym ans>);
      goto L0(r15);
    };
    r19 = dyn structure[, names](p7, p8);
    check L15() else D8();
  L17():
    ans5 = force? ans4;
    checkMissing(ans5);
    popenv;
    return ans5;
  D8():
    deopt 21 [r19];
  L15():
    popenv;
    return r19;
  }
}