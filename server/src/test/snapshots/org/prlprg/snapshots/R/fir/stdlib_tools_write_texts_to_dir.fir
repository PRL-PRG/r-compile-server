fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner466978180;
    st write_texts_to_dir = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner466978180(lst, dir, verbose) {
  (reg lst:*, reg dir:*, reg verbose:*) -+> V { var lst:*, var dir:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg dir_create:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg Map:cls, reg r2:cls, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg lst1:*, reg lst2:V, reg names:cls, reg r6:V, reg p2:p(V +), reg lst3:*, reg lst4:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg invisible:cls, reg r12:V |
    mkenv;
    st lst = lst;
    st dir = dir;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    dir_create = ldf `dir.create`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn dir_create[, showWarnings, recursive](p, FALSE, FALSE);
    check L3() else D1();
  D1():
    deopt 7 [r1];
  L3():
    Map = ldf Map;
    check L4() else D2();
  D2():
    deopt 9 [];
  L4():
    p1 = prom<V +>{
      r2 = clos inner209816210;
      return r2;
    };
    p2 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      lst1 = ld lst;
      lst2 = force? lst1;
      checkMissing(lst2);
      names = ldf names in base;
      r6 = dyn names(lst2);
      goto L0(r6);
    L2():
      r4 = dyn base(<sym lst>);
      goto L0(r4);
    };
    p3 = prom<V +>{
      lst3 = ld lst;
      lst4 = force? lst3;
      checkMissing(lst4);
      return lst4;
    };
    r9 = dyn Map(p1, p2, p3);
    check L5() else D3();
  D3():
    deopt 13 [r9];
  L5():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1(r11):
    popenv;
    return r11;
  L6():
    invisible = ldf invisible in base;
    r12 = dyn invisible();
    check L8() else D4();
  L7():
    r10 = dyn base1();
    goto L1(r10);
  D4():
    deopt 17 [r12];
  L8():
    goto L1(r12);
  }
}
fun inner209816210(m, s) {
  (reg m:*, reg s:*) -+> V { var m:*, var s:*, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf:cls, reg m1:*, reg m2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg writeLines:cls, reg paste:cls, reg s1:*, reg s2:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg file_path:cls, reg dir:*, reg dir1:V, reg p4:p(V +), reg sprintf1:cls, reg m3:*, reg m4:V, reg p5:p(V +), reg r10:V, reg p6:p(V +), reg r12:V, reg p7:p(V +), reg r14:V |
    mkenv;
    st m = m;
    st s = s;
    verbose = ld verbose;
    check L2() else D0();
  D0():
    deopt 0 [verbose];
  L2():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c = `as.logical`(verbose1);
    if c then L3() else L0();
  L0():
    goto L1();
  L1():
    writeLines = ldf writeLines;
    check L7() else D3();
  L3():
    message = ldf message;
    check L4() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  L4():
    p1 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        m1 = ld m;
        m2 = force? m1;
        checkMissing(m2);
        return m2;
      };
      r1 = dyn sprintf("Processing %s ...", p);
      return r1;
    };
    r3 = dyn message(p1);
    check L5() else D2();
  L7():
    p3 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        s1 = ld s;
        s2 = force? s1;
        checkMissing(s2);
        return s2;
      };
      r6 = dyn paste[, collapse](p2, "\n\n");
      return r6;
    };
    p7 = prom<V +>{
      file_path = ldf `file.path`;
      p4 = prom<V +>{
        dir = ld dir;
        dir1 = force? dir;
        checkMissing(dir1);
        return dir1;
      };
      p6 = prom<V +>{
        sprintf1 = ldf sprintf;
        p5 = prom<V +>{
          m3 = ld m;
          m4 = force? m3;
          checkMissing(m4);
          return m4;
        };
        r10 = dyn sprintf1("%s.txt", p5);
        return r10;
      };
      r12 = dyn file_path(p4, p6);
      return r12;
    };
    r14 = dyn writeLines(p3, p7);
    check L8() else D4();
  D2():
    deopt 5 [r3];
  D4():
    deopt 12 [r14];
  L5():
    goto L1();
  L8():
    popenv;
    return r14;
  }
}