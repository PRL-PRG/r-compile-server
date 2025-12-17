fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2387351139;
    st `print.summary.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2387351139(x, digits, `symbolic.cor`, `signif.stars`, `...`) {
  (reg x:*, reg digits:*, reg symbolic_cor:*, reg signif_stars:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `symbolic.cor`:*, reg symbolic_cor_isMissing:L, reg symbolic_cor_orDefault:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), var `signif.stars`:*, reg signif_stars_isMissing:L, reg signif_stars_orDefault:*, reg getOption1:cls, reg r8:V, reg p2:p(V +), var `...`:dots?, reg cat:cls, reg paste:cls, reg deparse:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r18:V, reg df:*, reg df1:V, reg c4:L, reg df3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __:cls, reg r19:V, reg cat1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg x17:*, reg x18:V, reg c5:L, reg x20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r22:V, reg c6:V, reg r23:V, reg c7:L, reg c9:V, reg diff:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg x21:*, reg x22:V, reg c10:L, reg x24:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r26:V, reg range:cls, reg r27:V, reg p6:p(V +), reg r29:V, reg c11:L, reg c12:V, reg c14:L, reg p7:p(V +), reg r31:V, reg rdf:*, reg rdf1:V, reg r32:V, reg c15:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg c16:cls, reg r35:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg resid:*, reg resid1:V, reg dim:cls, reg r40:V, reg length:cls, reg r41:V, reg r42:V, reg c17:L, reg structure:cls, reg apply:cls, reg t:cls, reg resid2:*, reg resid3:V, reg p8:p(V +), reg r44:V, reg p9:p(V +), reg quantile:*, reg quantile1:V, reg p10:p(V +), reg r47:V, reg p11:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg nam:*, reg nam1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg resid4:*, reg resid5:V, reg dimnames:cls, reg r53:V, reg c18:L, reg r55:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __1:cls, reg r56:V, reg list:cls, reg r57:V, reg p12:p(V +), reg r59:V, reg r60:V, reg zapsmall:cls, reg quantile2:cls, reg resid6:*, reg resid7:V, reg p13:p(V +), reg r62:V, reg p14:p(V +), reg digits1:*, reg digits2:V, reg r64:V, reg p15:p(V +), reg r66:V, reg structure1:cls, reg zz:*, reg zz1:V, reg p16:p(V +), reg nam2:*, reg nam3:V, reg p17:p(V +), reg r69:V, reg print:cls, reg rq:*, reg rq1:V, reg p18:p(V +), reg digits3:*, reg digits4:V, reg p19:p(V +), reg ddd1:dots?, reg r72:V, reg rdf2:*, reg rdf3:V, reg r74:V, reg c19:L, reg print1:cls, reg resid8:*, reg resid9:V, reg p20:p(V +), reg digits5:*, reg digits6:V, reg p21:p(V +), reg ddd2:dots?, reg r77:V, reg cat2:cls, reg df4:*, reg df5:V, reg c20:L, reg df7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __2:cls, reg r78:V, reg p22:p(V +), reg r80:V, reg cat3:cls, reg r81:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r82:V, reg r83:V, reg x25:*, reg x26:V, reg c21:L, reg x28:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r84:V, reg length1:cls, reg r85:V, reg r86:V, reg c22:L, reg cat4:cls, reg r87:V, reg df8:*, reg df9:V, reg c23:L, reg df11:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __3:cls, reg r89:V, reg df12:*, reg df13:V, reg c24:L, reg dx23:V, reg df15:V, reg dr22:V, reg dc11:L, reg dx25:V, reg dx26:V, reg dx27:V, reg __4:cls, reg r90:V, reg r91:V, reg c25:L, reg cat5:cls, reg nsingular:*, reg nsingular1:V, reg p23:p(V +), reg r93:V, reg cat6:cls, reg r95:V, reg x29:*, reg x30:V, reg c26:L, reg x32:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg r96:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r97:V, reg r98:V, reg x33:*, reg x34:V, reg c27:L, reg x36:V, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg r99:V, reg any:cls, reg r100:V, reg c28:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r101:V, reg r102:V, reg aliased:*, reg aliased1:V, reg names:cls, reg r103:V, reg matrix:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r104:V, reg r105:V, reg aliased2:*, reg aliased3:V, reg length2:cls, reg r106:V, reg p24:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r108:V, reg r109:V, reg cn:*, reg cn1:V, reg colnames:cls, reg coefs:*, reg coefs1:V, reg p25:p(V +), reg r111:V, reg list1:cls, reg r112:V, reg p26:p(V +), reg r114:V, reg x37:*, reg x38:V, reg c29:L, reg x40:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg r115:V, reg l:*, reg c30:L, reg dx35:V, reg l2:*, reg dr30:V, reg dc15:L, reg dx37:V, reg dx38:V, reg dx39:V, reg aliased4:*, reg aliased5:V, reg r116:V, reg ___:cls, reg r117:V, reg printCoefmat:cls, reg coefs2:*, reg coefs3:V, reg p27:p(V +), reg digits7:*, reg digits8:V, reg p28:p(V +), reg signif_stars1:*, reg signif_stars2:V, reg p29:p(V +), reg ddd3:dots?, reg r121:V, reg cat7:cls, reg format:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r122:V, reg r123:V, reg signif:cls, reg r124:V, reg p30:p(V +), reg r126:V, reg p31:p(V +), reg rdf4:*, reg rdf5:V, reg p32:p(V +), reg r129:V, reg cat8:cls, reg r130:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r131:V, reg r132:V, reg naprint:cls, reg x41:*, reg x42:V, reg c31:L, reg x44:V, reg dr32:V, reg dc16:L, reg dx41:V, reg dx42:V, reg r133:V, reg p33:p(V +), reg r135:V, reg nzchar:cls, reg r136:V, reg c32:L, reg cat9:cls, reg mess:*, reg mess1:V, reg p34:p(V +), reg r138:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r140:V, reg r141:V, reg x45:*, reg x46:V, reg c33:L, reg x48:V, reg dr34:V, reg dc17:L, reg dx43:V, reg dx44:V, reg r142:V, reg c34:V, reg r143:V, reg c35:L, reg cat10:cls, reg formatC:cls, reg x49:*, reg x50:V, reg c36:L, reg x52:V, reg dr36:V, reg dc18:L, reg dx45:V, reg dx46:V, reg r144:V, reg p35:p(V +), reg digits9:*, reg digits10:V, reg p36:p(V +), reg r147:V, reg p37:p(V +), reg r149:V, reg cat11:cls, reg formatC1:cls, reg x53:*, reg x54:V, reg c37:L, reg x56:V, reg dr38:V, reg dc19:L, reg dx47:V, reg dx48:V, reg r150:V, reg p38:p(V +), reg digits11:*, reg digits12:V, reg p39:p(V +), reg r153:V, reg p40:p(V +), reg formatC2:cls, reg x57:*, reg x58:V, reg c38:L, reg x60:V, reg dr40:V, reg dc20:L, reg dx49:V, reg dx50:V, reg r155:V, reg c39:L, reg dx52:V, reg dr42:V, reg dc21:L, reg dx53:V, reg dx54:V, reg __5:cls, reg r156:V, reg p41:p(V +), reg digits13:*, reg digits14:V, reg p42:p(V +), reg r159:V, reg p43:p(V +), reg x61:*, reg x62:V, reg c40:L, reg x64:V, reg dr44:V, reg dc22:L, reg dx55:V, reg dx56:V, reg r161:V, reg c41:L, reg dx58:V, reg dr46:V, reg dc23:L, reg dx59:V, reg dx60:V, reg __6:cls, reg r162:V, reg p44:p(V +), reg x65:*, reg x66:V, reg c42:L, reg x68:V, reg dr48:V, reg dc24:L, reg dx61:V, reg dx62:V, reg r164:V, reg c43:L, reg dx64:V, reg dr50:V, reg dc25:L, reg dx65:V, reg dx66:V, reg __7:cls, reg r165:V, reg p45:p(V +), reg format_pval:cls, reg pf:cls, reg x69:*, reg x70:V, reg c44:L, reg x72:V, reg dr52:V, reg dc26:L, reg dx67:V, reg dx68:V, reg r167:V, reg c45:L, reg dx70:V, reg dr54:V, reg dc27:L, reg dx71:V, reg dx72:V, reg __8:cls, reg r168:V, reg p46:p(V +), reg x73:*, reg x74:V, reg c46:L, reg x76:V, reg dr56:V, reg dc28:L, reg dx73:V, reg dx74:V, reg r170:V, reg c47:L, reg dx76:V, reg dr58:V, reg dc29:L, reg dx77:V, reg dx78:V, reg __9:cls, reg r171:V, reg p47:p(V +), reg x77:*, reg x78:V, reg c48:L, reg x80:V, reg dr60:V, reg dc30:L, reg dx79:V, reg dx80:V, reg r173:V, reg c49:L, reg dx82:V, reg dr62:V, reg dc31:L, reg dx83:V, reg dx84:V, reg __10:cls, reg r174:V, reg p48:p(V +), reg r176:V, reg p49:p(V +), reg digits15:*, reg digits16:V, reg p50:p(V +), reg r179:V, reg p51:p(V +), reg r181:V, reg cat12:cls, reg r182:V, reg x81:*, reg x82:V, reg c50:L, reg x84:V, reg dr64:V, reg dc32:L, reg dx85:V, reg dx86:V, reg r184:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r185:V, reg r186:V, reg correl:*, reg correl1:V, reg c51:V, reg r187:V, reg c52:L, reg NCOL:cls, reg correl2:*, reg correl3:V, reg p52:p(V +), reg r189:V, reg p53:*, reg p54:V, reg r190:V, reg c53:L, reg cat13:cls, reg r191:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r192:V, reg r193:V, reg symbolic_cor1:*, reg symbolic_cor2:V, reg c54:L, reg c55:L, reg c57:V, reg symbolic_cor3:*, reg symbolic_cor4:V, reg c58:L, reg c59:V, reg c61:L, reg print2:cls, reg symnum:cls, reg correl4:*, reg correl5:V, reg p55:p(V +), reg r195:V, reg p56:p(V +), reg r197:V, reg r198:V, reg format1:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r199:V, reg r200:V, reg round:cls, reg r201:V, reg p57:p(V +), reg digits17:*, reg digits18:V, reg p58:p(V +), reg r204:V, reg l3:*, reg c62:L, reg r206:S, reg l5:*, reg dr66:V, reg dc33:L, reg dx87:V, reg dx88:V, reg lower_tri:cls, reg correl6:*, reg correl7:V, reg p59:p(V +), reg r210:V, reg r211:V, reg ___1:cls, reg r212:V, reg print3:cls, reg correl8:*, reg correl9:V, reg c63:L, reg dr68:V, reg dc34:L, reg dx89:V, reg dx90:V, reg p60:*, reg p61:V, reg r213:V, reg __11:cls, reg r214:V, reg p62:p(V +), reg r216:V, reg r217:V, reg cat14:cls, reg r219:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r220:V, reg r221:V, reg x85:*, reg x86:V, reg invisible:cls, reg r222:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      r3 = `-`(r2, 3);
      max = ldf max in base;
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    symbolic_cor_isMissing = missing.0(symbolic_cor);
    if symbolic_cor_isMissing then L2() else L3(symbolic_cor);
  L2():
    p1 = prom<V +>{
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
      r6 = `$`(x4, <sym symbolic.cor>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L3(p1);
  L3(symbolic_cor_orDefault):
    st `symbolic.cor` = symbolic_cor_orDefault;
    signif_stars_isMissing = missing.0(signif_stars);
    if signif_stars_isMissing then L4() else L5(signif_stars);
  L4():
    p2 = prom<V +>{
      getOption1 = ldf getOption;
      r8 = dyn getOption1("show.signif.stars");
      return r8;
    };
    goto L5(p2);
  L5(signif_stars_orDefault):
    st `signif.stars` = signif_stars_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L44() else D0();
  D0():
    deopt 1 [];
  L44():
    p5 = prom<V +>{
      paste = ldf paste;
      p4 = prom<V +>{
        deparse = ldf deparse;
        p3 = prom<V +>{
          x5 = ld x;
          x6 = force? x5;
          checkMissing(x6);
          c1 = `is.object`(x6);
          if c1 then L1() else L2(x6);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("$", x6);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(x8):
          r10 = `$`(x8, <sym call>);
          goto L0(r10);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r12 = dyn deparse(p3);
        return r12;
      };
      r14 = dyn paste[, sep, collapse](p4, "\n", "\n");
      return r14;
    };
    r16 = dyn cat[, , , sep]("\nCall:\n", p5, "\n\n", "");
    check L45() else D1();
  D1():
    deopt 7 [r16];
  L45():
    x9 = ld x;
    check L46() else D2();
  D2():
    deopt 8 [x9];
  L46():
    x10 = force? x9;
    checkMissing(x10);
    c2 = `is.object`(x10);
    if c2 then L48() else L49(x10);
  L47(dx5):
    st resid = dx5;
    x13 = ld x;
    check L51() else D3();
  L48():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L50() else L49(dr4);
  L49(x12):
    r17 = `$`(x12, <sym residuals>);
    goto L47(r17);
  D3():
    deopt 12 [x13];
  L50():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L47(dx4);
  L51():
    x14 = force? x13;
    checkMissing(x14);
    c3 = `is.object`(x14);
    if c3 then L53() else L54(x14);
  L52(dx7):
    st df = dx7;
    df = ld df;
    check L56() else D4();
  L53():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L55() else L54(dr6);
  L54(x16):
    r18 = `$`(x16, <sym df>);
    goto L52(r18);
  D4():
    deopt 16 [df];
  L55():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L52(dx6);
  L56():
    df1 = force? df;
    checkMissing(df1);
    c4 = `is.object`(df1);
    if c4 then L57() else L58(df1);
  L6(dx9):
    st rdf = dx9;
    cat1 = ldf cat;
    check L60() else D5();
  L57():
    dr8 = tryDispatchBuiltin.1("[", df1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L59() else L58(dr8);
  L58(df3):
    __ = ldf `[` in base;
    r19 = dyn __(df3, 2);
    goto L6(r19);
  D5():
    deopt 23 [];
  L59():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L6(dx8);
  L60():
    p7 = prom<V +>{
      sym1 = ldf `is.null`;
      base1 = ldf `is.null` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r21):
      r23 = `!`(r21);
      c7 = `as.logical`(r23);
      if c7 then L9() else L1(c7);
    L3():
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c5 = `is.object`(x18);
      if c5 then L6() else L7(x18);
    L4():
      r20 = dyn base1(<lang `$`(x, weights)>);
      goto L0(r20);
    L1(c9):
      c14 = `as.logical`(c9);
      if c14 then L11() else L2();
    L5(dx11):
      c6 = `==`(dx11, NULL);
      goto L0(c6);
    L6():
      dr10 = tryDispatchBuiltin.1("$", x18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L8() else L7(dr10);
    L7(x20):
      r22 = `$`(x20, <sym weights>);
      goto L5(r22);
    L9():
      diff = ldf diff;
      p6 = prom<V +>{
        sym2 = ldf range;
        base2 = ldf range in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r25):
        return r25;
      L1():
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        c10 = `is.object`(x22);
        if c10 then L4() else L5(x22);
      L2():
        r24 = dyn base2(<lang `$`(x, weights)>);
        goto L0(r24);
      L3(dx13):
        range = ldf range in base;
        r27 = dyn range(dx13);
        goto L0(r27);
      L4():
        dr12 = tryDispatchBuiltin.1("$", x22);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L6() else L5(dr12);
      L5(x24):
        r26 = `$`(x24, <sym weights>);
        goto L3(r26);
      L6():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L3(dx12);
      };
      r29 = dyn diff(p6);
      c11 = `as.logical`(r29);
      c12 = `&&`(c7, c11);
      goto L1(c12);
    L2():
      invisible.0();
      return NULL;
    L8():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L5(dx10);
    L11():
      return "Weighted ";
    };
    r31 = dyn cat1[, , sep](p7, "Residuals:\n", "");
    check L61() else D6();
  D6():
    deopt 28 [r31];
  L61():
    rdf = ld rdf;
    check L62() else D7();
  D7():
    deopt 29 [rdf];
  L62():
    rdf1 = force? rdf;
    checkMissing(rdf1);
    r32 = `>`(rdf1, 5);
    c15 = `as.logical`(r32);
    if c15 then L63() else L7();
  L7():
    rdf2 = ld rdf;
    check L85() else D20();
  L13():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L94() else L95();
  L63():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L64() else L65();
  D20():
    deopt 81 [rdf2];
  L8(r34):
    st nam = r34;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L15(r83):
    r86 = `==`(r83, 0);
    c22 = `as.logical`(r86);
    if c22 then L102() else L16();
  L64():
    c16 = ldf c in base;
    r35 = dyn c16("Min", "1Q", "Median", "3Q", "Max");
    check L66() else D8();
  L65():
    r33 = dyn base3("Min", "1Q", "Median", "3Q", "Max");
    goto L8(r33);
  L85():
    rdf3 = force? rdf2;
    checkMissing(rdf3);
    r74 = `>`(rdf3, 0);
    c19 = `as.logical`(r74);
    if c19 then L86() else L14();
  L94():
    x25 = ld x;
    check L96() else D27();
  L95():
    r82 = dyn base8(<lang `$`(x, aliased)>);
    goto L15(r82);
  D8():
    deopt 41 [r35];
  D27():
    deopt 104 [x25];
  L9(r37):
    r42 = `==`(r37, 2);
    c17 = `as.logical`(r42);
    if c17 then L74() else L11();
  L14():
    cat2 = ldf cat;
    check L90() else D23();
  L16():
    df8 = ld df;
    check L106() else D31();
  L17():
    cat7 = ldf cat;
    check L152() else D48();
  L66():
    goto L8(r35);
  L67():
    sym5 = ldf dim;
    base5 = ldf dim in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  L68():
    r36 = dyn base4(<lang dim(resid)>);
    goto L9(r36);
  L86():
    print1 = ldf print;
    check L87() else D21();
  L96():
    x26 = force? x25;
    checkMissing(x26);
    c21 = `is.object`(x26);
    if c21 then L98() else L99(x26);
  L102():
    cat4 = ldf cat;
    check L103() else D29();
  D21():
    deopt 86 [];
  D23():
    deopt 93 [];
  D29():
    deopt 112 [];
  D31():
    deopt 115 [df8];
  D48():
    deopt 191 [];
  L10(r39):
    length = ldf length in base;
    r41 = dyn length(r39);
    check L73() else D11();
  L11():
    zapsmall = ldf zapsmall;
    check L78() else D14();
  L12(r60):
    st rq = r60;
    print = ldf print;
    check L82() else D18();
  L69():
    resid = ld resid;
    check L71() else D9();
  L70():
    r38 = dyn base5(<sym resid>);
    goto L10(r38);
  L74():
    structure = ldf structure;
    check L75() else D12();
  L87():
    p20 = prom<V +>{
      resid8 = ld resid;
      resid9 = force? resid8;
      checkMissing(resid9);
      return resid9;
    };
    p21 = prom<V +>{
      digits5 = ld digits;
      digits6 = force? digits5;
      checkMissing(digits6);
      return digits6;
    };
    ddd2 = ld `...`;
    r77 = dyn print1[, digits, `...`](p20, p21, ddd2);
    check L88() else D22();
  L90():
    p22 = prom<V +>{
      df4 = ld df;
      df5 = force? df4;
      checkMissing(df5);
      c20 = `is.object`(df5);
      if c20 then L1() else L2(df5);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", df5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(df7):
      __2 = ldf `[` in base;
      r78 = dyn __2(df7, 1);
      goto L0(r78);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r80 = dyn cat2("ALL", p22, "residuals are 0: no residual degrees of freedom!");
    check L91() else D24();
  L97(dx19):
    length1 = ldf length in base;
    r85 = dyn length1(dx19);
    check L101() else D28();
  L98():
    dr18 = tryDispatchBuiltin.1("$", x26);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L100() else L99(dr18);
  L99(x28):
    r84 = `$`(x28, <sym aliased>);
    goto L97(r84);
  L103():
    r87 = dyn cat4("\nNo Coefficients\n");
    check L104() else D30();
  L106():
    df9 = force? df8;
    checkMissing(df9);
    c23 = `is.object`(df9);
    if c23 then L107() else L108(df9);
  L152():
    p31 = prom<V +>{
      format = ldf format;
      p30 = prom<V +>{
        sym13 = ldf signif;
        base13 = ldf signif in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L1() else L2();
      L0(r123):
        return r123;
      L1():
        signif = ldf signif in base;
        r124 = dyn signif(<lang `$`(x, sigma)>, <sym digits>);
        goto L0(r124);
      L2():
        r122 = dyn base13(<lang `$`(x, sigma)>, <sym digits>);
        goto L0(r122);
      };
      r126 = dyn format(p30);
      return r126;
    };
    p32 = prom<V +>{
      rdf4 = ld rdf;
      rdf5 = force? rdf4;
      checkMissing(rdf5);
      return rdf5;
    };
    r129 = dyn cat7("\nResidual standard error:", p31, "on", p32, "degrees of freedom");
    check L153() else D49();
  D9():
    deopt 47 [resid];
  D11():
    deopt 52 [r41];
  D12():
    deopt 56 [];
  D14():
    deopt 62 [];
  D18():
    deopt 75 [];
  D22():
    deopt 91 [r77];
  D24():
    deopt 97 [r80];
  D28():
    deopt 108 [r85];
  D30():
    deopt 114 [r87];
  D49():
    deopt 197 [r129];
  L18(dx21):
    df12 = ld df;
    check L110() else D32();
  L71():
    resid1 = force? resid;
    checkMissing(resid1);
    dim = ldf dim in base;
    r40 = dyn dim(resid1);
    check L72() else D10();
  L73():
    goto L9(r41);
  L75():
    p11 = prom<V +>{
      apply = ldf apply;
      p9 = prom<V +>{
        t = ldf t;
        p8 = prom<V +>{
          resid2 = ld resid;
          resid3 = force? resid2;
          checkMissing(resid3);
          return resid3;
        };
        r44 = dyn t(p8);
        return r44;
      };
      p10 = prom<V +>{
        quantile = ld quantile;
        quantile1 = force? quantile;
        checkMissing(quantile1);
        return quantile1;
      };
      r47 = dyn apply(p9, 1, p10);
      return r47;
    };
    p12 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L3() else L4();
    L0(r50):
      return r50;
    L3():
      nam = ld nam;
      nam1 = force? nam;
      checkMissing(nam1);
      sym7 = ldf dimnames;
      base7 = ldf dimnames in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L5() else L6();
    L4():
      r49 = dyn base6(<sym nam>, <lang `[[`(dimnames(resid), 2)>);
      goto L0(r49);
    L1(r52):
      c18 = `is.object`(r52);
      if c18 then L7() else L8(r52);
    L5():
      resid4 = ld resid;
      resid5 = force? resid4;
      checkMissing(resid5);
      dimnames = ldf dimnames in base;
      r53 = dyn dimnames(resid5);
      goto L1(r53);
    L6():
      r51 = dyn base7(<sym resid>);
      goto L1(r51);
    L2(dx15):
      list = ldf list in base;
      r57 = dyn list(nam1, dx15);
      goto L0(r57);
    L7():
      dr14 = tryDispatchBuiltin.1("[[", r52);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L9() else L8(dr14);
    L8(r55):
      __1 = ldf `[[` in base;
      r56 = dyn __1(r55, 2);
      goto L2(r56);
    L9():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L2(dx14);
    };
    r59 = dyn structure[, dimnames](p11, p12);
    check L76() else D13();
  L78():
    p14 = prom<V +>{
      quantile2 = ldf quantile;
      p13 = prom<V +>{
        resid6 = ld resid;
        resid7 = force? resid6;
        checkMissing(resid7);
        return resid7;
      };
      r62 = dyn quantile2(p13);
      return r62;
    };
    p15 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      r64 = `+`(digits2, 1);
      return r64;
    };
    r66 = dyn zapsmall(p14, p15);
    check L79() else D15();
  L82():
    p18 = prom<V +>{
      rq = ld rq;
      rq1 = force? rq;
      checkMissing(rq1);
      return rq1;
    };
    p19 = prom<V +>{
      digits3 = ld digits;
      digits4 = force? digits3;
      checkMissing(digits4);
      return digits4;
    };
    ddd1 = ld `...`;
    r72 = dyn print[, digits, `...`](p18, p19, ddd1);
    check L83() else D19();
  L88():
    goto L13();
  L91():
    cat3 = ldf cat;
    check L92() else D25();
  L100():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L97(dx18);
  L101():
    goto L15(r85);
  L104():
    goto L17();
  L107():
    dr20 = tryDispatchBuiltin.1("[", df9);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L109() else L108(dr20);
  L108(df11):
    __3 = ldf `[` in base;
    r89 = dyn __3(df11, 3);
    goto L18(r89);
  L153():
    cat8 = ldf cat;
    check L154() else D50();
  D10():
    deopt 50 [r40];
  D13():
    deopt 60 [r59];
  D15():
    deopt 65 [r66];
  D19():
    deopt 80 [r72];
  D25():
    deopt 99 [];
  D32():
    deopt 119 [dx21, df12];
  D50():
    deopt 199 [];
  L72():
    goto L10(r40);
  L76():
    goto L12(r59);
  L79():
    st zz = r66;
    structure1 = ldf structure;
    check L80() else D16();
  L83():
    goto L13();
  L92():
    r81 = dyn cat3("\n");
    check L93() else D26();
  L109():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L18(dx20);
  L110():
    df13 = force? df12;
    checkMissing(df13);
    c24 = `is.object`(df13);
    if c24 then L111() else L112(dx21, df13);
  L154():
    r130 = dyn cat8("\n");
    check L155() else D51();
  D16():
    deopt 68 [];
  D26():
    deopt 101 [r81];
  D51():
    deopt 201 [r130];
  L19(dx26, dx27):
    r91 = `-`(dx26, dx27);
    st nsingular = r91;
    c25 = `as.logical`(r91);
    if c25 then L114() else L20();
  L80():
    p16 = prom<V +>{
      zz = ld zz;
      zz1 = force? zz;
      checkMissing(zz1);
      return zz1;
    };
    p17 = prom<V +>{
      nam2 = ld nam;
      nam3 = force? nam2;
      checkMissing(nam3);
      return nam3;
    };
    r69 = dyn structure1[, names](p16, p17);
    check L81() else D17();
  L93():
    goto L13();
  L111():
    dr22 = tryDispatchBuiltin.1("[", df13);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L113() else L112(dx21, dr22);
  L112(dx23, df15):
    __4 = ldf `[` in base;
    r90 = dyn __4(df15, 1);
    goto L19(dx23, r90);
  L155():
    sym14 = ldf nzchar;
    base14 = ldf nzchar in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L156() else L157();
  D17():
    deopt 72 [r69];
  L20():
    cat6 = ldf cat;
    check L118() else D35();
  L21():
    x29 = ld x;
    check L120() else D37();
  L27(r132):
    c32 = `as.logical`(r132);
    if c32 then L161() else L28();
  L81():
    goto L12(r69);
  L113():
    dx25 = getTryDispatchBuiltinValue(dr22);
    goto L19(dx21, dx25);
  L114():
    cat5 = ldf cat;
    check L115() else D33();
  L156():
    naprint = ldf naprint;
    check L158() else D52();
  L157():
    r131 = dyn base14(<lang `<-`(mess, naprint(`$`(x, na.action)))>);
    goto L27(r131);
  D33():
    deopt 127 [];
  D35():
    deopt 135 [];
  D37():
    deopt 138 [x29];
  D52():
    deopt 205 [];
  L28():
    goto L29();
  L29():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L165() else L166();
  L115():
    p23 = prom<V +>{
      nsingular = ld nsingular;
      nsingular1 = force? nsingular;
      checkMissing(nsingular1);
      return nsingular1;
    };
    r93 = dyn cat5[, , , sep]("\nCoefficients: (", p23, " not defined because of singularities)\n", "");
    check L116() else D34();
  L118():
    r95 = dyn cat6("\nCoefficients:\n");
    check L119() else D36();
  L120():
    x30 = force? x29;
    checkMissing(x30);
    c26 = `is.object`(x30);
    if c26 then L122() else L123(x30);
  L158():
    p33 = prom<V +>{
      x41 = ld x;
      x42 = force? x41;
      checkMissing(x42);
      c31 = `is.object`(x42);
      if c31 then L1() else L2(x42);
    L0(dx42):
      return dx42;
    L1():
      dr32 = tryDispatchBuiltin.1("$", x42);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(x44):
      r133 = `$`(x44, <sym na.action>);
      goto L0(r133);
    L3():
      dx41 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx41);
    };
    r135 = dyn naprint(p33);
    check L159() else D53();
  L161():
    cat9 = ldf cat;
    check L162() else D55();
  D34():
    deopt 133 [r93];
  D36():
    deopt 137 [r95];
  D53():
    deopt 207 [r135];
  D55():
    deopt 212 [];
  L30(r141):
    r143 = `!`(r141);
    c35 = `as.logical`(r143);
    if c35 then L172() else L31();
  L116():
    goto L21();
  L119():
    goto L21();
  L121(dx29):
    st coefs = dx29;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L125() else L126();
  L122():
    dr24 = tryDispatchBuiltin.1("$", x30);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L124() else L123(dr24);
  L123(x32):
    r96 = `$`(x32, <sym coefficients>);
    goto L121(r96);
  L159():
    st mess = r135;
    nzchar = ldf nzchar in base;
    r136 = dyn nzchar(r135);
    check L160() else D54();
  L162():
    p34 = prom<V +>{
      mess = ld mess;
      mess1 = force? mess;
      checkMissing(mess1);
      return mess1;
    };
    r138 = dyn cat9[, , , sep]("  (", p34, ")\n", "");
    check L163() else D56();
  L165():
    x45 = ld x;
    check L167() else D57();
  L166():
    r140 = dyn base15(<lang `$`(x, fstatistic)>);
    goto L30(r140);
  D54():
    deopt 210 [r136];
  D56():
    deopt 218 [r138];
  D57():
    deopt 222 [x45];
  L22(r98):
    c28 = `as.logical`(r98);
    if c28 then L133() else L23();
  L31():
    goto L32();
  L32():
    x81 = ld x;
    check L180() else D64();
  L124():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L121(dx28);
  L125():
    x33 = ld x;
    check L127() else D38();
  L126():
    r97 = dyn base9(<lang `<-`(aliased, `$`(x, aliased))>);
    goto L22(r97);
  L160():
    goto L27(r136);
  L163():
    goto L29();
  L167():
    x46 = force? x45;
    checkMissing(x46);
    c33 = `is.object`(x46);
    if c33 then L169() else L170(x46);
  L172():
    cat10 = ldf cat;
    check L173() else D58();
  D38():
    deopt 144 [x33];
  D58():
    deopt 228 [];
  D64():
    deopt 251 [x81];
  L23():
    goto L26();
  L26():
    printCoefmat = ldf printCoefmat;
    check L150() else D46();
  L127():
    x34 = force? x33;
    checkMissing(x34);
    c27 = `is.object`(x34);
    if c27 then L129() else L130(x34);
  L133():
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L134() else L135();
  L168(dx44):
    c34 = `==`(dx44, NULL);
    goto L30(c34);
  L169():
    dr34 = tryDispatchBuiltin.1("$", x46);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L171() else L170(dr34);
  L170(x48):
    r142 = `$`(x48, <sym fstatistic>);
    goto L168(r142);
  L173():
    p37 = prom<V +>{
      formatC = ldf formatC;
      p35 = prom<V +>{
        x49 = ld x;
        x50 = force? x49;
        checkMissing(x50);
        c36 = `is.object`(x50);
        if c36 then L1() else L2(x50);
      L0(dx46):
        return dx46;
      L1():
        dr36 = tryDispatchBuiltin.1("$", x50);
        dc18 = getTryDispatchBuiltinDispatched(dr36);
        if dc18 then L3() else L2(dr36);
      L2(x52):
        r144 = `$`(x52, <sym r.squared>);
        goto L0(r144);
      L3():
        dx45 = getTryDispatchBuiltinValue(dr36);
        goto L0(dx45);
      };
      p36 = prom<V +>{
        digits9 = ld digits;
        digits10 = force? digits9;
        checkMissing(digits10);
        return digits10;
      };
      r147 = dyn formatC[, digits](p35, p36);
      return r147;
    };
    r149 = dyn cat10("Multiple R-squared: ", p37);
    check L174() else D59();
  L180():
    x82 = force? x81;
    checkMissing(x82);
    c50 = `is.object`(x82);
    if c50 then L182() else L183(x82);
  D46():
    deopt 180 [];
  D59():
    deopt 231 [r149];
  L24(r102):
    st cn = r102;
    matrix = ldf matrix;
    check L138() else D42();
  L128(dx31):
    st aliased = dx31;
    any = ldf any in base;
    r100 = dyn any(dx31);
    check L132() else D39();
  L129():
    dr26 = tryDispatchBuiltin.1("$", x34);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L131() else L130(dr26);
  L130(x36):
    r99 = `$`(x36, <sym aliased>);
    goto L128(r99);
  L134():
    aliased = ld aliased;
    check L136() else D40();
  L135():
    r101 = dyn base10(<sym aliased>);
    goto L24(r101);
  L150():
    p27 = prom<V +>{
      coefs2 = ld coefs;
      coefs3 = force? coefs2;
      checkMissing(coefs3);
      return coefs3;
    };
    p28 = prom<V +>{
      digits7 = ld digits;
      digits8 = force? digits7;
      checkMissing(digits8);
      return digits8;
    };
    p29 = prom<V +>{
      signif_stars1 = ld `signif.stars`;
      signif_stars2 = force? signif_stars1;
      checkMissing(signif_stars2);
      return signif_stars2;
    };
    ddd3 = ld `...`;
    r121 = dyn printCoefmat[, digits, `signif.stars`, `na.print`, `...`](p27, p28, p29, "NA", ddd3);
    check L151() else D47();
  L171():
    dx43 = getTryDispatchBuiltinValue(dr34);
    goto L168(dx43);
  L174():
    cat11 = ldf cat;
    check L175() else D60();
  L181(dx86):
    st correl = dx86;
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L185() else L186();
  L182():
    dr64 = tryDispatchBuiltin.1("$", x82);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L184() else L183(dr64);
  L183(x84):
    r184 = `$`(x84, <sym correlation>);
    goto L181(r184);
  D39():
    deopt 149 [r100];
  D40():
    deopt 152 [aliased];
  D42():
    deopt 158 [];
  D47():
    deopt 189 [r121];
  D60():
    deopt 233 [];
  L33(r186):
    r187 = `!`(r186);
    c52 = `as.logical`(r187);
    if c52 then L188() else L34();
  L131():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L128(dx30);
  L132():
    goto L22(r100);
  L136():
    aliased1 = force? aliased;
    checkMissing(aliased1);
    names = ldf names in base;
    r103 = dyn names(aliased1);
    check L137() else D41();
  L138():
    p24 = prom<V +>{
      sym11 = ldf length;
      base11 = ldf length in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r105):
      return r105;
    L1():
      aliased2 = ld aliased;
      aliased3 = force? aliased2;
      checkMissing(aliased3);
      length2 = ldf length in base;
      r106 = dyn length2(aliased3);
      goto L0(r106);
    L2():
      r104 = dyn base11(<sym aliased>);
      goto L0(r104);
    };
    p26 = prom<V +>{
      sym12 = ldf list;
      base12 = ldf list in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r109):
      return r109;
    L1():
      cn = ld cn;
      cn1 = force? cn;
      checkMissing(cn1);
      colnames = ldf colnames;
      p25 = prom<V +>{
        coefs = ld coefs;
        coefs1 = force? coefs;
        checkMissing(coefs1);
        return coefs1;
      };
      r111 = dyn colnames(p25);
      list1 = ldf list in base;
      r112 = dyn list1(cn1, r111);
      goto L0(r112);
    L2():
      r108 = dyn base12(<sym cn>, <lang colnames(coefs)>);
      goto L0(r108);
    };
    r114 = dyn matrix[, , , dimnames](NA_LGL, p24, 4.0, p26);
    check L139() else D43();
  L151():
    goto L17();
  L175():
    p40 = prom<V +>{
      formatC1 = ldf formatC;
      p38 = prom<V +>{
        x53 = ld x;
        x54 = force? x53;
        checkMissing(x54);
        c37 = `is.object`(x54);
        if c37 then L1() else L2(x54);
      L0(dx48):
        return dx48;
      L1():
        dr38 = tryDispatchBuiltin.1("$", x54);
        dc19 = getTryDispatchBuiltinDispatched(dr38);
        if dc19 then L3() else L2(dr38);
      L2(x56):
        r150 = `$`(x56, <sym adj.r.squared>);
        goto L0(r150);
      L3():
        dx47 = getTryDispatchBuiltinValue(dr38);
        goto L0(dx47);
      };
      p39 = prom<V +>{
        digits11 = ld digits;
        digits12 = force? digits11;
        checkMissing(digits12);
        return digits12;
      };
      r153 = dyn formatC1[, digits](p38, p39);
      return r153;
    };
    p43 = prom<V +>{
      formatC2 = ldf formatC;
      p41 = prom<V +>{
        x57 = ld x;
        x58 = force? x57;
        checkMissing(x58);
        c38 = `is.object`(x58);
        if c38 then L2() else L3(x58);
      L1(dx50):
        c39 = `is.object`(dx50);
        if c39 then L5() else L6(dx50);
      L2():
        dr40 = tryDispatchBuiltin.1("$", x58);
        dc20 = getTryDispatchBuiltinDispatched(dr40);
        if dc20 then L4() else L3(dr40);
      L3(x60):
        r155 = `$`(x60, <sym fstatistic>);
        goto L1(r155);
      L0(dx54):
        return dx54;
      L4():
        dx49 = getTryDispatchBuiltinValue(dr40);
        goto L1(dx49);
      L5():
        dr42 = tryDispatchBuiltin.1("[", dx50);
        dc21 = getTryDispatchBuiltinDispatched(dr42);
        if dc21 then L7() else L6(dr42);
      L6(dx52):
        __5 = ldf `[` in base;
        r156 = dyn __5(dx52, 1);
        goto L0(r156);
      L7():
        dx53 = getTryDispatchBuiltinValue(dr42);
        goto L0(dx53);
      };
      p42 = prom<V +>{
        digits13 = ld digits;
        digits14 = force? digits13;
        checkMissing(digits14);
        return digits14;
      };
      r159 = dyn formatC2[, digits](p41, p42);
      return r159;
    };
    p44 = prom<V +>{
      x61 = ld x;
      x62 = force? x61;
      checkMissing(x62);
      c40 = `is.object`(x62);
      if c40 then L2() else L3(x62);
    L1(dx56):
      c41 = `is.object`(dx56);
      if c41 then L5() else L6(dx56);
    L2():
      dr44 = tryDispatchBuiltin.1("$", x62);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L4() else L3(dr44);
    L3(x64):
      r161 = `$`(x64, <sym fstatistic>);
      goto L1(r161);
    L0(dx60):
      return dx60;
    L4():
      dx55 = getTryDispatchBuiltinValue(dr44);
      goto L1(dx55);
    L5():
      dr46 = tryDispatchBuiltin.1("[", dx56);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L7() else L6(dr46);
    L6(dx58):
      __6 = ldf `[` in base;
      r162 = dyn __6(dx58, 2);
      goto L0(r162);
    L7():
      dx59 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx59);
    };
    p45 = prom<V +>{
      x65 = ld x;
      x66 = force? x65;
      checkMissing(x66);
      c42 = `is.object`(x66);
      if c42 then L2() else L3(x66);
    L1(dx62):
      c43 = `is.object`(dx62);
      if c43 then L5() else L6(dx62);
    L2():
      dr48 = tryDispatchBuiltin.1("$", x66);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L4() else L3(dr48);
    L3(x68):
      r164 = `$`(x68, <sym fstatistic>);
      goto L1(r164);
    L0(dx66):
      return dx66;
    L4():
      dx61 = getTryDispatchBuiltinValue(dr48);
      goto L1(dx61);
    L5():
      dr50 = tryDispatchBuiltin.1("[", dx62);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L7() else L6(dr50);
    L6(dx64):
      __7 = ldf `[` in base;
      r165 = dyn __7(dx64, 3);
      goto L0(r165);
    L7():
      dx65 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx65);
    };
    p51 = prom<V +>{
      format_pval = ldf `format.pval`;
      p49 = prom<V +>{
        pf = ldf pf;
        p46 = prom<V +>{
          x69 = ld x;
          x70 = force? x69;
          checkMissing(x70);
          c44 = `is.object`(x70);
          if c44 then L2() else L3(x70);
        L1(dx68):
          c45 = `is.object`(dx68);
          if c45 then L5() else L6(dx68);
        L2():
          dr52 = tryDispatchBuiltin.1("$", x70);
          dc26 = getTryDispatchBuiltinDispatched(dr52);
          if dc26 then L4() else L3(dr52);
        L3(x72):
          r167 = `$`(x72, <sym fstatistic>);
          goto L1(r167);
        L0(dx72):
          return dx72;
        L4():
          dx67 = getTryDispatchBuiltinValue(dr52);
          goto L1(dx67);
        L5():
          dr54 = tryDispatchBuiltin.1("[", dx68);
          dc27 = getTryDispatchBuiltinDispatched(dr54);
          if dc27 then L7() else L6(dr54);
        L6(dx70):
          __8 = ldf `[` in base;
          r168 = dyn __8(dx70, 1);
          goto L0(r168);
        L7():
          dx71 = getTryDispatchBuiltinValue(dr54);
          goto L0(dx71);
        };
        p47 = prom<V +>{
          x73 = ld x;
          x74 = force? x73;
          checkMissing(x74);
          c46 = `is.object`(x74);
          if c46 then L2() else L3(x74);
        L1(dx74):
          c47 = `is.object`(dx74);
          if c47 then L5() else L6(dx74);
        L2():
          dr56 = tryDispatchBuiltin.1("$", x74);
          dc28 = getTryDispatchBuiltinDispatched(dr56);
          if dc28 then L4() else L3(dr56);
        L3(x76):
          r170 = `$`(x76, <sym fstatistic>);
          goto L1(r170);
        L0(dx78):
          return dx78;
        L4():
          dx73 = getTryDispatchBuiltinValue(dr56);
          goto L1(dx73);
        L5():
          dr58 = tryDispatchBuiltin.1("[", dx74);
          dc29 = getTryDispatchBuiltinDispatched(dr58);
          if dc29 then L7() else L6(dr58);
        L6(dx76):
          __9 = ldf `[` in base;
          r171 = dyn __9(dx76, 2);
          goto L0(r171);
        L7():
          dx77 = getTryDispatchBuiltinValue(dr58);
          goto L0(dx77);
        };
        p48 = prom<V +>{
          x77 = ld x;
          x78 = force? x77;
          checkMissing(x78);
          c48 = `is.object`(x78);
          if c48 then L2() else L3(x78);
        L1(dx80):
          c49 = `is.object`(dx80);
          if c49 then L5() else L6(dx80);
        L2():
          dr60 = tryDispatchBuiltin.1("$", x78);
          dc30 = getTryDispatchBuiltinDispatched(dr60);
          if dc30 then L4() else L3(dr60);
        L3(x80):
          r173 = `$`(x80, <sym fstatistic>);
          goto L1(r173);
        L0(dx84):
          return dx84;
        L4():
          dx79 = getTryDispatchBuiltinValue(dr60);
          goto L1(dx79);
        L5():
          dr62 = tryDispatchBuiltin.1("[", dx80);
          dc31 = getTryDispatchBuiltinDispatched(dr62);
          if dc31 then L7() else L6(dr62);
        L6(dx82):
          __10 = ldf `[` in base;
          r174 = dyn __10(dx82, 3);
          goto L0(r174);
        L7():
          dx83 = getTryDispatchBuiltinValue(dr62);
          goto L0(dx83);
        };
        r176 = dyn pf[, , , `lower.tail`](p46, p47, p48, FALSE);
        return r176;
      };
      p50 = prom<V +>{
        digits15 = ld digits;
        digits16 = force? digits15;
        checkMissing(digits16);
        return digits16;
      };
      r179 = dyn format_pval[, digits](p49, p50);
      return r179;
    };
    r181 = dyn cat11(",\tAdjusted R-squared: ", p40, "\nF-statistic:", p43, "on", p44, "and", p45, "DF,  p-value:", p51);
    check L176() else D61();
  L184():
    dx85 = getTryDispatchBuiltinValue(dr64);
    goto L181(dx85);
  L185():
    correl = ld correl;
    check L187() else D65();
  L186():
    r185 = dyn base16(<sym correl>);
    goto L33(r185);
  D41():
    deopt 155 [r103];
  D43():
    deopt 164 [r114];
  D61():
    deopt 244 [r181];
  D65():
    deopt 256 [correl];
  L34():
    goto L42();
  L42():
    cat14 = ldf cat;
    check L216() else D81();
  L137():
    goto L24(r103);
  L139():
    st coefs = r114;
    x37 = ld x;
    check L140() else D44();
  L176():
    cat12 = ldf cat;
    check L177() else D62();
  L187():
    correl1 = force? correl;
    checkMissing(correl1);
    c51 = `==`(correl1, NULL);
    goto L33(c51);
  L188():
    NCOL = ldf NCOL;
    check L189() else D66();
  D44():
    deopt 166 [x37];
  D62():
    deopt 246 [];
  D66():
    deopt 261 [];
  D81():
    deopt 314 [];
  L140():
    x38 = force? x37;
    checkMissing(x38);
    c29 = `is.object`(x38);
    if c29 then L142() else L143(x38);
  L177():
    r182 = dyn cat12("\n");
    check L178() else D63();
  L189():
    p52 = prom<V +>{
      correl2 = ld correl;
      correl3 = force? correl2;
      checkMissing(correl3);
      return correl3;
    };
    r189 = dyn NCOL(p52);
    check L190() else D67();
  L216():
    r219 = dyn cat14("\n");
    check L217() else D82();
  D63():
    deopt 248 [r182];
  D67():
    deopt 263 [r189];
  D82():
    deopt 316 [r219];
  L141(dx33):
    l = ld coefs;
    c30 = `is.object`(l);
    if c30 then L145() else L146(dx33, l);
  L142():
    dr28 = tryDispatchBuiltin.1("$", x38);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L144() else L143(dr28);
  L143(x40):
    r115 = `$`(x40, <sym coefficients>);
    goto L141(r115);
  L178():
    goto L32();
  L190():
    st p = r189;
    p53 = ld p;
    check L191() else D68();
  L217():
    sym19 = ldf invisible;
    base19 = ldf invisible in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L218() else L219();
  D68():
    deopt 265 [p53];
  L25(dx38, dx39):
    st coefs = dx39;
    goto L26();
  L43(r221):
    popenv;
    return r221;
  L144():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L141(dx32);
  L145():
    dr30 = tryDispatchBuiltin.0("[<-", l, dx33);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L147() else L146(dx33, dr30);
  L146(dx35, l2):
    aliased4 = ld aliased;
    check L148() else D45();
  L191():
    p54 = force? p53;
    checkMissing(p54);
    r190 = `>`(p54, 1);
    c53 = `as.logical`(r190);
    if c53 then L192() else L35();
  L218():
    x85 = ld x;
    check L220() else D83();
  L219():
    r220 = dyn base19(<sym x>);
    goto L43(r220);
  D45():
    deopt 170 [dx35, l2, dx33, aliased4];
  D83():
    deopt 319 [x85];
  L35():
    goto L41(NULL);
  L41(r217):
    goto L42();
  L147():
    dx37 = getTryDispatchBuiltinValue(dr30);
    goto L25(dx33, dx37);
  L148():
    aliased5 = force? aliased4;
    checkMissing(aliased5);
    r116 = `!`(aliased5);
    ___ = ldf `[<-` in base;
    r117 = dyn ___(l, r116, <missing>, dx33);
    goto L25(dx35, r117);
  L192():
    cat13 = ldf cat;
    check L193() else D69();
  L220():
    x86 = force? x85;
    checkMissing(x86);
    invisible = ldf invisible in base;
    r222 = dyn invisible(x86);
    check L221() else D84();
  D69():
    deopt 270 [];
  D84():
    deopt 322 [r222];
  L193():
    r191 = dyn cat13("\nCorrelation of Coefficients:\n");
    check L194() else D70();
  L221():
    goto L43(r222);
  D70():
    deopt 272 [r191];
  L194():
    sym17 = ldf `is.logical`;
    base17 = ldf `is.logical` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L195() else L196();
  L36(r193):
    c55 = `as.logical`(r193);
    if c55 then L198() else L37(c55);
  L195():
    symbolic_cor1 = ld `symbolic.cor`;
    check L197() else D71();
  L196():
    r192 = dyn base17(<sym symbolic.cor>);
    goto L36(r192);
  D71():
    deopt 274 [symbolic_cor1];
  L37(c57):
    c61 = `as.logical`(c57);
    if c61 then L201() else L38();
  L197():
    symbolic_cor2 = force? symbolic_cor1;
    checkMissing(symbolic_cor2);
    c54 = `is.logical`(symbolic_cor2);
    goto L36(c54);
  L198():
    symbolic_cor3 = ld `symbolic.cor`;
    check L199() else D72();
  D72():
    deopt 277 [c55, symbolic_cor3];
  L38():
    format1 = ldf format;
    check L205() else D75();
  L39(r198):
    goto L41(r198);
  L199():
    symbolic_cor4 = force? symbolic_cor3;
    checkMissing(symbolic_cor4);
    c58 = `as.logical`(symbolic_cor4);
    c59 = `&&`(c55, c58);
    goto L37(c59);
  L201():
    print2 = ldf print;
    check L202() else D73();
  D73():
    deopt 281 [];
  D75():
    deopt 285 [];
  L202():
    p56 = prom<V +>{
      symnum = ldf symnum;
      p55 = prom<V +>{
        correl4 = ld correl;
        correl5 = force? correl4;
        checkMissing(correl5);
        return correl5;
      };
      r195 = dyn symnum[, `abbr.colnames`](p55, NULL);
      return r195;
    };
    r197 = dyn print2(p56);
    check L203() else D74();
  L205():
    p57 = prom<V +>{
      sym18 = ldf round;
      base18 = ldf round in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r200):
      return r200;
    L1():
      round = ldf round in base;
      r201 = dyn round(<sym correl>, 2.0);
      goto L0(r201);
    L2():
      r199 = dyn base18(<sym correl>, 2.0);
      goto L0(r199);
    };
    p58 = prom<V +>{
      digits17 = ld digits;
      digits18 = force? digits17;
      checkMissing(digits18);
      return digits18;
    };
    r204 = dyn format1[, nsmall, digits](p57, 2.0, p58);
    check L206() else D76();
  D74():
    deopt 283 [r197];
  D76():
    deopt 291 [r204];
  L203():
    goto L39(r197);
  L206():
    st correl = r204;
    l3 = ld correl;
    c62 = `is.object`(l3);
    if c62 then L207() else L208("", l3);
  L40(dx88):
    st correl = dx88;
    print3 = ldf print;
    check L212() else D79();
  L207():
    dr66 = tryDispatchBuiltin.0("[<-", l3, "");
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L209() else L208("", dr66);
  L208(r206, l5):
    lower_tri = ldf `lower.tri`;
    check L210() else D77();
  D77():
    deopt 297 [r206, l5, ""];
  D79():
    deopt 304 [];
  L209():
    dx87 = getTryDispatchBuiltinValue(dr66);
    goto L40(dx87);
  L210():
    p59 = prom<V +>{
      correl6 = ld correl;
      correl7 = force? correl6;
      checkMissing(correl7);
      return correl7;
    };
    r210 = dyn lower_tri(p59);
    check L211() else D78();
  L212():
    p62 = prom<V +>{
      correl8 = ld correl;
      correl9 = force? correl8;
      checkMissing(correl9);
      c63 = `is.object`(correl9);
      if c63 then L1() else L2();
    L0(dx90):
      return dx90;
    L1():
      dr68 = tryDispatchBuiltin.1("[", correl9);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2();
    L2():
      p60 = ld p;
      p61 = force? p60;
      checkMissing(p61);
      r213 = `-`(<missing>, p61);
      __11 = ldf `[` in base;
      r214 = dyn __11(correl9, -1.0, r213, FALSE);
      goto L0(r214);
    L3():
      dx89 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx89);
    };
    r216 = dyn print3[, quote](p62, FALSE);
    check L213() else D80();
  D78():
    deopt 299 [r206, l5, "", r210];
  D80():
    deopt 308 [r216];
  L211():
    r211 = `!`(r210);
    ___1 = ldf `[<-` in base;
    r212 = dyn ___1(l5, "", r211);
    goto L40(r212);
  L213():
    goto L39(r216);
  }
}