fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner425681874;
    st `format.aspell` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner425681874(x, sort, verbose, indent, `...`) {
  (reg x:*, reg sort:*, reg verbose:*, reg indent:*, reg ddd:dots) -+> V { var x:*, var sort:*, reg sort_isMissing:L, reg sort_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var indent:*, reg indent_isMissing:L, reg indent_orDefault:*, var `...`:dots?, reg nrow:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg character:cls, reg r3:V, reg sort1:*, reg sort2:V, reg c1:L, reg x3:*, reg x4:V, reg c2:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg order:cls, reg x7:*, reg x8:V, reg c3:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg p1:p(V +), reg x11:*, reg x12:V, reg c4:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r8:V, reg p2:p(V +), reg x15:*, reg x16:V, reg c5:L, reg x18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r10:V, reg p3:p(V +), reg x19:*, reg x20:V, reg c6:L, reg x22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r12:V, reg p4:p(V +), reg r14:V, reg __:cls, reg r15:V, reg split:cls, reg sprintf:cls, reg x23:*, reg x24:V, reg c7:L, reg x26:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r16:V, reg p5:p(V +), reg x27:*, reg x28:V, reg c8:L, reg x30:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r18:V, reg p6:p(V +), reg x31:*, reg x32:V, reg c9:L, reg x34:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg r20:V, reg p7:p(V +), reg r22:V, reg p8:p(V +), reg x35:*, reg x36:V, reg c10:L, reg x38:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg r24:V, reg p9:p(V +), reg r26:V, reg verbose1:*, reg verbose2:V, reg c11:L, reg unlist:cls, reg Map:cls, reg r27:cls, reg p10:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r29:V, reg r30:V, reg from:*, reg from1:V, reg names:cls, reg r31:V, reg p11:p(V +), reg from2:*, reg from3:V, reg p12:p(V +), reg split1:cls, reg x39:*, reg x40:V, reg c12:L, reg x42:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg r34:V, reg p13:p(V +), reg x43:*, reg x44:V, reg c13:L, reg x46:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg r36:V, reg p14:p(V +), reg r38:V, reg p15:p(V +), reg r40:V, reg p16:p(V +), reg r42:V, reg sprintf1:cls, reg strrep:cls, reg indent1:*, reg indent2:V, reg p17:p(V +), reg r44:V, reg p18:p(V +), reg r46:V, reg paste:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r47:V, reg r48:V, reg from4:*, reg from5:V, reg names1:cls, reg r49:V, reg p19:p(V +), reg vapply:cls, reg from6:*, reg from7:V, reg p20:p(V +), reg paste1:*, reg paste2:V, reg p21:p(V +), reg sep:*, reg sep1:V, reg p22:p(V +), reg r54:V, reg p23:p(V +), reg sep2:*, reg sep3:V, reg p24:p(V +), reg r57:V |
    mkenv;
    st x = x;
    sort_isMissing = missing.0(sort);
    if sort_isMissing then L0(TRUE) else L0(sort);
  L0(sort_orDefault):
    st sort = sort_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L1(FALSE) else L1(verbose);
  L1(verbose_orDefault):
    st verbose = verbose_orDefault;
    indent_isMissing = missing.0(indent);
    if indent_isMissing then L2(2) else L2(indent);
  L2(indent_orDefault):
    st indent = indent_orDefault;
    st `...` = ddd;
    nrow = ldf nrow;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn nrow(p);
    check L10() else D1();
  D1():
    deopt 3 [r1];
  L10():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L11() else L3();
  L3():
    sort1 = ld sort;
    check L16() else D4();
  L11():
    character = ldf character;
    check L12() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 11 [sort1];
  L12():
    r3 = dyn character();
    check L13() else D3();
  L16():
    sort2 = force? sort1;
    checkMissing(sort2);
    c1 = `as.logical`(sort2);
    if c1 then L17() else L5();
  D3():
    deopt 7 [r3];
  L5():
    goto L7();
  L7():
    split = ldf split;
    check L25() else D8();
  L13():
    popenv;
    return r3;
  L17():
    x3 = ld x;
    check L18() else D5();
  D5():
    deopt 13 [x3];
  D8():
    deopt 29 [];
  L18():
    x4 = force? x3;
    checkMissing(x4);
    c2 = `is.object`(x4);
    if c2 then L19() else L20(x4);
  L25():
    p8 = prom<V +>{
      sprintf = ldf sprintf;
      p5 = prom<V +>{
        x23 = ld x;
        x24 = force? x23;
        checkMissing(x24);
        c7 = `is.object`(x24);
        if c7 then L1() else L2(x24);
      L0(dx12):
        return dx12;
      L1():
        dr10 = tryDispatchBuiltin.1("$", x24);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(x26):
        r16 = `$`(x26, <sym File>);
        goto L0(r16);
      L3():
        dx11 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx11);
      };
      p6 = prom<V +>{
        x27 = ld x;
        x28 = force? x27;
        checkMissing(x28);
        c8 = `is.object`(x28);
        if c8 then L1() else L2(x28);
      L0(dx14):
        return dx14;
      L1():
        dr12 = tryDispatchBuiltin.1("$", x28);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(x30):
        r18 = `$`(x30, <sym Line>);
        goto L0(r18);
      L3():
        dx13 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx13);
      };
      p7 = prom<V +>{
        x31 = ld x;
        x32 = force? x31;
        checkMissing(x32);
        c9 = `is.object`(x32);
        if c9 then L1() else L2(x32);
      L0(dx16):
        return dx16;
      L1():
        dr14 = tryDispatchBuiltin.1("$", x32);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(x34):
        r20 = `$`(x34, <sym Column>);
        goto L0(r20);
      L3():
        dx15 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx15);
      };
      r22 = dyn sprintf("%s:%d:%d", p5, p6, p7);
      return r22;
    };
    p9 = prom<V +>{
      x35 = ld x;
      x36 = force? x35;
      checkMissing(x36);
      c10 = `is.object`(x36);
      if c10 then L1() else L2(x36);
    L0(dx18):
      return dx18;
    L1():
      dr16 = tryDispatchBuiltin.1("$", x36);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(x38):
      r24 = `$`(x38, <sym Original>);
      goto L0(r24);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx17);
    };
    r26 = dyn split(p8, p9);
    check L26() else D9();
  D9():
    deopt 32 [r26];
  L6(dx1):
    st x = dx1;
    goto L7();
  L19():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(x6):
    order = ldf order;
    check L22() else D6();
  L26():
    st from = r26;
    verbose1 = ld verbose;
    check L27() else D10();
  D6():
    deopt 16 [x6];
  D10():
    deopt 34 [verbose1];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L22():
    p1 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c3 = `is.object`(x8);
      if c3 then L1() else L2(x8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x10):
      r6 = `$`(x10, <sym Original>);
      goto L0(r6);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c4 = `is.object`(x12);
      if c4 then L1() else L2(x12);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x14):
      r8 = `$`(x14, <sym File>);
      goto L0(r8);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p3 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      c5 = `is.object`(x16);
      if c5 then L1() else L2(x16);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x16);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x18):
      r10 = `$`(x18, <sym Line>);
      goto L0(r10);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p4 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      c6 = `is.object`(x20);
      if c6 then L1() else L2(x20);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", x20);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x22):
      r12 = `$`(x22, <sym Column>);
      goto L0(r12);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r14 = dyn order(p1, p2, p3, p4);
    check L23() else D7();
  L27():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c11 = `as.logical`(verbose2);
    if c11 then L28() else L8();
  D7():
    deopt 21 [x6, r14];
  L8():
    sprintf1 = ldf sprintf;
    check L32() else D13();
  L23():
    __ = ldf `[` in base;
    r15 = dyn __(x4, r14, <missing>);
    goto L6(r15);
  L28():
    unlist = ldf unlist;
    check L29() else D11();
  D11():
    deopt 37 [];
  D13():
    deopt 41 [];
  L29():
    p16 = prom<V +>{
      Map = ldf Map;
      p10 = prom<V +>{
        r27 = clos inner2796823808;
        return r27;
      };
      p11 = prom<V +>{
        sym = ldf names;
        base = ldf names in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r30):
        return r30;
      L1():
        from = ld from;
        from1 = force? from;
        checkMissing(from1);
        names = ldf names in base;
        r31 = dyn names(from1);
        goto L0(r31);
      L2():
        r29 = dyn base(<sym from>);
        goto L0(r29);
      };
      p12 = prom<V +>{
        from2 = ld from;
        from3 = force? from2;
        checkMissing(from3);
        return from3;
      };
      p15 = prom<V +>{
        split1 = ldf split;
        p13 = prom<V +>{
          x39 = ld x;
          x40 = force? x39;
          checkMissing(x40);
          c12 = `is.object`(x40);
          if c12 then L1() else L2(x40);
        L0(dx20):
          return dx20;
        L1():
          dr18 = tryDispatchBuiltin.1("$", x40);
          dc9 = getTryDispatchBuiltinDispatched(dr18);
          if dc9 then L3() else L2(dr18);
        L2(x42):
          r34 = `$`(x42, <sym Suggestions>);
          goto L0(r34);
        L3():
          dx19 = getTryDispatchBuiltinValue(dr18);
          goto L0(dx19);
        };
        p14 = prom<V +>{
          x43 = ld x;
          x44 = force? x43;
          checkMissing(x44);
          c13 = `is.object`(x44);
          if c13 then L1() else L2(x44);
        L0(dx22):
          return dx22;
        L1():
          dr20 = tryDispatchBuiltin.1("$", x44);
          dc10 = getTryDispatchBuiltinDispatched(dr20);
          if dc10 then L3() else L2(dr20);
        L2(x46):
          r36 = `$`(x46, <sym Original>);
          goto L0(r36);
        L3():
          dx21 = getTryDispatchBuiltinValue(dr20);
          goto L0(dx21);
        };
        r38 = dyn split1(p13, p14);
        return r38;
      };
      r40 = dyn Map(p10, p11, p12, p15);
      return r40;
    };
    r42 = dyn unlist(p16);
    check L30() else D12();
  L32():
    p18 = prom<V +>{
      strrep = ldf strrep;
      p17 = prom<V +>{
        indent1 = ld indent;
        indent2 = force? indent1;
        checkMissing(indent2);
        return indent2;
      };
      r44 = dyn strrep(" ", p17);
      return r44;
    };
    r46 = dyn sprintf1("\n%s", p18);
    check L33() else D14();
  D12():
    deopt 39 [r42];
  D14():
    deopt 44 [r46];
  L30():
    popenv;
    return r42;
  L33():
    st sep = r46;
    paste = ldf paste;
    check L34() else D15();
  D15():
    deopt 47 [];
  L34():
    p19 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      from4 = ld from;
      from5 = force? from4;
      checkMissing(from5);
      names1 = ldf names in base;
      r49 = dyn names1(from5);
      goto L0(r49);
    L2():
      r47 = dyn base1(<sym from>);
      goto L0(r47);
    };
    p23 = prom<V +>{
      vapply = ldf vapply;
      p20 = prom<V +>{
        from6 = ld from;
        from7 = force? from6;
        checkMissing(from7);
        return from7;
      };
      p21 = prom<V +>{
        paste1 = ld paste;
        paste2 = force? paste1;
        checkMissing(paste2);
        return paste2;
      };
      p22 = prom<V +>{
        sep = ld sep;
        sep1 = force? sep;
        checkMissing(sep1);
        return sep1;
      };
      r54 = dyn vapply[, , , collapse](p20, p21, "", p22);
      return r54;
    };
    p24 = prom<V +>{
      sep2 = ld sep;
      sep3 = force? sep2;
      checkMissing(sep3);
      return sep3;
    };
    r57 = dyn paste[, , sep](p19, p23, p24);
    check L35() else D16();
  D16():
    deopt 52 [r57];
  L35():
    popenv;
    return r57;
  }
}
fun inner2796823808(w, f, s) {
  (reg w:*, reg f:*, reg s:*) -+> V { var w:*, var f:*, var s:*, reg sprintf:cls, reg w1:*, reg w2:V, reg p:p(V +), reg paste0:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg f1:*, reg f2:V, reg length:cls, reg r7:V, reg r8:V, reg rep_int:cls, reg r9:V, reg c:cls, reg r10:V, reg p1:p(V +), reg f3:*, reg f4:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg paste1:cls, reg strwrap:cls, reg paste2:cls, reg paste3:cls, reg s1:*, reg s2:V, reg c1:L, reg s4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg p4:p(V +), reg r17:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg r21:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg r25:V |
    mkenv;
    st w = w;
    st f = f;
    st s = s;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      w1 = ld w;
      w2 = force? w1;
      checkMissing(w2);
      return w2;
    };
    p3 = prom<V +>{
      paste0 = ldf paste0;
      p1 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L3() else L4();
      L0(r2):
        return r2;
      L3():
        sym1 = ldf `rep.int`;
        base1 = ldf `rep.int` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L5() else L6();
      L4():
        r1 = dyn base("", <lang rep.int("      ", `-`(length(f), 1))>);
        goto L0(r1);
      L1(r4):
        c = ldf c in base;
        r10 = dyn c("", r4);
        goto L0(r10);
      L5():
        sym2 = ldf length;
        base2 = ldf length in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L7() else L8();
      L6():
        r3 = dyn base1("      ", <lang `-`(length(f), 1)>);
        goto L1(r3);
      L2(r6):
        r8 = `-`(r6, 1);
        rep_int = ldf `rep.int` in base;
        r9 = dyn rep_int("      ", r8);
        goto L1(r9);
      L7():
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        length = ldf length in base;
        r7 = dyn length(f2);
        goto L2(r7);
      L8():
        r5 = dyn base2(<sym f>);
        goto L2(r5);
      };
      p2 = prom<V +>{
        f3 = ld f;
        f4 = force? f3;
        checkMissing(f4);
        return f4;
      };
      r13 = dyn paste0[, , collapse](p1, p2, "\n");
      return r13;
    };
    p8 = prom<V +>{
      paste1 = ldf paste;
      p7 = prom<V +>{
        strwrap = ldf strwrap;
        p6 = prom<V +>{
          paste2 = ldf paste;
          p5 = prom<V +>{
            paste3 = ldf paste;
            p4 = prom<V +>{
              s1 = ld s;
              s2 = force? s1;
              checkMissing(s2);
              c1 = `is.object`(s2);
              if c1 then L1() else L2(s2);
            L0(dx1):
              return dx1;
            L1():
              dr = tryDispatchBuiltin.1("[[", s2);
              dc = getTryDispatchBuiltinDispatched(dr);
              if dc then L3() else L2(dr);
            L2(s4):
              __ = ldf `[[` in base;
              r15 = dyn __(s4, 1);
              goto L0(r15);
            L3():
              dx = getTryDispatchBuiltinValue(dr);
              goto L0(dx);
            };
            r17 = dyn paste3[, collapse](p4, " ");
            return r17;
          };
          r19 = dyn paste2("Suggestions:", p5);
          return r19;
        };
        r21 = dyn strwrap[, exdent, indent](p6, 6, 0);
        return r21;
      };
      r23 = dyn paste1[, collapse](p7, "\n");
      return r23;
    };
    r25 = dyn sprintf("Word: %s\nFrom: %s\n%s", p, p3, p8);
    check L1() else D1();
  D1():
    deopt 6 [r25];
  L1():
    popenv;
    return r25;
  }
}