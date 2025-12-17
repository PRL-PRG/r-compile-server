fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4065868056;
    st tidy_validate_package_Rd_files_from_dir = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4065868056(dir, auto, verbose) {
  (reg dir:*, reg auto:*, reg verbose:*) -+> V { var dir:*, var auto:*, reg auto_isMissing:L, reg auto_orDefault:*, var verbose:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg dir1:*, reg dir2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg tempfile:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg on_exit:cls, reg r9:V, reg r10:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg lapply:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg one:*, reg one1:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg r16:V |
    mkenv;
    st dir = dir;
    auto_isMissing = missing.0(auto);
    if auto_isMissing then L0(NA_LGL) else L0(auto);
  L0(auto_orDefault):
    st auto = auto_orDefault;
    st verbose = verbose;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L9() else L2();
  L5():
    dir1 = ld dir;
    check L7() else D0();
  L6():
    r = dyn base(<sym dir>);
    goto L1(r);
  D0():
    deopt 2 [dir1];
  L2():
    tempfile = ldf tempfile;
    check L12() else D2();
  L7():
    dir2 = force? dir1;
    checkMissing(dir2);
    length = ldf length in base;
    r2 = dyn length(dir2);
    check L8() else D1();
  L9():
    popenv;
    return NULL;
  D1():
    deopt 5 [r2];
  D2():
    deopt 13 [];
  L8():
    goto L1(r2);
  L12():
    r6 = dyn tempfile();
    check L13() else D3();
  D3():
    deopt 14 [r6];
  L13():
    st out = r6;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L4():
    r10 = clos inner1737462240;
    st one = r10;
    do_call = ldf `do.call`;
    check L16() else D4();
  L14():
    on_exit = ldf `on.exit` in base;
    r9 = dyn on_exit(<lang unlink(out)>);
    goto L4();
  L15():
    r7 = dyn base1(<lang unlink(out)>);
    goto L4();
  D4():
    deopt 23 [];
  L16():
    p = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      p2 = prom<V +>{
        one = ld one;
        one1 = force? one;
        checkMissing(one1);
        return one1;
      };
      r14 = dyn lapply(p1, p2);
      return r14;
    };
    r16 = dyn do_call(p, p3);
    check L17() else D5();
  D5():
    deopt 26 [r16];
  L17():
    popenv;
    return r16;
  }
}
fun inner1737462240(d) {
  (reg d:*) -+> V { var d:*, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf:cls, reg basename:cls, reg d1:*, reg d2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg Rd_db:cls, reg d3:*, reg d4:V, reg p3:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg auto:*, reg auto1:V, reg is_na:cls, reg r11:V, reg r12:V, reg c1:L, reg vapply:cls, reg db:*, reg db1:V, reg p4:p(V +), reg r14:cls, reg p5:p(V +), reg r16:V, reg db2:*, reg db3:V, reg c2:L, reg db5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg auto2:*, reg auto3:V, reg c3:L, reg is:*, reg is1:V, reg db8:V, reg is2:V, reg is3:*, reg is4:V, reg r17:V, reg __:cls, reg r18:V, reg lapply:cls, reg db9:*, reg db10:V, reg p6:p(V +), reg r20:cls, reg p7:p(V +), reg r22:V, reg tidy_validate_db:cls, reg results:*, reg results1:V, reg p8:p(V +), reg sprintf1:cls, reg basename1:cls, reg d5:*, reg d6:V, reg p9:p(V +), reg r25:V, reg p10:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:V, reg db11:*, reg db12:V, reg names:cls, reg r29:V, reg p11:p(V +), reg r31:V, reg p12:p(V +), reg r33:V |
    mkenv;
    st d = d;
    verbose = ld verbose;
    check L8() else D0();
  D0():
    deopt 0 [verbose];
  L8():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c = `as.logical`(verbose1);
    if c then L9() else L0();
  L0():
    goto L1();
  L1():
    Rd_db = ldf Rd_db;
    check L13() else D3();
  L9():
    message = ldf message;
    check L10() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  L10():
    p2 = prom<V +>{
      sprintf = ldf sprintf;
      p1 = prom<V +>{
        basename = ldf basename;
        p = prom<V +>{
          d1 = ld d;
          d2 = force? d1;
          checkMissing(d2);
          return d2;
        };
        r1 = dyn basename(p);
        return r1;
      };
      r3 = dyn sprintf("* Package: %s", p1);
      return r3;
    };
    r5 = dyn message(p2);
    check L11() else D2();
  L13():
    p3 = prom<V +>{
      d3 = ld d;
      d4 = force? d3;
      checkMissing(d4);
      return d4;
    };
    r8 = dyn Rd_db[dir](p3);
    check L14() else D4();
  D2():
    deopt 5 [r5];
  D4():
    deopt 12 [r8];
  L11():
    goto L1();
  L14():
    st db = r8;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L2(r10):
    r12 = `!`(r10);
    c1 = `as.logical`(r12);
    if c1 then L19() else L3();
  L15():
    auto = ld auto;
    check L17() else D5();
  L16():
    r9 = dyn base(<sym auto>);
    goto L2(r9);
  D5():
    deopt 16 [auto];
  L3():
    goto L7();
  L7():
    lapply = ldf lapply;
    check L32() else D13();
  L17():
    auto1 = force? auto;
    checkMissing(auto1);
    is_na = ldf `is.na` in base;
    r11 = dyn is_na(auto1);
    check L18() else D6();
  L19():
    vapply = ldf vapply;
    check L20() else D7();
  D6():
    deopt 19 [r11];
  D7():
    deopt 22 [];
  D13():
    deopt 42 [];
  L18():
    goto L2(r11);
  L20():
    p4 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p5 = prom<V +>{
      r14 = clos inner3708401697;
      return r14;
    };
    r16 = dyn vapply(p4, p5, NA_LGL);
    check L21() else D8();
  L32():
    p6 = prom<V +>{
      db9 = ld db;
      db10 = force? db9;
      checkMissing(db10);
      return db10;
    };
    p7 = prom<V +>{
      r20 = clos inner2501545716;
      return r20;
    };
    r22 = dyn lapply(p6, p7);
    check L33() else D14();
  D8():
    deopt 26 [r16];
  D14():
    deopt 45 [r22];
  L21():
    st is = r16;
    db2 = ld db;
    check L22() else D9();
  L33():
    st results = r22;
    tidy_validate_db = ldf tidy_validate_db;
    check L34() else D15();
  D9():
    deopt 28 [db2];
  D15():
    deopt 48 [];
  L22():
    db3 = force? db2;
    checkMissing(db3);
    c2 = `is.object`(db3);
    if c2 then L23() else L24(db3);
  L34():
    p8 = prom<V +>{
      results = ld results;
      results1 = force? results;
      checkMissing(results1);
      return results1;
    };
    p12 = prom<V +>{
      sprintf1 = ldf sprintf;
      p10 = prom<V +>{
        basename1 = ldf basename;
        p9 = prom<V +>{
          d5 = ld d;
          d6 = force? d5;
          checkMissing(d6);
          return d6;
        };
        r25 = dyn basename1(p9);
        return r25;
      };
      p11 = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r28):
        return r28;
      L1():
        db11 = ld db;
        db12 = force? db11;
        checkMissing(db12);
        names = ldf names in base;
        r29 = dyn names(db12);
        goto L0(r29);
      L2():
        r27 = dyn base1(<sym db>);
        goto L0(r27);
      };
      r31 = dyn sprintf1("%s::%s", p10, p11);
      return r31;
    };
    r33 = dyn tidy_validate_db(p8, p12);
    check L35() else D16();
  D16():
    deopt 51 [r33];
  L4(dx1):
    st db = dx1;
    goto L7();
  L23():
    dr = tryDispatchBuiltin.1("[", db3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(db5):
    auto2 = ld auto;
    check L26() else D10();
  L35():
    popenv;
    return r33;
  D10():
    deopt 30 [db5, auto2];
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L26():
    auto3 = force? auto2;
    checkMissing(auto3);
    c3 = `as.logical`(auto3);
    if c3 then L27() else L5();
  L5():
    is3 = ld is;
    check L30() else D12();
  L6(db8, is2):
    __ = ldf `[` in base;
    r18 = dyn __(db8, is2);
    goto L4(r18);
  L27():
    is = ld is;
    check L28() else D11();
  D11():
    deopt 32 [db5, is];
  D12():
    deopt 34 [db5, is3];
  L28():
    is1 = force? is;
    checkMissing(is1);
    goto L6(db5, is1);
  L30():
    is4 = force? is3;
    checkMissing(is4);
    r17 = `!`(is4);
    goto L6(db5, r17);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg attr:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg g:*, reg g1:V, reg c1:L, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c7:L, reg r9:V, reg g2:*, reg g3:V, reg length:cls, reg r10:V, reg r11:V, reg c8:L, reg c9:V, reg c11:L, reg c13:V, reg startsWith:cls, reg g4:*, reg g5:V, reg p:p(V +), reg r13:V, reg c14:L, reg c15:V |
    mkenv;
    st e = e;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `is.object`(r1);
    if c then L10() else L11(r1);
  L5():
    e1 = ld e;
    check L7() else D0();
  L6():
    r = dyn base(<sym e>, "meta");
    goto L0(r);
  D0():
    deopt 2 [e1];
  L7():
    e2 = force? e1;
    checkMissing(e2);
    attr = ldf attr in base;
    r2 = dyn attr(e2, "meta");
    check L8() else D1();
  L9(dx1):
    st g = dx1;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L10():
    dr = tryDispatchBuiltin.1("$", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r4):
    r5 = `$`(r4, <sym generator>);
    goto L9(r5);
  D1():
    deopt 6 [r2];
  L1(r7):
    c2 = `as.logical`(r7);
    if c2 then L16() else L2(c2);
  L8():
    goto L0(r2);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    g = ld g;
    check L15() else D2();
  L14():
    r6 = dyn base1(<sym g>);
    goto L1(r6);
  D2():
    deopt 10 [g];
  L2(c4):
    c11 = `as.logical`(c4);
    if c11 then L22() else L4(c11);
  L15():
    g1 = force? g;
    checkMissing(g1);
    c1 = `is.character`(g1);
    goto L1(c1);
  L16():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L3(c7, r9):
    r11 = `==`(r9, 1);
    c8 = `as.logical`(r11);
    c9 = `&&`(c7, c8);
    goto L2(c9);
  L4(c13):
    visible.0();
    popenv;
    return c13;
  L17():
    g2 = ld g;
    check L19() else D3();
  L18():
    r8 = dyn base2(<sym g>);
    goto L3(c2, r8);
  L22():
    startsWith = ldf startsWith;
    check L23() else D5();
  D3():
    deopt 15 [c2, g2];
  D5():
    deopt 23 [c11];
  L19():
    g3 = force? g2;
    checkMissing(g3);
    length = ldf length in base;
    r10 = dyn length(g3);
    check L20() else D4();
  L23():
    p = prom<V +>{
      g4 = ld g;
      g5 = force? g4;
      checkMissing(g5);
      return g5;
    };
    r13 = dyn startsWith(p, "% Generated by roxygen2");
    check L24() else D6();
  D4():
    deopt 18 [c2, r10];
  D6():
    deopt 26 [c11, r13];
  L20():
    goto L3(c2, r10);
  L24():
    c14 = `as.logical`(r13);
    c15 = `&&`(c11, c14);
    goto L4(c15);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg tryCatch:cls, reg Rd2HTML:cls, reg x1:*, reg x2:V, reg p:p(V +), reg out:*, reg out1:V, reg p1:p(V +), reg tidy_validate:cls, reg out2:*, reg out3:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg identity:*, reg identity1:V, reg p4:p(V +), reg r7:V |
    mkenv;
    st x = x;
    tryCatch = ldf tryCatch;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      Rd2HTML = ldf Rd2HTML;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        out = ld out;
        out1 = force? out;
        checkMissing(out1);
        return out1;
      };
      dyn Rd2HTML[, , concordance](p, p1, TRUE);
      tidy_validate = ldf tidy_validate;
      p2 = prom<V +>{
        out2 = ld out;
        out3 = force? out2;
        checkMissing(out3);
        return out3;
      };
      r4 = dyn tidy_validate(p2);
      return r4;
    };
    p4 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r7 = dyn tryCatch[, error](p3, p4);
    check L1() else D1();
  D1():
    deopt 5 [r7];
  L1():
    popenv;
    return r7;
  }
}