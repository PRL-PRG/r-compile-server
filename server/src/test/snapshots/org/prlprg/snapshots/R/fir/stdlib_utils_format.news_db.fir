fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.news_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg ___:cls, reg r:V, reg r1:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg c:L, reg split:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p2:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg vchunks:*, reg vchunks1:V, reg names:cls, reg r10:V, reg vstrings:*, reg vstrings1:V, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg which:cls, reg ind:*, reg ind1:V, reg r14:V, reg p3:p(V +), reg r16:V, reg which1:cls, reg ind2:*, reg ind3:V, reg p4:p(V +), reg r18:V, reg c2:L, reg r20:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg order:cls, reg as_numeric_version:cls, reg sub:cls, reg vstrings2:*, reg vstrings3:V, reg c3:L, reg vstrings5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind4:*, reg ind5:V, reg __:cls, reg r21:V, reg p5:p(V +), reg r23:V, reg p6:p(V +), reg r25:V, reg p7:p(V +), reg r27:V, reg __1:cls, reg r28:V, reg c4:cls, reg r29:V, reg vchunks2:*, reg vchunks3:V, reg c5:L, reg vchunks5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg pos:*, reg pos1:V, reg __2:cls, reg r30:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg vchunks6:*, reg vchunks7:V, reg length:cls, reg r33:V, reg c6:L, reg vapply:cls, reg vchunks8:*, reg vchunks9:V, reg p8:p(V +), reg r35:cls, reg p9:p(V +), reg r37:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg vchunks10:*, reg vchunks11:V, reg names1:cls, reg r40:V, reg vstrings6:*, reg vstrings7:V, reg r41:V, reg sprintf:cls, reg vstrings8:*, reg vstrings9:V, reg c7:L, reg vstrings11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ind6:*, reg ind7:V, reg __3:cls, reg r42:V, reg p10:p(V +), reg r44:V, reg l:*, reg c8:L, reg r46:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ind8:*, reg ind9:V, reg ___1:cls, reg r49:V, reg format:cls, reg sprintf1:cls, reg vstrings12:*, reg vstrings13:V, reg p11:p(V +), reg ifelse:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r51:V, reg r52:V, reg dates:*, reg dates1:V, reg is_na:cls, reg r53:V, reg p12:p(V +), reg sprintf2:cls, reg dates2:*, reg dates3:V, reg p13:p(V +), reg r56:V, reg p14:p(V +), reg r58:V, reg p15:p(V +), reg r60:V, reg p16:p(V +), reg r62:V, reg character:cls, reg r64:V, reg r65:cls, reg r66:cls, reg Map:cls, reg c9:*, reg c10:V, reg p17:p(V +), reg vheaders:*, reg vheaders1:V, reg p18:p(V +), reg lapply:cls, reg vchunks12:*, reg vchunks13:V, reg p19:p(V +), reg format_vchunk:*, reg format_vchunk1:V, reg p20:p(V +), reg r71:V, reg p21:p(V +), reg r73:V, reg apply:cls, reg as_matrix:cls, reg x9:*, reg x10:V, reg p22:p(V +), reg r75:V, reg p23:p(V +), reg r77:cls, reg p24:p(V +), reg r79:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    ___ = ldf `:::`;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    r = dyn ___("tools", ".news_db_has_no_bad_entries");
    check L11() else D1();
  D1():
    deopt 4 [r];
  L11():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn r1(p);
    check L12() else D2();
  D2():
    deopt 7 [r3];
  L12():
    c = `as.logical`(r3);
    if c then L13() else L0();
  L0():
    apply = ldf apply;
    check L64() else D33();
  L13():
    split = ldf split;
    check L14() else D3();
  D3():
    deopt 9 [];
  D33():
    deopt 115 [];
  L14():
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
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x8):
      r5 = `$`(x8, <sym Version>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn split(p1, p2);
    check L15() else D4();
  L64():
    p23 = prom<V +>{
      as_matrix = ldf `as.matrix`;
      p22 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r75 = dyn as_matrix(p22);
      return r75;
    };
    p24 = prom<V +>{
      r77 = clos inner3708401697;
      return r77;
    };
    r79 = dyn apply(p23, 1, p24);
    check L65() else D34();
  D4():
    deopt 12 [r7];
  D34():
    deopt 119 [r79];
  L15():
    st vchunks = r7;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L65():
    popenv;
    return r79;
  L1(r9):
    st vstrings = r9;
    vstrings = ld vstrings;
    check L20() else D7();
  L16():
    vchunks = ld vchunks;
    check L18() else D5();
  L17():
    r8 = dyn base(<sym vchunks>);
    goto L1(r8);
  D5():
    deopt 16 [vchunks];
  D7():
    deopt 21 [vstrings];
  L18():
    vchunks1 = force? vchunks;
    checkMissing(vchunks1);
    names = ldf names in base;
    r10 = dyn names(vchunks1);
    check L19() else D6();
  L20():
    vstrings1 = force? vstrings;
    checkMissing(vstrings1);
    r11 = `!=`(vstrings1, "R-devel");
    st ind = r11;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  D6():
    deopt 19 [r10];
  L2(r13):
    st pos = r13;
    vchunks2 = ld vchunks;
    check L33() else D15();
  L19():
    goto L1(r10);
  L21():
    which = ldf which;
    check L23() else D8();
  L22():
    r12 = dyn base1(<lang which(`!`(ind))>, <lang `[`(which(ind), order(as.numeric_version(sub(" *patched", ".1", `[`(vstrings, ind))), decreasing=TRUE))>);
    goto L2(r12);
  D8():
    deopt 29 [];
  D15():
    deopt 46 [vchunks2];
  L23():
    p3 = prom<V +>{
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      r14 = `!`(ind1);
      return r14;
    };
    r16 = dyn which(p3);
    check L24() else D9();
  L33():
    vchunks3 = force? vchunks2;
    checkMissing(vchunks3);
    c5 = `is.object`(vchunks3);
    if c5 then L34() else L35(vchunks3);
  D9():
    deopt 31 [r16];
  L4(dx7):
    st vchunks = dx7;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L24():
    which1 = ldf which;
    check L25() else D10();
  L34():
    dr6 = tryDispatchBuiltin.1("[", vchunks3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L36() else L35(dr6);
  L35(vchunks5):
    pos = ld pos;
    check L37() else D16();
  D10():
    deopt 33 [];
  D16():
    deopt 48 [vchunks5, pos];
  L5(r32):
    c6 = `as.logical`(r32);
    if c6 then L42() else L6();
  L25():
    p4 = prom<V +>{
      ind2 = ld ind;
      ind3 = force? ind2;
      checkMissing(ind3);
      return ind3;
    };
    r18 = dyn which1(p4);
    check L26() else D11();
  L36():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L4(dx6);
  L37():
    pos1 = force? pos;
    __2 = ldf `[` in base;
    r30 = dyn __2(vchunks5, pos1);
    goto L4(r30);
  L38():
    vchunks6 = ld vchunks;
    check L40() else D17();
  L39():
    r31 = dyn base2(<sym vchunks>);
    goto L5(r31);
  D11():
    deopt 35 [r18];
  D17():
    deopt 54 [vchunks6];
  L6():
    character = ldf character;
    check L59() else D29();
  L9():
    r65 = clos inner2501545716;
    st format_items = r65;
    r66 = clos inner3903957783;
    st format_vchunk = r66;
    Map = ldf Map;
    check L61() else D31();
  L26():
    c2 = `is.object`(r18);
    if c2 then L27() else L28(r18);
  L40():
    vchunks7 = force? vchunks6;
    checkMissing(vchunks7);
    length = ldf length in base;
    r33 = dyn length(vchunks7);
    check L41() else D18();
  L42():
    vapply = ldf vapply;
    check L43() else D19();
  D18():
    deopt 57 [r33];
  D19():
    deopt 59 [];
  D29():
    deopt 97 [];
  D31():
    deopt 107 [];
  L3(dx3):
    c4 = ldf c in base;
    r29 = dyn c4(r16, dx3);
    check L32() else D14();
  L27():
    dr2 = tryDispatchBuiltin.1("[", r18);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(dr2);
  L28(r20):
    order = ldf order;
    check L30() else D12();
  L41():
    goto L5(r33);
  L43():
    p8 = prom<V +>{
      vchunks8 = ld vchunks;
      vchunks9 = force? vchunks8;
      checkMissing(vchunks9);
      return vchunks9;
    };
    p9 = prom<V +>{
      r35 = clos inner2854634098;
      return r35;
    };
    r37 = dyn vapply(p8, p9, "");
    check L44() else D20();
  L59():
    r64 = dyn character();
    check L60() else D30();
  L61():
    p17 = prom<V +>{
      c9 = ld c;
      c10 = force? c9;
      checkMissing(c10);
      return c10;
    };
    p18 = prom<V +>{
      vheaders = ld vheaders;
      vheaders1 = force? vheaders;
      checkMissing(vheaders1);
      return vheaders1;
    };
    p21 = prom<V +>{
      lapply = ldf lapply;
      p19 = prom<V +>{
        vchunks12 = ld vchunks;
        vchunks13 = force? vchunks12;
        checkMissing(vchunks13);
        return vchunks13;
      };
      p20 = prom<V +>{
        format_vchunk = ld format_vchunk;
        format_vchunk1 = force? format_vchunk;
        checkMissing(format_vchunk1);
        return format_vchunk1;
      };
      r71 = dyn lapply(p19, p20);
      return r71;
    };
    r73 = dyn Map[, , , `USE.NAMES`](p17, p18, p21, FALSE);
    check L62() else D32();
  D12():
    deopt 37 [r20];
  D14():
    deopt 44 [r29];
  D20():
    deopt 63 [r37];
  D30():
    deopt 98 [r64];
  D32():
    deopt 113 [r73];
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L30():
    p7 = prom<V +>{
      as_numeric_version = ldf `as.numeric_version`;
      p6 = prom<V +>{
        sub = ldf sub;
        p5 = prom<V +>{
          vstrings2 = ld vstrings;
          vstrings3 = force? vstrings2;
          checkMissing(vstrings3);
          c3 = `is.object`(vstrings3);
          if c3 then L1() else L2(vstrings3);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[", vstrings3);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(vstrings5):
          ind4 = ld ind;
          ind5 = force? ind4;
          __ = ldf `[` in base;
          r21 = dyn __(vstrings5, ind5);
          goto L0(r21);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r23 = dyn sub(" *patched", ".1", p5);
        return r23;
      };
      r25 = dyn as_numeric_version(p6);
      return r25;
    };
    r27 = dyn order[, decreasing](p7, TRUE);
    check L31() else D13();
  L32():
    goto L2(r29);
  L44():
    st dates = r37;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L60():
    st vheaders = r64;
    goto L9();
  L62():
    popenv;
    return r73;
  D13():
    deopt 41 [r20, r27];
  L7(r39):
    st vstrings = r39;
    vstrings6 = ld vstrings;
    check L49() else D23();
  L31():
    __1 = ldf `[` in base;
    r28 = dyn __1(r20, r27);
    goto L3(r28);
  L45():
    vchunks10 = ld vchunks;
    check L47() else D21();
  L46():
    r38 = dyn base3(<sym vchunks>);
    goto L7(r38);
  D21():
    deopt 67 [vchunks10];
  D23():
    deopt 72 [vstrings6];
  L47():
    vchunks11 = force? vchunks10;
    checkMissing(vchunks11);
    names1 = ldf names in base;
    r40 = dyn names1(vchunks11);
    check L48() else D22();
  L49():
    vstrings7 = force? vstrings6;
    checkMissing(vstrings7);
    r41 = `!=`(vstrings7, "R-devel");
    st ind = r41;
    sprintf = ldf sprintf;
    check L50() else D24();
  D22():
    deopt 70 [r40];
  D24():
    deopt 78 [];
  L48():
    goto L7(r40);
  L50():
    p10 = prom<V +>{
      vstrings8 = ld vstrings;
      vstrings9 = force? vstrings8;
      checkMissing(vstrings9);
      c7 = `is.object`(vstrings9);
      if c7 then L1() else L2(vstrings9);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", vstrings9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(vstrings11):
      ind6 = ld ind;
      ind7 = force? ind6;
      __3 = ldf `[` in base;
      r42 = dyn __3(vstrings11, ind7);
      goto L0(r42);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r44 = dyn sprintf("version %s", p10);
    check L51() else D25();
  D25():
    deopt 81 [r44];
  L51():
    l = ld vstrings;
    c8 = `is.object`(l);
    if c8 then L52() else L53(r44, l);
  L8(dx11):
    st vstrings = dx11;
    format = ldf format;
    check L56() else D27();
  L52():
    dr10 = tryDispatchBuiltin.0("[<-", l, r44);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L54() else L53(r44, dr10);
  L53(r46, l2):
    ind8 = ld ind;
    check L55() else D26();
  D26():
    deopt 83 [r46, l2, r44, ind8];
  D27():
    deopt 88 [];
  L54():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L8(dx10);
  L55():
    ind9 = force? ind8;
    ___1 = ldf `[<-` in base;
    r49 = dyn ___1(l2, r44, ind9);
    goto L8(r49);
  L56():
    p16 = prom<V +>{
      sprintf1 = ldf sprintf;
      p11 = prom<V +>{
        vstrings12 = ld vstrings;
        vstrings13 = force? vstrings12;
        checkMissing(vstrings13);
        return vstrings13;
      };
      p15 = prom<V +>{
        ifelse = ldf ifelse;
        p12 = prom<V +>{
          sym4 = ldf `is.na`;
          base4 = ldf `is.na` in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r52):
          return r52;
        L1():
          dates = ld dates;
          dates1 = force? dates;
          checkMissing(dates1);
          is_na = ldf `is.na` in base;
          r53 = dyn is_na(dates1);
          goto L0(r53);
        L2():
          r51 = dyn base4(<sym dates>);
          goto L0(r51);
        };
        p14 = prom<V +>{
          sprintf2 = ldf sprintf;
          p13 = prom<V +>{
            dates2 = ld dates;
            dates3 = force? dates2;
            checkMissing(dates3);
            return dates3;
          };
          r56 = dyn sprintf2(" (%s)", p13);
          return r56;
        };
        r58 = dyn ifelse(p12, "", p14);
        return r58;
      };
      r60 = dyn sprintf1("Changes in %s%s", p11, p15);
      return r60;
    };
    r62 = dyn format[, justify, width](p16, "centre", 72);
    check L57() else D28();
  D28():
    deopt 94 [r62];
  L57():
    st vheaders = r62;
    goto L9();
  }
}
fun inner2854634098(v) {
  (reg v:*) -+> V { var v:*, reg v1:*, reg v2:V, reg c:L, reg v4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r1:V |
    mkenv;
    st v = v;
    v1 = ld v;
    check L1() else D0();
  D0():
    deopt 0 [v1];
  L1():
    v2 = force? v1;
    checkMissing(v2);
    c = `is.object`(v2);
    if c then L3() else L4(v2);
  L2(dx1):
    c1 = `is.object`(dx1);
    if c1 then L6() else L7(dx1);
  L3():
    dr = tryDispatchBuiltin.1("$", v2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(v4):
    r = `$`(v4, <sym Date>);
    goto L2(r);
  L0(dx5):
    popenv;
    return dx5;
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L8() else L7(dr2);
  L7(dx3):
    __ = ldf `[` in base;
    r1 = dyn __(dx3, 1);
    goto L0(r1);
  L8():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx4);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste0:cls, reg gsub:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V |
    mkenv;
    st x = x;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      gsub = ldf gsub;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        c = `is.object`(x2);
        if c then L1() else L2(x2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", x2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x4):
        r = `$`(x4, <sym Text>);
        goto L0(r);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r2 = dyn gsub[, , , fixed]("\n", "\n\t", p, TRUE);
      return r2;
    };
    r4 = dyn paste0("    o   ", p1);
    check L1() else D1();
  D1():
    deopt 4 [r4];
  L1():
    popenv;
    return r4;
  }
}
fun inner3903957783(vchunk) {
  (reg vchunk:*) -+> V { var vchunk:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg vchunk1:*, reg vchunk2:V, reg c:L, reg vchunk4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg is_na:cls, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg r11:V, reg category:*, reg category1:V, reg nzchar:cls, reg r12:V, reg r13:V, reg all:cls, reg r14:V, reg c1:L, reg split:cls, reg vchunk5:*, reg vchunk6:V, reg p:p(V +), reg factor:cls, reg category2:*, reg category3:V, reg p1:p(V +), reg unique:cls, reg category4:*, reg category5:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg r20:V, reg p4:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg cchunks:*, reg cchunks1:V, reg names:cls, reg r25:V, reg Map:cls, reg c2:*, reg c3:V, reg p5:p(V +), reg cheaders:*, reg cheaders1:V, reg p6:p(V +), reg lapply:cls, reg cchunks2:*, reg cchunks3:V, reg p7:p(V +), reg format_items:*, reg format_items1:V, reg p8:p(V +), reg r30:V, reg p9:p(V +), reg r32:V, reg format_items2:cls, reg vchunk7:*, reg vchunk8:V, reg p10:p(V +), reg r34:V |
    mkenv;
    st vchunk = vchunk;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L20() else L3();
  L5():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang `&`(`!`(is.na(`<-`(category, `$`(vchunk, Category)))), nzchar(category))>);
    goto L0(r);
  L1(r3):
    r6 = `!`(r3);
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L3():
    format_items2 = ldf format_items;
    check L30() else D11();
  L7():
    vchunk1 = ld vchunk;
    check L9() else D0();
  L8():
    r2 = dyn base1(<lang `<-`(category, `$`(vchunk, Category))>);
    goto L1(r2);
  L20():
    split = ldf split;
    check L21() else D5();
  D0():
    deopt 4 [vchunk1];
  D5():
    deopt 20 [];
  D11():
    deopt 41 [];
  L2(r10, r11):
    r13 = `&&`(r10, r11);
    all = ldf all in base;
    r14 = dyn all(r13);
    check L19() else D4();
  L9():
    vchunk2 = force? vchunk1;
    checkMissing(vchunk2);
    c = `is.object`(vchunk2);
    if c then L11() else L12(vchunk2);
  L15():
    category = ld category;
    check L17() else D2();
  L16():
    r9 = dyn base2(<sym category>);
    goto L2(r6, r9);
  L21():
    p = prom<V +>{
      vchunk5 = ld vchunk;
      vchunk6 = force? vchunk5;
      checkMissing(vchunk6);
      return vchunk6;
    };
    p4 = prom<V +>{
      factor = ldf factor;
      p1 = prom<V +>{
        category2 = ld category;
        category3 = force? category2;
        checkMissing(category3);
        return category3;
      };
      p3 = prom<V +>{
        unique = ldf unique;
        p2 = prom<V +>{
          category4 = ld category;
          category5 = force? category4;
          checkMissing(category5);
          return category5;
        };
        r18 = dyn unique(p2);
        return r18;
      };
      r20 = dyn factor[, levels](p1, p3);
      return r20;
    };
    r22 = dyn split(p, p4);
    check L22() else D6();
  L30():
    p10 = prom<V +>{
      vchunk7 = ld vchunk;
      vchunk8 = force? vchunk7;
      checkMissing(vchunk8);
      return vchunk8;
    };
    r34 = dyn format_items2(p10);
    check L31() else D12();
  D2():
    deopt 12 [r6, category];
  D4():
    deopt 18 [r14];
  D6():
    deopt 23 [r22];
  D12():
    deopt 43 [r34];
  L10(dx1):
    st category = dx1;
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(dx1);
    check L14() else D1();
  L11():
    dr = tryDispatchBuiltin.1("$", vchunk2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(vchunk4):
    r4 = `$`(vchunk4, <sym Category>);
    goto L10(r4);
  L17():
    category1 = force? category;
    checkMissing(category1);
    nzchar = ldf nzchar in base;
    r12 = dyn nzchar(category1);
    check L18() else D3();
  L19():
    goto L0(r14);
  L22():
    st cchunks = r22;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L31():
    popenv;
    return r34;
  D1():
    deopt 9 [r5];
  D3():
    deopt 15 [r6, r12];
  L4(r24):
    st cheaders = r24;
    Map = ldf Map;
    check L27() else D9();
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L14():
    goto L1(r5);
  L18():
    goto L2(r6, r12);
  L23():
    cchunks = ld cchunks;
    check L25() else D7();
  L24():
    r23 = dyn base3(<sym cchunks>);
    goto L4(r23);
  D7():
    deopt 27 [cchunks];
  D9():
    deopt 33 [];
  L25():
    cchunks1 = force? cchunks;
    checkMissing(cchunks1);
    names = ldf names in base;
    r25 = dyn names(cchunks1);
    check L26() else D8();
  L27():
    p5 = prom<V +>{
      c2 = ld c;
      c3 = force? c2;
      checkMissing(c3);
      return c3;
    };
    p6 = prom<V +>{
      cheaders = ld cheaders;
      cheaders1 = force? cheaders;
      checkMissing(cheaders1);
      return cheaders1;
    };
    p9 = prom<V +>{
      lapply = ldf lapply;
      p7 = prom<V +>{
        cchunks2 = ld cchunks;
        cchunks3 = force? cchunks2;
        checkMissing(cchunks3);
        return cchunks3;
      };
      p8 = prom<V +>{
        format_items = ld format_items;
        format_items1 = force? format_items;
        checkMissing(format_items1);
        return format_items1;
      };
      r30 = dyn lapply(p7, p8);
      return r30;
    };
    r32 = dyn Map[, , , `USE.NAMES`](p5, p6, p9, FALSE);
    check L28() else D10();
  D8():
    deopt 30 [r25];
  D10():
    deopt 39 [r32];
  L26():
    goto L4(r25);
  L28():
    popenv;
    return r32;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg paste:cls, reg formatDL:cls, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg e7:V, reg r1:V, reg e8:*, reg e9:V, reg is_na:cls, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V |
    mkenv;
    st e = e;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      formatDL = ldf formatDL;
      p = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        c = `is.object`(e2);
        if c then L2() else L3(e2);
      L0(dx1):
        return dx1;
      L2():
        dr = tryDispatchBuiltin.1("[", e2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L4() else L3(dr);
      L3(e4):
        sym = ldf `is.na`;
        base = ldf `is.na` in base;
        guard = `==`.4(sym, base);
        if guard then L5() else L6();
      L1(e7, r1):
        r3 = `!`(r1);
        __ = ldf `[` in base;
        r4 = dyn __(e7, r3);
        goto L0(r4);
      L4():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      L5():
        e8 = ld e;
        e9 = force? e8;
        checkMissing(e9);
        is_na = ldf `is.na` in base;
        r2 = dyn is_na(e9);
        goto L1(e4, r2);
      L6():
        r = dyn base(<sym e>);
        goto L1(e4, r);
      };
      r6 = dyn formatDL[, style](p, "list");
      return r6;
    };
    r8 = dyn paste[, collapse](p1, "\n");
    check L1() else D1();
  D1():
    deopt 5 [r8];
  L1():
    popenv;
    return r8;
  }
}