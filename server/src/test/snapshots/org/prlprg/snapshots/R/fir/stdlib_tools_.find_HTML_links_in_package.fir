fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner266178714;
    st `.find_HTML_links_in_package` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner266178714(dir, absolute) {
  (reg dir:*, reg absolute:*) -+> V { var dir:*, var absolute:*, reg absolute_isMissing:L, reg absolute_orDefault:*, reg file_test:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg readRDS:cls, reg f:*, reg f1:V, reg p2:p(V +), reg r5:V, reg r6:V, reg file_test1:cls, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg c1:L, reg _build_links_index:cls, reg readRDS1:cls, reg f2:*, reg f3:V, reg p5:p(V +), reg r12:V, reg p6:p(V +), reg basename:cls, reg dir5:*, reg dir6:V, reg p7:p(V +), reg r15:V, reg p8:p(V +), reg r17:V, reg character:cls, reg r18:V, reg absolute1:*, reg absolute2:V, reg c2:L, reg structure:cls, reg file_path2:cls, reg dir7:*, reg dir8:V, reg p9:p(V +), reg basename1:cls, reg ans:*, reg ans1:V, reg p10:p(V +), reg r21:V, reg p11:p(V +), reg r23:V, reg p12:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r25:V, reg r26:V, reg ans2:*, reg ans3:V, reg names:cls, reg r27:V, reg p13:p(V +), reg r29:V, reg ans4:*, reg ans5:V |
    mkenv;
    st dir = dir;
    absolute_isMissing = missing.0(absolute);
    if absolute_isMissing then L0(FALSE) else L0(absolute);
  L0(absolute_orDefault):
    st absolute = absolute_orDefault;
    file_test = ldf file_test;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r1 = dyn file_path(p, "Meta", "links.rds");
      st f = r1;
      invisible.0();
      return r1;
    };
    r3 = dyn file_test("-f", p1);
    check L6() else D1();
  D1():
    deopt 4 [r3];
  L6():
    c = `as.logical`(r3);
    if c then L7() else L1();
  L1():
    file_test1 = ldf file_test;
    check L11() else D4();
  L2(r6):
    st ans = r6;
    absolute1 = ld absolute;
    check L19() else D10();
  L7():
    readRDS = ldf readRDS;
    check L8() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 10 [];
  D10():
    deopt 23 [absolute1];
  L8():
    p2 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r5 = dyn readRDS(p2);
    check L9() else D3();
  L11():
    p4 = prom<V +>{
      file_path1 = ldf `file.path`;
      p3 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r8 = dyn file_path1(p3, "Meta", "Rd.rds");
      st f = r8;
      invisible.0();
      return r8;
    };
    r10 = dyn file_test1("-f", p4);
    check L12() else D5();
  L19():
    absolute2 = force? absolute1;
    checkMissing(absolute2);
    c2 = `as.logical`(absolute2);
    if c2 then L20() else L4();
  D3():
    deopt 8 [r5];
  D5():
    deopt 13 [r10];
  L4():
    ans4 = ld ans;
    check L24() else D13();
  L9():
    goto L2(r5);
  L12():
    c1 = `as.logical`(r10);
    if c1 then L13() else L3();
  L20():
    structure = ldf structure;
    check L21() else D11();
  D11():
    deopt 26 [];
  D13():
    deopt 31 [ans4];
  L3():
    character = ldf character;
    check L17() else D8();
  L13():
    _build_links_index = ldf `.build_links_index`;
    check L14() else D6();
  L21():
    p12 = prom<V +>{
      file_path2 = ldf `file.path`;
      p9 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      p11 = prom<V +>{
        basename1 = ldf basename;
        p10 = prom<V +>{
          ans = ld ans;
          ans1 = force? ans;
          checkMissing(ans1);
          return ans1;
        };
        r21 = dyn basename1(p10);
        return r21;
      };
      r23 = dyn file_path2[, , , fsep](p9, "html", p11, "/");
      return r23;
    };
    p13 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r26):
      return r26;
    L1():
      ans2 = ld ans;
      ans3 = force? ans2;
      checkMissing(ans3);
      names = ldf names in base;
      r27 = dyn names(ans3);
      goto L0(r27);
    L2():
      r25 = dyn base(<sym ans>);
      goto L0(r25);
    };
    r29 = dyn structure[, names](p12, p13);
    check L22() else D12();
  L24():
    ans5 = force? ans4;
    checkMissing(ans5);
    popenv;
    return ans5;
  D6():
    deopt 15 [];
  D8():
    deopt 20 [];
  D12():
    deopt 30 [r29];
  L14():
    p6 = prom<V +>{
      readRDS1 = ldf readRDS;
      p5 = prom<V +>{
        f2 = ld f;
        f3 = force? f2;
        checkMissing(f3);
        return f3;
      };
      r12 = dyn readRDS1(p5);
      return r12;
    };
    p8 = prom<V +>{
      basename = ldf basename;
      p7 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r15 = dyn basename(p7);
      return r15;
    };
    r17 = dyn _build_links_index(p6, p8);
    check L15() else D7();
  L17():
    r18 = dyn character();
    check L18() else D9();
  L22():
    popenv;
    return r29;
  D7():
    deopt 18 [r17];
  D9():
    deopt 21 [r18];
  L15():
    goto L2(r17);
  L18():
    goto L2(r18);
  }
}