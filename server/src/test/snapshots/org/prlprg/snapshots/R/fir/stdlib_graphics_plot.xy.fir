fun main() {
  () -+> V { reg r:cls, reg points_default:*, reg points_default1:V |
    mkenv;
    r = clos inner234475492;
    st `plot.xy` = r;
    points_default = ld `points.default`;
    check L0() else D0();
  D0():
    deopt 3 [points_default];
  L0():
    points_default1 = force? points_default;
    checkMissing(points_default1);
    popenv;
    return points_default1;
  }
}
fun inner234475492(xy, type, pch, lty, col, bg, cex, lwd, `...`) {
  (reg xy:*, reg type:*, reg pch:*, reg lty:*, reg col:*, reg bg:*, reg cex:*, reg lwd:*, reg ddd:dots) -+> V { var xy:*, var type:*, var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg par1:cls, reg r2:V, reg p1:p(V +), var col:*, reg col_isMissing:L, reg col_orDefault:*, reg par2:cls, reg r4:V, reg p2:p(V +), var bg:*, reg bg_isMissing:L, reg bg_orDefault:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, reg par3:cls, reg r6:V, reg p3:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg type1:*, reg type2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg type3:*, reg type4:V, reg as_character:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg type5:*, reg type6:V, reg length:cls, reg r16:V, reg r17:V, reg c2:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg c7:L, reg r19:V, reg type7:*, reg type8:V, reg nzchar:cls, reg r20:V, reg r21:V, reg c8:L, reg c9:V, reg c11:L, reg c12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg c16:L, reg r23:V, reg type9:*, reg type10:V, reg is_na:cls, reg r24:V, reg c17:L, reg c18:V, reg c20:L, reg stop:cls, reg gettextf:cls, reg r25:V, reg p4:p(V +), reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg type11:*, reg type12:V, reg nchar:cls, reg r31:V, reg r32:V, reg c21:L, reg warning:cls, reg gettextf1:cls, reg type13:*, reg type14:V, reg p5:p(V +), reg r34:V, reg p6:p(V +), reg r36:V, reg substr:cls, reg type15:*, reg type16:V, reg p7:p(V +), reg r39:V, reg isTRUE:cls, reg _in_:cls, reg t:*, reg t1:V, reg p8:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg c22:cls, reg r43:V, reg p9:p(V +), reg r45:V, reg p10:p(V +), reg r47:V, reg r48:V, reg c23:L, reg stop1:cls, reg gettextf2:cls, reg t2:*, reg t3:V, reg p11:p(V +), reg r50:V, reg p12:p(V +), reg r52:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg r57:V, reg _External_graphics:cls, reg C_plotXY:*, reg C_plotXY1:V, reg p13:p(V +), reg xy1:*, reg xy2:V, reg p14:p(V +), reg t4:*, reg t5:V, reg p15:p(V +), reg pch1:*, reg pch2:V, reg p16:p(V +), reg lty1:*, reg lty2:V, reg p17:p(V +), reg col1:*, reg col2:V, reg p18:p(V +), reg bg1:*, reg bg2:V, reg p19:p(V +), reg cex1:*, reg cex2:V, reg p20:p(V +), reg lwd1:*, reg lwd2:V, reg p21:p(V +), reg ddd1:dots?, reg r67:V, reg invisible:cls, reg r68:V |
    mkenv;
    st xy = xy;
    st type = type;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L0() else L1(pch);
  L0():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("pch");
      return r;
    };
    goto L1(p);
  L1(pch_orDefault):
    st pch = pch_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L2() else L3(lty);
  L2():
    p1 = prom<V +>{
      par1 = ldf par;
      r2 = dyn par1("lty");
      return r2;
    };
    goto L3(p1);
  L3(lty_orDefault):
    st lty = lty_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L4() else L5(col);
  L4():
    p2 = prom<V +>{
      par2 = ldf par;
      r4 = dyn par2("col");
      return r4;
    };
    goto L5(p2);
  L5(col_orDefault):
    st col = col_orDefault;
    bg_isMissing = missing.0(bg);
    if bg_isMissing then L6(NA_LGL) else L6(bg);
  L6(bg_orDefault):
    st bg = bg_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L7(1.0) else L7(cex);
  L7(cex_orDefault):
    st cex = cex_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L8() else L9(lwd);
  L8():
    p3 = prom<V +>{
      par3 = ldf par;
      r6 = dyn par3("lwd");
      return r6;
    };
    goto L9(p3);
  L9(lwd_orDefault):
    st lwd = lwd_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L10(r9):
    c1 = `as.logical`(r9);
    if c1 then L31() else L11();
  L28():
    type1 = ld type;
    check L30() else D0();
  L29():
    r8 = dyn base(<sym type>);
    goto L10(r8);
  D0():
    deopt 1 [type1];
  L11():
    goto L12();
  L12():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L30():
    type2 = force? type1;
    checkMissing(type2);
    c = `==`(type2, NULL);
    goto L10(c);
  L31():
    st type = "p";
    goto L12();
  L13(r12):
    st type = r12;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L33():
    type3 = ld type;
    check L35() else D1();
  L34():
    r11 = dyn base1(<sym type>);
    goto L13(r11);
  D1():
    deopt 11 [type3];
  L14(r15):
    r17 = `!=`(r15, 1);
    c2 = `as.logical`(r17);
    if c2 then L15(c2) else L41();
  L35():
    type4 = force? type3;
    checkMissing(type4);
    as_character = ldf `as.character` in base;
    r13 = dyn as_character(type4);
    check L36() else D2();
  L37():
    type5 = ld type;
    check L39() else D3();
  L38():
    r14 = dyn base2(<sym type>);
    goto L14(r14);
  D2():
    deopt 14 [r13];
  D3():
    deopt 18 [type5];
  L15(c3):
    c11 = `as.logical`(c3);
    if c11 then L17(c11) else L47();
  L36():
    goto L13(r13);
  L39():
    type6 = force? type5;
    checkMissing(type6);
    length = ldf length in base;
    r16 = dyn length(type6);
    check L40() else D4();
  L41():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  D4():
    deopt 21 [r16];
  L16(c7, r19):
    r21 = `!`(r19);
    c8 = `as.logical`(r21);
    c9 = `||`(c7, c8);
    goto L15(c9);
  L17(c12):
    c20 = `as.logical`(c12);
    if c20 then L53() else L19();
  L40():
    goto L14(r16);
  L42():
    type7 = ld type;
    check L44() else D5();
  L43():
    r18 = dyn base3(<sym type>);
    goto L16(c2, r18);
  L47():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  D5():
    deopt 26 [c2, type7];
  L18(c16, r23):
    c17 = `as.logical`(r23);
    c18 = `||`(c16, c17);
    goto L17(c18);
  L19():
    goto L20();
  L20():
    sym5 = ldf nchar;
    base5 = ldf nchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  L44():
    type8 = force? type7;
    checkMissing(type8);
    nzchar = ldf nzchar in base;
    r20 = dyn nzchar(type8);
    check L45() else D6();
  L48():
    type9 = ld type;
    check L50() else D7();
  L49():
    r22 = dyn base4(<sym type>);
    goto L18(c11, r22);
  L53():
    stop = ldf stop;
    check L54() else D9();
  D6():
    deopt 29 [c2, r20];
  D7():
    deopt 34 [c11, type9];
  D9():
    deopt 40 [];
  L21(r30):
    r32 = `>`(r30, 1);
    c21 = `as.logical`(r32);
    if c21 then L61() else L22();
  L45():
    goto L16(c2, r20);
  L50():
    type10 = force? type9;
    checkMissing(type10);
    is_na = ldf `is.na` in base;
    r24 = dyn is_na(type10);
    check L51() else D8();
  L54():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      r25 = dyn gettextf("invalid plot type");
      return r25;
    };
    r27 = dyn stop(p4);
    check L55() else D10();
  L57():
    type11 = ld type;
    check L59() else D11();
  L58():
    r29 = dyn base5(<sym type>);
    goto L21(r29);
  D8():
    deopt 37 [c11, r24];
  D10():
    deopt 42 [r27];
  D11():
    deopt 47 [type11];
  L22():
    goto L23();
  L23():
    substr = ldf substr;
    check L65() else D15();
  L51():
    goto L18(c11, r24);
  L55():
    goto L20();
  L59():
    type12 = force? type11;
    checkMissing(type12);
    nchar = ldf nchar in base;
    r31 = dyn nchar(type12, "chars", FALSE, NA_LGL);
    check L60() else D12();
  L61():
    warning = ldf warning;
    check L62() else D13();
  D12():
    deopt 53 [r31];
  D13():
    deopt 57 [];
  D15():
    deopt 63 [];
  L60():
    goto L21(r31);
  L62():
    p6 = prom<V +>{
      gettextf1 = ldf gettextf;
      p5 = prom<V +>{
        type13 = ld type;
        type14 = force? type13;
        checkMissing(type14);
        return type14;
      };
      r34 = dyn gettextf1("plot type '%s' will be truncated to first character", p5);
      return r34;
    };
    r36 = dyn warning(p6);
    check L63() else D14();
  L65():
    p7 = prom<V +>{
      type15 = ld type;
      type16 = force? type15;
      checkMissing(type16);
      return type16;
    };
    r39 = dyn substr(p7, 1, 1);
    check L66() else D16();
  D14():
    deopt 59 [r36];
  D16():
    deopt 67 [r39];
  L63():
    goto L23();
  L66():
    st t = r39;
    isTRUE = ldf isTRUE;
    check L67() else D17();
  D17():
    deopt 70 [];
  L67():
    p10 = prom<V +>{
      _in_ = ldf `%in%`;
      p8 = prom<V +>{
        t = ld t;
        t1 = force? t;
        checkMissing(t1);
        return t1;
      };
      p9 = prom<V +>{
        sym6 = ldf c;
        base6 = ldf c in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r42):
        return r42;
      L1():
        c22 = ldf c in base;
        r43 = dyn c22("l", "o", "b", "c", "s", "S", "h", "p", "n");
        goto L0(r43);
      L2():
        r41 = dyn base6("l", "o", "b", "c", "s", "S", "h", "p", "n");
        goto L0(r41);
      };
      r45 = dyn _in_(p8, p9);
      return r45;
    };
    r47 = dyn isTRUE(p10);
    check L68() else D18();
  D18():
    deopt 72 [r47];
  L68():
    r48 = `!`(r47);
    c23 = `as.logical`(r48);
    if c23 then L69() else L24();
  L24():
    goto L25();
  L25():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L73() else L74();
  L69():
    stop1 = ldf stop;
    check L70() else D19();
  D19():
    deopt 75 [];
  L26(r55):
    popenv;
    return r55;
  L70():
    p12 = prom<V +>{
      gettextf2 = ldf gettextf;
      p11 = prom<V +>{
        t2 = ld t;
        t3 = force? t2;
        checkMissing(t3);
        return t3;
      };
      r50 = dyn gettextf2("invalid plot type '%s'", p11);
      return r50;
    };
    r52 = dyn stop1(p12);
    check L71() else D20();
  L73():
    sym8 = ldf `.External.graphics`;
    base8 = ldf `.External.graphics` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L75() else L76();
  L74():
    r54 = dyn base7(<lang .External.graphics(C_plotXY, xy, t, pch, lty, col, bg, cex, lwd, ...)>);
    goto L26(r54);
  D20():
    deopt 77 [r52];
  L27(r57):
    invisible = ldf invisible in base;
    r68 = dyn invisible(r57);
    check L79() else D23();
  L71():
    goto L25();
  L75():
    _External_graphics = ldf `.External.graphics`;
    check L77() else D21();
  L76():
    r56 = dyn base8(<sym C_plotXY>, <sym xy>, <sym t>, <sym pch>, <sym lty>, <sym col>, <sym bg>, <sym cex>, <sym lwd>, <sym ...>);
    goto L27(r56);
  D21():
    deopt 84 [];
  D23():
    deopt 97 [r68];
  L77():
    p13 = prom<V +>{
      C_plotXY = ld C_plotXY;
      C_plotXY1 = force? C_plotXY;
      checkMissing(C_plotXY1);
      return C_plotXY1;
    };
    p14 = prom<V +>{
      xy1 = ld xy;
      xy2 = force? xy1;
      checkMissing(xy2);
      return xy2;
    };
    p15 = prom<V +>{
      t4 = ld t;
      t5 = force? t4;
      checkMissing(t5);
      return t5;
    };
    p16 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      return pch2;
    };
    p17 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    p18 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p19 = prom<V +>{
      bg1 = ld bg;
      bg2 = force? bg1;
      checkMissing(bg2);
      return bg2;
    };
    p20 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    p21 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    ddd1 = ld `...`;
    r67 = dyn _External_graphics[, , , , , , , , , `...`](p13, p14, p15, p16, p17, p18, p19, p20, p21, ddd1);
    check L78() else D22();
  L79():
    goto L26(r68);
  D22():
    deopt 95 [r67];
  L78():
    goto L27(r67);
  }
}