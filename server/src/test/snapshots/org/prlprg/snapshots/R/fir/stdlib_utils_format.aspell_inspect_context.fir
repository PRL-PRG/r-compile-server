fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3980162180;
    st `format.aspell_inspect_context` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3980162180(x, `...`, byfile, indent) {
  (reg x:*, reg ddd:dots, reg byfile:*, reg indent:*) -+> V { var x:*, var `...`:dots?, var byfile:*, reg byfile_isMissing:L, reg byfile_orDefault:*, var indent:*, reg indent_isMissing:L, reg indent_orDefault:*, reg nrow:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg character:cls, reg r3:V, reg byfile1:*, reg byfile2:V, reg c1:L, reg split:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg p2:p(V +), reg r9:V, reg Map:cls, reg r10:cls, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg chunks:*, reg chunks1:V, reg names:cls, reg r14:V, reg p4:p(V +), reg chunks2:*, reg chunks3:V, reg p5:p(V +), reg r17:V, reg r18:V, reg strrep:cls, reg indent1:*, reg indent2:V, reg p6:p(V +), reg r20:V, reg sprintf:cls, reg p7:*, reg p8:V, reg p9:p(V +), reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r22:V, reg p10:p(V +), reg x13:*, reg x14:V, reg c4:L, reg x16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r24:V, reg p11:p(V +), reg x17:*, reg x18:V, reg c5:L, reg x20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r26:V, reg p12:p(V +), reg p13:*, reg p14:V, reg p15:p(V +), reg x21:*, reg x22:V, reg c6:L, reg x24:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r29:V, reg p16:p(V +), reg x25:*, reg x26:V, reg c7:L, reg x28:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r31:V, reg p17:p(V +), reg x29:*, reg x30:V, reg c8:L, reg x32:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r33:V, reg p18:p(V +), reg p19:*, reg p20:V, reg p21:p(V +), reg strrep1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r36:V, reg r37:V, reg x33:*, reg x34:V, reg c9:L, reg x36:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r38:V, reg as_integer:cls, reg r39:V, reg r40:V, reg p22:p(V +), reg r42:V, reg p23:p(V +), reg strrep2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r44:V, reg r45:V, reg x37:*, reg x38:V, reg c10:L, reg x40:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r46:V, reg nchar:cls, reg r47:V, reg p24:p(V +), reg r49:V, reg p25:p(V +), reg r51:V, reg split1:cls, reg y:*, reg y1:V, reg p26:p(V +), reg x41:*, reg x42:V, reg c11:L, reg x44:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r53:V, reg p27:p(V +), reg r55:V, reg Map1:cls, reg r56:cls, reg p28:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r58:V, reg r59:V, reg chunks4:*, reg chunks5:V, reg names1:cls, reg r60:V, reg p29:p(V +), reg chunks6:*, reg chunks7:V, reg p30:p(V +), reg r63:V, reg unlist:cls, reg chunks8:*, reg chunks9:V, reg p31:p(V +), reg r65:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    byfile_isMissing = missing.0(byfile);
    if byfile_isMissing then L0(FALSE) else L0(byfile);
  L0(byfile_orDefault):
    st byfile = byfile_orDefault;
    indent_isMissing = missing.0(indent);
    if indent_isMissing then L1(2) else L1(indent);
  L1(indent_orDefault):
    st indent = indent_orDefault;
    nrow = ldf nrow;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn nrow(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L8() else L2();
  L2():
    byfile1 = ld byfile;
    check L13() else D4();
  L8():
    character = ldf character;
    check L9() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 11 [byfile1];
  L9():
    r3 = dyn character();
    check L10() else D3();
  L13():
    byfile2 = force? byfile1;
    checkMissing(byfile2);
    c1 = `as.logical`(byfile2);
    if c1 then L14() else L4();
  D3():
    deopt 7 [r3];
  L4():
    strrep = ldf strrep;
    check L20() else D9();
  L5(r18):
    st chunks = r18;
    unlist = ldf unlist;
    check L28() else D17();
  L10():
    popenv;
    return r3;
  L14():
    split = ldf split;
    check L15() else D5();
  D5():
    deopt 14 [];
  D9():
    deopt 26 [];
  D17():
    deopt 61 [];
  L15():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c2 = `is.object`(x6);
      if c2 then L1() else L2(x6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x8):
      r7 = `$`(x8, <sym File>);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r9 = dyn split(p1, p2);
    check L16() else D6();
  L20():
    p6 = prom<V +>{
      indent1 = ld indent;
      indent2 = force? indent1;
      checkMissing(indent2);
      return indent2;
    };
    r20 = dyn strrep(" ", p6);
    check L21() else D10();
  L28():
    p31 = prom<V +>{
      chunks8 = ld chunks;
      chunks9 = force? chunks8;
      checkMissing(chunks9);
      return chunks9;
    };
    r65 = dyn unlist[, `use.names`](p31, FALSE);
    check L29() else D18();
  D6():
    deopt 17 [r9];
  D10():
    deopt 29 [r20];
  D18():
    deopt 65 [r65];
  L16():
    st chunks = r9;
    Map = ldf Map;
    check L17() else D7();
  L21():
    st p = r20;
    sprintf = ldf sprintf;
    check L22() else D11();
  L29():
    popenv;
    return r65;
  D7():
    deopt 20 [];
  D11():
    deopt 32 [];
  L17():
    p3 = prom<V +>{
      r10 = clos inner757113852;
      return r10;
    };
    p4 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r13):
      return r13;
    L1():
      chunks = ld chunks;
      chunks1 = force? chunks;
      checkMissing(chunks1);
      names = ldf names in base;
      r14 = dyn names(chunks1);
      goto L0(r14);
    L2():
      r12 = dyn base(<sym chunks>);
      goto L0(r12);
    };
    p5 = prom<V +>{
      chunks2 = ld chunks;
      chunks3 = force? chunks2;
      checkMissing(chunks3);
      return chunks3;
    };
    r17 = dyn Map(p3, p4, p5);
    check L18() else D8();
  L22():
    p9 = prom<V +>{
      p7 = ld p;
      p8 = force? p7;
      checkMissing(p8);
      return p8;
    };
    p10 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c3 = `is.object`(x10);
      if c3 then L1() else L2(x10);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x12):
      r22 = `$`(x12, <sym File>);
      goto L0(r22);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p11 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c4 = `is.object`(x14);
      if c4 then L1() else L2(x14);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x14);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x16):
      r24 = `$`(x16, <sym Line>);
      goto L0(r24);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p12 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c5 = `is.object`(x18);
      if c5 then L1() else L2(x18);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x18);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x20):
      r26 = `$`(x20, <sym Column>);
      goto L0(r26);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p15 = prom<V +>{
      p13 = ld p;
      p14 = force? p13;
      checkMissing(p14);
      return p14;
    };
    p16 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c6 = `is.object`(x22);
      if c6 then L1() else L2(x22);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", x22);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x24):
      r29 = `$`(x24, <sym Left>);
      goto L0(r29);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p17 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c7 = `is.object`(x26);
      if c7 then L1() else L2(x26);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x26);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x28):
      r31 = `$`(x28, <sym Original>);
      goto L0(r31);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p18 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      c8 = `is.object`(x30);
      if c8 then L1() else L2(x30);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", x30);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(x32):
      r33 = `$`(x32, <sym Right>);
      goto L0(r33);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p21 = prom<V +>{
      p19 = ld p;
      p20 = force? p19;
      checkMissing(p20);
      return p20;
    };
    p23 = prom<V +>{
      strrep1 = ldf strrep;
      p22 = prom<V +>{
        sym1 = ldf `as.integer`;
        base1 = ldf `as.integer` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r37):
        r40 = `-`(r37, 1);
        return r40;
      L1():
        x33 = ld x;
        x34 = force? x33;
        checkMissing(x34);
        c9 = `is.object`(x34);
        if c9 then L4() else L5(x34);
      L2():
        r36 = dyn base1(<lang `$`(x, Column)>);
        goto L0(r36);
      L3(dx15):
        as_integer = ldf `as.integer` in base;
        r39 = dyn as_integer(dx15);
        goto L0(r39);
      L4():
        dr14 = tryDispatchBuiltin.1("$", x34);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L6() else L5(dr14);
      L5(x36):
        r38 = `$`(x36, <sym Column>);
        goto L3(r38);
      L6():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L3(dx14);
      };
      r42 = dyn strrep1(" ", p22);
      return r42;
    };
    p25 = prom<V +>{
      strrep2 = ldf strrep;
      p24 = prom<V +>{
        sym2 = ldf nchar;
        base2 = ldf nchar in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r45):
        return r45;
      L1():
        x37 = ld x;
        x38 = force? x37;
        checkMissing(x38);
        c10 = `is.object`(x38);
        if c10 then L4() else L5(x38);
      L2():
        r44 = dyn base2(<lang `$`(x, Original)>);
        goto L0(r44);
      L3(dx17):
        nchar = ldf nchar in base;
        r47 = dyn nchar(dx17, "chars", FALSE, NA_LGL);
        goto L0(r47);
      L4():
        dr16 = tryDispatchBuiltin.1("$", x38);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L6() else L5(dr16);
      L5(x40):
        r46 = `$`(x40, <sym Original>);
        goto L3(r46);
      L6():
        dx16 = getTryDispatchBuiltinValue(dr16);
        goto L3(dx16);
      };
      r49 = dyn strrep2("^", p24);
      return r49;
    };
    r51 = dyn sprintf("%s%s:%s:%s\n%s%s%s%s\n%s%s%s", p9, p10, p11, p12, p15, p16, p17, p18, p21, p23, p25);
    check L23() else D12();
  D8():
    deopt 24 [r17];
  D12():
    deopt 45 [r51];
  L18():
    goto L5(r17);
  L23():
    st y = r51;
    split1 = ldf split;
    check L24() else D13();
  D13():
    deopt 48 [];
  L24():
    p26 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p27 = prom<V +>{
      x41 = ld x;
      x42 = force? x41;
      checkMissing(x42);
      c11 = `is.object`(x42);
      if c11 then L1() else L2(x42);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("$", x42);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(x44):
      r53 = `$`(x44, <sym Original>);
      goto L0(r53);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r55 = dyn split1(p26, p27);
    check L25() else D14();
  D14():
    deopt 51 [r55];
  L25():
    st chunks = r55;
    Map1 = ldf Map;
    check L26() else D15();
  D15():
    deopt 54 [];
  L26():
    p28 = prom<V +>{
      r56 = clos inner4198313549;
      return r56;
    };
    p29 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r59):
      return r59;
    L1():
      chunks4 = ld chunks;
      chunks5 = force? chunks4;
      checkMissing(chunks5);
      names1 = ldf names in base;
      r60 = dyn names1(chunks5);
      goto L0(r60);
    L2():
      r58 = dyn base3(<sym chunks>);
      goto L0(r58);
    };
    p30 = prom<V +>{
      chunks6 = ld chunks;
      chunks7 = force? chunks6;
      checkMissing(chunks7);
      return chunks7;
    };
    r63 = dyn Map1(p28, p29, p30);
    check L27() else D16();
  D16():
    deopt 58 [r63];
  L27():
    goto L5(r63);
  }
}
fun inner757113852(u, e) {
  (reg u:*, reg e:*) -+> V { var u:*, var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sprintf:cls, reg u1:*, reg u2:V, reg p:p(V +), reg r3:V, reg sprintf1:cls, reg format:cls, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg gsub:cls, reg e5:*, reg e6:V, reg c1:L, reg e8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg e9:*, reg e10:V, reg c2:L, reg e12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg p5:p(V +), reg gsub1:cls, reg e13:*, reg e14:V, reg c3:L, reg e16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r14:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg c4:cls, reg r19:V |
    mkenv;
    st u = u;
    st e = e;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    sprintf = ldf sprintf;
    check L3() else D0();
  L2():
    r = dyn base(<lang sprintf("File '%s':", u)>, <lang sprintf("  Line %s: \"%s\", \"%s\", \"%s\"", format(`$`(e, Line)), gsub("\"", "\\\"", `$`(e, Left)), `$`(e, Original), gsub("\"", "\\\"", `$`(e, Right)))>, "");
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      return u2;
    };
    r3 = dyn sprintf("File '%s':", p);
    check L4() else D1();
  D1():
    deopt 6 [r3];
  L4():
    sprintf1 = ldf sprintf;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p2 = prom<V +>{
      format = ldf format;
      p1 = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        c = `is.object`(e2);
        if c then L1() else L2(e2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", e2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(e4):
        r4 = `$`(e4, <sym Line>);
        goto L0(r4);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r6 = dyn format(p1);
      return r6;
    };
    p4 = prom<V +>{
      gsub = ldf gsub;
      p3 = prom<V +>{
        e5 = ld e;
        e6 = force? e5;
        checkMissing(e6);
        c1 = `is.object`(e6);
        if c1 then L1() else L2(e6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", e6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(e8):
        r8 = `$`(e8, <sym Left>);
        goto L0(r8);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r10 = dyn gsub("\"", "\\\"", p3);
      return r10;
    };
    p5 = prom<V +>{
      e9 = ld e;
      e10 = force? e9;
      checkMissing(e10);
      c2 = `is.object`(e10);
      if c2 then L1() else L2(e10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", e10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(e12):
      r12 = `$`(e12, <sym Original>);
      goto L0(r12);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p7 = prom<V +>{
      gsub1 = ldf gsub;
      p6 = prom<V +>{
        e13 = ld e;
        e14 = force? e13;
        checkMissing(e14);
        c3 = `is.object`(e14);
        if c3 then L1() else L2(e14);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", e14);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(e16):
        r14 = `$`(e16, <sym Right>);
        goto L0(r14);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r16 = dyn gsub1("\"", "\\\"", p6);
      return r16;
    };
    r18 = dyn sprintf1("  Line %s: \"%s\", \"%s\", \"%s\"", p2, p4, p5, p7);
    check L6() else D3();
  D3():
    deopt 14 [r18];
  L6():
    c4 = ldf c in base;
    r19 = dyn c4(r3, r18, "");
    check L7() else D4();
  D4():
    deopt 17 [r19];
  L7():
    goto L0(r19);
  }
}
fun inner4198313549(u, v) {
  (reg u:*, reg v:*) -+> V { var u:*, var v:*, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg paste1:cls, reg u1:*, reg u2:V, reg p:p(V +), reg r3:V, reg v1:*, reg v2:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st u = u;
    st v = v;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      paste1 = ldf paste;
      p = prom<V +>{
        u1 = ld u;
        u2 = force? u1;
        checkMissing(u2);
        return u2;
      };
      r3 = dyn paste1("Word:", p);
      v1 = ld v;
      v2 = force? v1;
      checkMissing(v2);
      c = ldf c in base;
      r4 = dyn c(r3, v2);
      goto L0(r4);
    L2():
      r = dyn base(<lang paste("Word:", u)>, <sym v>);
      goto L0(r);
    };
    r6 = dyn paste[, collapse](p1, "\n");
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}