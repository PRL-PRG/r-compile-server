fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3586420643;
    st `toLatex.sessionInfo` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3586420643(object, locale, tzone, RNG, `...`) {
  (reg object:*, reg locale:*, reg tzone:*, reg RNG:*, reg ddd:dots) -+> V { var object:*, var locale:*, reg locale_isMissing:L, reg locale_orDefault:*, var tzone:*, reg tzone_isMissing:L, reg tzone_orDefault:*, reg locale1:*, reg locale2:V, reg p:p(V +), var RNG:*, reg RNG_isMissing:L, reg RNG_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg _RNGdefaults:*, reg _RNGdefaults1:V, reg identical:cls, reg r4:V, reg r5:V, reg p1:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg paste0:cls, reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r10:V, reg p2:p(V +), reg object9:*, reg object10:V, reg c3:L, reg object12:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r12:V, reg c4:L, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r13:V, reg p3:p(V +), reg r15:V, reg locale3:*, reg locale4:V, reg c5:L, reg paste1:cls, reg gsub:cls, reg object13:*, reg object14:V, reg c6:L, reg object16:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg r16:V, reg p4:p(V +), reg r18:V, reg p5:p(V +), reg r20:V, reg r21:V, reg locale5:*, reg locale6:V, reg c7:L, reg c9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg c12:L, reg r23:V, reg object17:*, reg object18:V, reg c13:L, reg c15:L, reg object20:V, reg dr12:V, reg dc6:L, reg dx16:V, reg c17:L, reg dx17:V, reg r24:V, reg c18:V, reg r25:V, reg c19:L, reg c20:V, reg c22:L, reg c24:V, reg object21:*, reg object22:V, reg c25:L, reg c27:L, reg object24:V, reg dr14:V, reg dc7:L, reg dx18:V, reg c29:L, reg dx19:V, reg r26:V, reg object25:*, reg object26:V, reg c30:L, reg c32:L, reg dx21:V, reg object28:V, reg dr16:V, reg dc8:L, reg dx23:V, reg c34:L, reg dx24:V, reg dx25:V, reg r27:V, reg r28:V, reg c35:L, reg c36:V, reg c38:L, reg paste2:cls, reg object29:*, reg object30:V, reg c39:L, reg object32:V, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg r29:V, reg p6:p(V +), reg r31:V, reg r32:V, reg tzone1:*, reg tzone2:V, reg c40:L, reg paste3:cls, reg object33:*, reg object34:V, reg c41:L, reg object36:V, reg dr20:V, reg dc10:L, reg dx28:V, reg dx29:V, reg r33:V, reg p7:p(V +), reg r35:V, reg r36:V, reg tzone3:*, reg tzone4:V, reg c42:L, reg paste4:cls, reg object37:*, reg object38:V, reg c43:L, reg object40:V, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg r37:V, reg p8:p(V +), reg r39:V, reg r40:V, reg paste5:cls, reg gsub1:cls, reg object41:*, reg object42:V, reg c44:L, reg object44:V, reg dr24:V, reg dc12:L, reg dx32:V, reg dx33:V, reg r41:V, reg p9:p(V +), reg r43:V, reg p10:p(V +), reg r45:V, reg RNG1:*, reg RNG2:V, reg c45:L, reg paste6:cls, reg object45:*, reg object46:V, reg c46:L, reg object48:V, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg r46:V, reg c47:L, reg dx37:V, reg dr28:V, reg dc14:L, reg dx38:V, reg dx39:V, reg __:cls, reg r47:V, reg p11:p(V +), reg object49:*, reg object50:V, reg c48:L, reg object52:V, reg dr30:V, reg dc15:L, reg dx40:V, reg dx41:V, reg r49:V, reg c49:L, reg dx43:V, reg dr32:V, reg dc16:L, reg dx44:V, reg dx45:V, reg __1:cls, reg r50:V, reg p12:p(V +), reg object53:*, reg object54:V, reg c50:L, reg object56:V, reg dr34:V, reg dc17:L, reg dx46:V, reg dx47:V, reg r52:V, reg c51:L, reg dx49:V, reg dr36:V, reg dc18:L, reg dx50:V, reg dx51:V, reg __2:cls, reg r53:V, reg p13:p(V +), reg r55:V, reg r56:V, reg paste7:cls, reg object57:*, reg object58:V, reg c52:L, reg object60:V, reg dr38:V, reg dc19:L, reg dx52:V, reg dx53:V, reg r57:V, reg p14:p(V +), reg r59:V, reg c53:cls, reg r60:V, reg object61:*, reg object62:V, reg c54:L, reg object64:V, reg dr40:V, reg dc20:L, reg dx54:V, reg dx55:V, reg r61:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r62:V, reg r63:V, reg blas:*, reg blas1:V, reg c55:V, reg c56:L, reg object65:*, reg object66:V, reg c57:L, reg object68:V, reg dr42:V, reg dc21:L, reg dx56:V, reg dx57:V, reg r65:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r66:V, reg r67:V, reg lapack:*, reg lapack1:V, reg c58:V, reg c59:L, reg blas2:*, reg blas3:V, reg lapack2:*, reg lapack3:V, reg r69:V, reg c60:L, reg c62:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r70:V, reg c65:L, reg r71:V, reg blas4:*, reg blas5:V, reg nzchar:cls, reg r72:V, reg c66:L, reg c67:V, reg c69:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r73:V, reg r74:V, reg z:*, reg z1:V, reg paste8:cls, reg blas6:*, reg blas7:V, reg p15:p(V +), reg r76:V, reg c70:cls, reg r77:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r79:V, reg r80:V, reg blas8:*, reg blas9:V, reg nzchar1:cls, reg r81:V, reg c71:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r82:V, reg r83:V, reg z2:*, reg z3:V, reg paste9:cls, reg blas10:*, reg blas11:V, reg p16:p(V +), reg r85:V, reg c72:cls, reg r86:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r88:V, reg r89:V, reg lapack4:*, reg lapack5:V, reg nzchar2:cls, reg r90:V, reg c73:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r91:V, reg r92:V, reg z4:*, reg z5:V, reg paste10:cls, reg lapack6:*, reg lapack7:V, reg p17:p(V +), reg r94:V, reg c74:cls, reg r95:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r96:V, reg r97:V, reg lapack8:*, reg lapack9:V, reg nzchar3:cls, reg r98:V, reg c75:L, reg c77:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r99:V, reg c80:L, reg r100:V, reg object69:*, reg object70:V, reg c81:L, reg c83:L, reg object72:V, reg dr44:V, reg dc22:L, reg dx58:V, reg c85:L, reg dx59:V, reg r101:V, reg nzchar4:cls, reg r102:V, reg c86:L, reg c87:V, reg c89:L, reg c91:V, reg grepl:cls, reg LAver:*, reg LAver1:V, reg p18:p(V +), reg lapack10:*, reg lapack11:V, reg p19:p(V +), reg r105:V, reg r106:V, reg c92:L, reg c93:V, reg c95:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r107:V, reg r108:V, reg z6:*, reg z7:V, reg paste11:cls, reg LAver2:*, reg LAver3:V, reg p20:p(V +), reg r110:V, reg c96:cls, reg r111:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r113:V, reg r114:V, reg z8:*, reg z9:V, reg strwrap:cls, reg paste12:cls, reg paste13:cls, reg sort:cls, reg object73:*, reg object74:V, reg c97:L, reg object76:V, reg dr46:V, reg dc23:L, reg dx60:V, reg dx61:V, reg r115:V, reg p21:p(V +), reg r117:V, reg p22:p(V +), reg r119:V, reg p23:p(V +), reg r121:V, reg p24:p(V +), reg r123:V, reg c98:cls, reg r124:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r125:V, reg r126:V, reg toLatexPDlist:cls, reg object77:*, reg object78:V, reg c99:L, reg object80:V, reg dr48:V, reg dc24:L, reg dx62:V, reg dx63:V, reg r127:V, reg p25:p(V +), reg r129:V, reg length:cls, reg r130:V, reg c100:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r131:V, reg r132:V, reg z10:*, reg z11:V, reg strwrap1:cls, reg paste14:cls, reg o_ver:*, reg o_ver1:V, reg p26:p(V +), reg r134:V, reg p27:p(V +), reg r136:V, reg c101:cls, reg r137:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r139:V, reg r140:V, reg toLatexPDlist1:cls, reg object81:*, reg object82:V, reg c102:L, reg object84:V, reg dr50:V, reg dc25:L, reg dx64:V, reg dx65:V, reg r141:V, reg p28:p(V +), reg r143:V, reg length1:cls, reg r144:V, reg c103:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r145:V, reg r146:V, reg z12:*, reg z13:V, reg strwrap2:cls, reg paste15:cls, reg n_ver:*, reg n_ver1:V, reg p29:p(V +), reg r148:V, reg p30:p(V +), reg r150:V, reg c104:cls, reg r151:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r153:V, reg r154:V, reg z14:*, reg z15:V, reg c105:cls, reg r155:V, reg l:*, reg class__:cls, reg r156:V, reg z16:*, reg z17:V |
    mkenv;
    st object = object;
    locale_isMissing = missing.0(locale);
    if locale_isMissing then L0(TRUE) else L0(locale);
  L0(locale_orDefault):
    st locale = locale_orDefault;
    tzone_isMissing = missing.0(tzone);
    if tzone_isMissing then L1() else L2(tzone);
  L1():
    p = prom<V +>{
      locale1 = ld locale;
      locale2 = force? locale1;
      checkMissing(locale2);
      return locale2;
    };
    goto L2(p);
  L2(tzone_orDefault):
    st tzone = tzone_orDefault;
    RNG_isMissing = missing.0(RNG);
    if RNG_isMissing then L3() else L4(RNG);
  L3():
    p1 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      r5 = `!`(r2);
      return r5;
    L1():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L4() else L5(object2);
    L2():
      r1 = dyn base(<lang `$`(object, RNGkind)>, <sym .RNGdefaults>);
      goto L0(r1);
    L3(dx1):
      _RNGdefaults = ld `.RNGdefaults`;
      _RNGdefaults1 = force? _RNGdefaults;
      checkMissing(_RNGdefaults1);
      identical = ldf identical in base;
      r4 = dyn identical(dx1, _RNGdefaults1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r4);
    L4():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(object4):
      r3 = `$`(object4, <sym RNGkind>);
      goto L3(r3);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    goto L4(p1);
  L4(RNG_orDefault):
    st RNG = RNG_orDefault;
    st `...` = ddd;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L54() else L55();
  L5(r8):
    st z = r8;
    object61 = ld object;
    check L109() else D25();
  L54():
    paste0 = ldf paste0;
    check L56() else D0();
  L55():
    r7 = dyn base1("\\begin{itemize}\\raggedright", <lang paste0("  \\item ", `$`(`$`(object, R.version), version.string), ", \\verb|", `$`(`$`(object, R.version), platform), "|")>, <lang if(locale, paste0("  \\item Locale: \\verb|", gsub(";", "|, \\verb|", `$`(object, locale), fixed=TRUE), "|"))>, <lang if(`&&`(`&&`(locale, `!`(is.null(`$`(object, system.codepage)))), `!=`(`$`(object, system.codepage), `$`(object, codepage))), paste0("  \\item System code page: \\verb|", `$`(object, system.codepage), "|"))>, <lang if(tzone, paste0("  \\item Time zone: \\verb|", `$`(object, tzone), "|"))>, <lang if(tzone, paste0("  \\item TZcode source: \\verb|", `$`(object, tzcode_type), "|"))>, <lang paste0("  \\item Running under: \\verb|", gsub(";", "|, \\verb|", `$`(object, running), fixed=TRUE), "|")>, <lang if(RNG, paste0("  \\item Random number generation:", "  \\item RNG:    \\verb|", `[`(`$`(object, RNGkind), 1.0), "|", "  \\item Normal: \\verb|", `[`(`$`(object, RNGkind), 2.0), "|", "  \\item Sample: \\verb|", `[`(`$`(object, RNGkind), 3.0), "|"))>, <lang paste0("  \\item Matrix products: ", `$`(object, matprod))>);
    goto L5(r7);
  D0():
    deopt 4 [];
  D25():
    deopt 96 [object61];
  L56():
    p2 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c1 = `is.object`(object6);
      if c1 then L1() else L2(object6);
    L0(dx3):
      c2 = `is.object`(dx3);
      if c2 then L5() else L6(dx3);
    L1():
      dr2 = tryDispatchBuiltin.1("$", object6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object8):
      r9 = `$`(object8, <sym R.version>);
      goto L0(r9);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L4(dx7):
      return dx7;
    L5():
      dr4 = tryDispatchBuiltin.1("$", dx3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(dx5):
      r10 = `$`(dx5, <sym version.string>);
      goto L4(r10);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L4(dx6);
    };
    p3 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c3 = `is.object`(object10);
      if c3 then L1() else L2(object10);
    L0(dx9):
      c4 = `is.object`(dx9);
      if c4 then L5() else L6(dx9);
    L1():
      dr6 = tryDispatchBuiltin.1("$", object10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object12):
      r12 = `$`(object12, <sym R.version>);
      goto L0(r12);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    L4(dx13):
      return dx13;
    L5():
      dr8 = tryDispatchBuiltin.1("$", dx9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(dr8);
    L6(dx11):
      r13 = `$`(dx11, <sym platform>);
      goto L4(r13);
    L7():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L4(dx12);
    };
    r15 = dyn paste0("  \\item ", p2, ", \\verb|", p3, "|");
    check L57() else D1();
  L109():
    object62 = force? object61;
    checkMissing(object62);
    c54 = `is.object`(object62);
    if c54 then L111() else L112(object62);
  D1():
    deopt 10 [r15];
  L57():
    locale3 = ld locale;
    check L58() else D2();
  L110(dx55):
    st blas = dx55;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L114() else L115();
  L111():
    dr40 = tryDispatchBuiltin.1("$", object62);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L113() else L112(dr40);
  L112(object64):
    r61 = `$`(object64, <sym BLAS>);
    goto L110(r61);
  D2():
    deopt 11 [locale3];
  L19(r63):
    c56 = `as.logical`(r63);
    if c56 then L117() else L20();
  L58():
    locale4 = force? locale3;
    checkMissing(locale4);
    c5 = `as.logical`(locale4);
    if c5 then L59() else L6();
  L113():
    dx54 = getTryDispatchBuiltinValue(dr40);
    goto L110(dx54);
  L114():
    blas = ld blas;
    check L116() else D26();
  L115():
    r62 = dyn base3(<sym blas>);
    goto L19(r62);
  D26():
    deopt 101 [blas];
  L6():
    goto L7(NULL);
  L7(r21):
    locale5 = ld locale;
    check L63() else D5();
  L20():
    goto L21();
  L21():
    object65 = ld object;
    check L119() else D27();
  L59():
    paste1 = ldf paste0;
    check L60() else D3();
  L116():
    blas1 = force? blas;
    checkMissing(blas1);
    c55 = `==`(blas1, NULL);
    goto L19(c55);
  L117():
    st blas = "";
    goto L21();
  D3():
    deopt 14 [];
  D5():
    deopt 21 [locale5];
  D27():
    deopt 109 [object65];
  L60():
    p5 = prom<V +>{
      gsub = ldf gsub;
      p4 = prom<V +>{
        object13 = ld object;
        object14 = force? object13;
        checkMissing(object14);
        c6 = `is.object`(object14);
        if c6 then L1() else L2(object14);
      L0(dx15):
        return dx15;
      L1():
        dr10 = tryDispatchBuiltin.1("$", object14);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(object16):
        r16 = `$`(object16, <sym locale>);
        goto L0(r16);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx14);
      };
      r18 = dyn gsub[, , , fixed](";", "|, \\verb|", p4, TRUE);
      return r18;
    };
    r20 = dyn paste1("  \\item Locale: \\verb|", p5, "|");
    check L61() else D4();
  L63():
    locale6 = force? locale5;
    checkMissing(locale6);
    c7 = `as.logical`(locale6);
    if c7 then L64() else L8(c7);
  L119():
    object66 = force? object65;
    checkMissing(object66);
    c57 = `is.object`(object66);
    if c57 then L121() else L122(object66);
  D4():
    deopt 18 [r20];
  L8(c9):
    c22 = `as.logical`(c9);
    if c22 then L73() else L10(c22);
  L61():
    goto L7(r20);
  L64():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L65() else L66();
  L120(dx57):
    st lapack = dx57;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L124() else L125();
  L121():
    dr42 = tryDispatchBuiltin.1("$", object66);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L123() else L122(dr42);
  L122(object68):
    r65 = `$`(object68, <sym LAPACK>);
    goto L120(r65);
  L9(c12, r23):
    r25 = `!`(r23);
    c19 = `as.logical`(r25);
    c20 = `&&`(c12, c19);
    goto L8(c20);
  L10(c24):
    c38 = `as.logical`(c24);
    if c38 then L85() else L11();
  L22(r67):
    c59 = `as.logical`(r67);
    if c59 then L127() else L23();
  L65():
    object17 = ld object;
    check L67() else D6();
  L66():
    r22 = dyn base2(<lang `$`(object, system.codepage)>);
    goto L9(c7, r22);
  L73():
    object21 = ld object;
    check L74() else D7();
  L123():
    dx56 = getTryDispatchBuiltinValue(dr42);
    goto L120(dx56);
  L124():
    lapack = ld lapack;
    check L126() else D28();
  L125():
    r66 = dyn base4(<sym lapack>);
    goto L22(r66);
  D6():
    deopt 24 [c7, object17];
  D7():
    deopt 30 [c22, object21];
  D28():
    deopt 114 [lapack];
  L11():
    goto L12(NULL);
  L12(r32):
    tzone1 = ld tzone;
    check L89() else D11();
  L23():
    goto L24();
  L24():
    blas2 = ld blas;
    check L129() else D29();
  L67():
    object18 = force? object17;
    checkMissing(object18);
    c13 = `is.object`(object18);
    if c13 then L69() else L70(c7, object18);
  L74():
    object22 = force? object21;
    checkMissing(object22);
    c25 = `is.object`(object22);
    if c25 then L76() else L77(c22, object22);
  L85():
    paste2 = ldf paste0;
    check L86() else D9();
  L126():
    lapack1 = force? lapack;
    checkMissing(lapack1);
    c58 = `==`(lapack1, NULL);
    goto L22(c58);
  L127():
    st lapack = "";
    goto L24();
  D9():
    deopt 38 [];
  D11():
    deopt 45 [tzone1];
  D29():
    deopt 122 [blas2];
  L68(c17, dx17):
    c18 = `==`(dx17, NULL);
    goto L9(c17, c18);
  L69():
    dr12 = tryDispatchBuiltin.1("$", object18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L71() else L70(c7, dr12);
  L70(c15, object20):
    r24 = `$`(object20, <sym system.codepage>);
    goto L68(c15, r24);
  L75(c29, dx19):
    object25 = ld object;
    check L79() else D8();
  L76():
    dr14 = tryDispatchBuiltin.1("$", object22);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L78() else L77(c22, dr14);
  L77(c27, object24):
    r26 = `$`(object24, <sym system.codepage>);
    goto L75(c27, r26);
  L86():
    p6 = prom<V +>{
      object29 = ld object;
      object30 = force? object29;
      checkMissing(object30);
      c39 = `is.object`(object30);
      if c39 then L1() else L2(object30);
    L0(dx27):
      return dx27;
    L1():
      dr18 = tryDispatchBuiltin.1("$", object30);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(object32):
      r29 = `$`(object32, <sym system.codepage>);
      goto L0(r29);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx26);
    };
    r31 = dyn paste2("  \\item System code page: \\verb|", p6, "|");
    check L87() else D10();
  L89():
    tzone2 = force? tzone1;
    checkMissing(tzone2);
    c40 = `as.logical`(tzone2);
    if c40 then L90() else L13();
  L129():
    blas3 = force? blas2;
    checkMissing(blas3);
    lapack2 = ld lapack;
    check L130() else D30();
  D8():
    deopt 32 [c29, dx19, object25];
  D10():
    deopt 42 [r31];
  D30():
    deopt 123 [blas3, lapack2];
  L13():
    goto L14(NULL);
  L14(r36):
    tzone3 = ld tzone;
    check L94() else D14();
  L71():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L68(c7, dx16);
  L78():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L75(c22, dx18);
  L79():
    object26 = force? object25;
    checkMissing(object26);
    c30 = `is.object`(object26);
    if c30 then L81() else L82(c29, dx19, object26);
  L87():
    goto L12(r31);
  L90():
    paste3 = ldf paste0;
    check L91() else D12();
  L130():
    lapack3 = force? lapack2;
    checkMissing(lapack3);
    r69 = `==`(blas3, lapack3);
    c60 = `as.logical`(r69);
    if c60 then L131() else L25(c60);
  D12():
    deopt 48 [];
  D14():
    deopt 55 [tzone3];
  L25(c62):
    c69 = `as.logical`(c62);
    if c69 then L137() else L27();
  L80(c34, dx24, dx25):
    r28 = `!=`(dx24, dx25);
    c35 = `as.logical`(r28);
    c36 = `&&`(c34, c35);
    goto L10(c36);
  L81():
    dr16 = tryDispatchBuiltin.1("$", object26);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L83() else L82(c29, dx19, dr16);
  L82(c32, dx21, object28):
    r27 = `$`(object28, <sym codepage>);
    goto L80(c32, dx21, r27);
  L91():
    p7 = prom<V +>{
      object33 = ld object;
      object34 = force? object33;
      checkMissing(object34);
      c41 = `is.object`(object34);
      if c41 then L1() else L2(object34);
    L0(dx29):
      return dx29;
    L1():
      dr20 = tryDispatchBuiltin.1("$", object34);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(object36):
      r33 = `$`(object36, <sym tzone>);
      goto L0(r33);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx28);
    };
    r35 = dyn paste3("  \\item Time zone: \\verb|", p7, "|");
    check L92() else D13();
  L94():
    tzone4 = force? tzone3;
    checkMissing(tzone4);
    c42 = `as.logical`(tzone4);
    if c42 then L95() else L15();
  L131():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L132() else L133();
  D13():
    deopt 52 [r35];
  L15():
    goto L16(NULL);
  L16(r40):
    paste5 = ldf paste0;
    check L99() else D17();
  L26(c65, r71):
    c66 = `as.logical`(r71);
    c67 = `&&`(c65, c66);
    goto L25(c67);
  L27():
    sym7 = ldf nzchar;
    base7 = ldf nzchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L145() else L146();
  L29():
    sym11 = ldf nzchar;
    base11 = ldf nzchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L169() else L170();
  L83():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L80(c29, dx19, dx23);
  L92():
    goto L14(r35);
  L95():
    paste4 = ldf paste0;
    check L96() else D15();
  L132():
    blas4 = ld blas;
    check L134() else D31();
  L133():
    r70 = dyn base5(<sym blas>);
    goto L26(c60, r70);
  L137():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L138() else L139();
  D15():
    deopt 58 [];
  D17():
    deopt 66 [];
  D31():
    deopt 128 [c60, blas4];
  L28(r74):
    st z = r74;
    goto L29();
  L30(r80):
    c71 = `as.logical`(r80);
    if c71 then L149() else L31();
  L37(r97):
    c75 = `as.logical`(r97);
    if c75 then L173() else L38(c75);
  L96():
    p8 = prom<V +>{
      object37 = ld object;
      object38 = force? object37;
      checkMissing(object38);
      c43 = `is.object`(object38);
      if c43 then L1() else L2(object38);
    L0(dx31):
      return dx31;
    L1():
      dr22 = tryDispatchBuiltin.1("$", object38);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(object40):
      r37 = `$`(object40, <sym tzcode_type>);
      goto L0(r37);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx30);
    };
    r39 = dyn paste4("  \\item TZcode source: \\verb|", p8, "|");
    check L97() else D16();
  L99():
    p10 = prom<V +>{
      gsub1 = ldf gsub;
      p9 = prom<V +>{
        object41 = ld object;
        object42 = force? object41;
        checkMissing(object42);
        c44 = `is.object`(object42);
        if c44 then L1() else L2(object42);
      L0(dx33):
        return dx33;
      L1():
        dr24 = tryDispatchBuiltin.1("$", object42);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L3() else L2(dr24);
      L2(object44):
        r41 = `$`(object44, <sym running>);
        goto L0(r41);
      L3():
        dx32 = getTryDispatchBuiltinValue(dr24);
        goto L0(dx32);
      };
      r43 = dyn gsub1[, , , fixed](";", "|, \\verb|", p9, TRUE);
      return r43;
    };
    r45 = dyn paste5("  \\item Running under: \\verb|", p10, "|");
    check L100() else D18();
  L134():
    blas5 = force? blas4;
    checkMissing(blas5);
    nzchar = ldf nzchar in base;
    r72 = dyn nzchar(blas5);
    check L135() else D32();
  L138():
    z = ld z;
    check L140() else D33();
  L139():
    r73 = dyn base6(<sym z>, <lang paste0("  \\item BLAS/LAPACK: \\verb|", blas, "|")>);
    goto L28(r73);
  L145():
    blas8 = ld blas;
    check L147() else D37();
  L146():
    r79 = dyn base7(<sym blas>);
    goto L30(r79);
  L169():
    lapack8 = ld lapack;
    check L171() else D49();
  L170():
    r96 = dyn base11(<sym lapack>);
    goto L37(r96);
  D16():
    deopt 62 [r39];
  D18():
    deopt 70 [r45];
  D32():
    deopt 131 [c60, r72];
  D33():
    deopt 135 [z];
  D37():
    deopt 148 [blas8];
  D49():
    deopt 190 [lapack8];
  L31():
    goto L33();
  L33():
    sym9 = ldf nzchar;
    base9 = ldf nzchar in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L157() else L158();
  L38(c77):
    c89 = `as.logical`(c77);
    if c89 then L183() else L40(c89);
  L97():
    goto L16(r39);
  L100():
    RNG1 = ld RNG;
    check L101() else D19();
  L135():
    goto L26(c60, r72);
  L140():
    z1 = force? z;
    checkMissing(z1);
    paste8 = ldf paste0;
    check L141() else D34();
  L147():
    blas9 = force? blas8;
    checkMissing(blas9);
    nzchar1 = ldf nzchar in base;
    r81 = dyn nzchar1(blas9);
    check L148() else D38();
  L149():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L150() else L151();
  L171():
    lapack9 = force? lapack8;
    checkMissing(lapack9);
    nzchar3 = ldf nzchar in base;
    r98 = dyn nzchar3(lapack9);
    check L172() else D50();
  L173():
    sym12 = ldf nzchar;
    base12 = ldf nzchar in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L174() else L175();
  D19():
    deopt 71 [RNG1];
  D34():
    deopt 138 [];
  D38():
    deopt 151 [r81];
  D50():
    deopt 193 [r98];
  L32(r83):
    st z = r83;
    goto L33();
  L34(r89):
    c73 = `as.logical`(r89);
    if c73 then L161() else L35();
  L39(c80, r100):
    c86 = `as.logical`(r100);
    c87 = `&&`(c80, c86);
    goto L38(c87);
  L40(c91):
    c95 = `as.logical`(c91);
    if c95 then L187() else L41();
  L101():
    RNG2 = force? RNG1;
    checkMissing(RNG2);
    c45 = `as.logical`(RNG2);
    if c45 then L102() else L17();
  L141():
    p15 = prom<V +>{
      blas6 = ld blas;
      blas7 = force? blas6;
      checkMissing(blas7);
      return blas7;
    };
    r76 = dyn paste8("  \\item BLAS/LAPACK: \\verb|", p15, "|");
    check L142() else D35();
  L148():
    goto L30(r81);
  L150():
    z2 = ld z;
    check L152() else D39();
  L151():
    r82 = dyn base8(<sym z>, <lang paste0("  \\item BLAS:   \\verb|", blas, "|")>);
    goto L32(r82);
  L157():
    lapack4 = ld lapack;
    check L159() else D43();
  L158():
    r88 = dyn base9(<sym lapack>);
    goto L34(r88);
  L172():
    goto L37(r98);
  L174():
    object69 = ld object;
    check L176() else D51();
  L175():
    r99 = dyn base12(<lang `<-`(LAver, `$`(object, LA_version))>);
    goto L39(c75, r99);
  L183():
    grepl = ldf grepl;
    check L184() else D53();
  D35():
    deopt 142 [r76];
  D39():
    deopt 154 [z2];
  D43():
    deopt 169 [lapack4];
  D51():
    deopt 196 [c75, object69];
  D53():
    deopt 204 [c89];
  L17():
    goto L18(NULL);
  L18(r56):
    paste7 = ldf paste0;
    check L106() else D22();
  L35():
    goto L29();
  L41():
    goto L43();
  L43():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L195() else L196();
  L102():
    paste6 = ldf paste0;
    check L103() else D20();
  L142():
    c70 = ldf c in base;
    r77 = dyn c70(z1, r76);
    check L143() else D36();
  L152():
    z3 = force? z2;
    checkMissing(z3);
    paste9 = ldf paste0;
    check L153() else D40();
  L159():
    lapack5 = force? lapack4;
    checkMissing(lapack5);
    nzchar2 = ldf nzchar in base;
    r90 = dyn nzchar2(lapack5);
    check L160() else D44();
  L161():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L162() else L163();
  L176():
    object70 = force? object69;
    checkMissing(object70);
    c81 = `is.object`(object70);
    if c81 then L178() else L179(c75, object70);
  L184():
    p18 = prom<V +>{
      LAver = ld LAver;
      LAver1 = force? LAver;
      checkMissing(LAver1);
      return LAver1;
    };
    p19 = prom<V +>{
      lapack10 = ld lapack;
      lapack11 = force? lapack10;
      checkMissing(lapack11);
      return lapack11;
    };
    r105 = dyn grepl[, , fixed](p18, p19, TRUE);
    check L185() else D54();
  L187():
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L188() else L189();
  D20():
    deopt 74 [];
  D22():
    deopt 89 [];
  D36():
    deopt 144 [r77];
  D40():
    deopt 157 [];
  D44():
    deopt 172 [r90];
  D54():
    deopt 209 [c89, r105];
  L36(r92):
    st z = r92;
    goto L29();
  L42(r108):
    st z = r108;
    goto L43();
  L44(r114):
    st z = r114;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L201() else L202();
  L103():
    p11 = prom<V +>{
      object45 = ld object;
      object46 = force? object45;
      checkMissing(object46);
      c46 = `is.object`(object46);
      if c46 then L2() else L3(object46);
    L1(dx35):
      c47 = `is.object`(dx35);
      if c47 then L5() else L6(dx35);
    L2():
      dr26 = tryDispatchBuiltin.1("$", object46);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L4() else L3(dr26);
    L3(object48):
      r46 = `$`(object48, <sym RNGkind>);
      goto L1(r46);
    L0(dx39):
      return dx39;
    L4():
      dx34 = getTryDispatchBuiltinValue(dr26);
      goto L1(dx34);
    L5():
      dr28 = tryDispatchBuiltin.1("[", dx35);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L7() else L6(dr28);
    L6(dx37):
      __ = ldf `[` in base;
      r47 = dyn __(dx37, 1.0);
      goto L0(r47);
    L7():
      dx38 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx38);
    };
    p12 = prom<V +>{
      object49 = ld object;
      object50 = force? object49;
      checkMissing(object50);
      c48 = `is.object`(object50);
      if c48 then L2() else L3(object50);
    L1(dx41):
      c49 = `is.object`(dx41);
      if c49 then L5() else L6(dx41);
    L2():
      dr30 = tryDispatchBuiltin.1("$", object50);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L4() else L3(dr30);
    L3(object52):
      r49 = `$`(object52, <sym RNGkind>);
      goto L1(r49);
    L0(dx45):
      return dx45;
    L4():
      dx40 = getTryDispatchBuiltinValue(dr30);
      goto L1(dx40);
    L5():
      dr32 = tryDispatchBuiltin.1("[", dx41);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L7() else L6(dr32);
    L6(dx43):
      __1 = ldf `[` in base;
      r50 = dyn __1(dx43, 2.0);
      goto L0(r50);
    L7():
      dx44 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx44);
    };
    p13 = prom<V +>{
      object53 = ld object;
      object54 = force? object53;
      checkMissing(object54);
      c50 = `is.object`(object54);
      if c50 then L2() else L3(object54);
    L1(dx47):
      c51 = `is.object`(dx47);
      if c51 then L5() else L6(dx47);
    L2():
      dr34 = tryDispatchBuiltin.1("$", object54);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L4() else L3(dr34);
    L3(object56):
      r52 = `$`(object56, <sym RNGkind>);
      goto L1(r52);
    L0(dx51):
      return dx51;
    L4():
      dx46 = getTryDispatchBuiltinValue(dr34);
      goto L1(dx46);
    L5():
      dr36 = tryDispatchBuiltin.1("[", dx47);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L7() else L6(dr36);
    L6(dx49):
      __2 = ldf `[` in base;
      r53 = dyn __2(dx49, 3.0);
      goto L0(r53);
    L7():
      dx50 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx50);
    };
    r55 = dyn paste6("  \\item Random number generation:", "  \\item RNG:    \\verb|", p11, "|", "  \\item Normal: \\verb|", p12, "|", "  \\item Sample: \\verb|", p13, "|");
    check L104() else D21();
  L106():
    p14 = prom<V +>{
      object57 = ld object;
      object58 = force? object57;
      checkMissing(object58);
      c52 = `is.object`(object58);
      if c52 then L1() else L2(object58);
    L0(dx53):
      return dx53;
    L1():
      dr38 = tryDispatchBuiltin.1("$", object58);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(object60):
      r57 = `$`(object60, <sym matprod>);
      goto L0(r57);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx52);
    };
    r59 = dyn paste7("  \\item Matrix products: ", p14);
    check L107() else D23();
  L143():
    goto L28(r77);
  L153():
    p16 = prom<V +>{
      blas10 = ld blas;
      blas11 = force? blas10;
      checkMissing(blas11);
      return blas11;
    };
    r85 = dyn paste9("  \\item BLAS:   \\verb|", p16, "|");
    check L154() else D41();
  L160():
    goto L34(r90);
  L162():
    z4 = ld z;
    check L164() else D45();
  L163():
    r91 = dyn base10(<sym z>, <lang paste0("  \\item LAPACK: \\verb|", lapack, "|")>);
    goto L36(r91);
  L177(c85, dx59):
    st LAver = dx59;
    nzchar4 = ldf nzchar in base;
    r102 = dyn nzchar4(dx59);
    check L181() else D52();
  L178():
    dr44 = tryDispatchBuiltin.1("$", object70);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L180() else L179(c75, dr44);
  L179(c83, object72):
    r101 = `$`(object72, <sym LA_version>);
    goto L177(c83, r101);
  L185():
    r106 = `!`(r105);
    c92 = `as.logical`(r106);
    c93 = `&&`(c89, c92);
    goto L40(c93);
  L188():
    z6 = ld z;
    check L190() else D55();
  L189():
    r107 = dyn base13(<sym z>, <lang paste0("; \\quad\\ LAPACK version", LAver)>);
    goto L42(r107);
  L195():
    z8 = ld z;
    check L197() else D59();
  L196():
    r113 = dyn base14(<sym z>, <lang strwrap(paste("\\item Base packages: ", paste(sort(`$`(object, basePkgs)), collapse=", ")), indent=2.0, exdent=4.0)>);
    goto L44(r113);
  D21():
    deopt 85 [r55];
  D23():
    deopt 92 [r59];
  D41():
    deopt 161 [r85];
  D45():
    deopt 175 [z4];
  D52():
    deopt 201 [c85, r102];
  D55():
    deopt 214 [z6];
  D59():
    deopt 228 [z8];
  L45(r126):
    c100 = `as.logical`(r126);
    if c100 then L206() else L46();
  L104():
    goto L18(r55);
  L107():
    c53 = ldf c in base;
    r60 = dyn c53("\\begin{itemize}\\raggedright", r15, r21, r32, r36, r40, r45, r56, r59);
    check L108() else D24();
  L154():
    c72 = ldf c in base;
    r86 = dyn c72(z3, r85);
    check L155() else D42();
  L164():
    z5 = force? z4;
    checkMissing(z5);
    paste10 = ldf paste0;
    check L165() else D46();
  L180():
    dx58 = getTryDispatchBuiltinValue(dr44);
    goto L177(c75, dx58);
  L181():
    goto L39(c85, r102);
  L190():
    z7 = force? z6;
    checkMissing(z7);
    paste11 = ldf paste0;
    check L191() else D56();
  L197():
    z9 = force? z8;
    checkMissing(z9);
    strwrap = ldf strwrap;
    check L198() else D60();
  L201():
    toLatexPDlist = ldf toLatexPDlist;
    check L203() else D63();
  L202():
    r125 = dyn base15(<lang `<-`(o.ver, toLatexPDlist(`$`(object, otherPkg)))>);
    goto L45(r125);
  D24():
    deopt 94 [r60];
  D42():
    deopt 163 [r86];
  D46():
    deopt 178 [];
  D56():
    deopt 217 [];
  D60():
    deopt 231 [];
  D63():
    deopt 244 [];
  L46():
    goto L48();
  L48():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L214() else L215();
  L108():
    goto L5(r60);
  L155():
    goto L32(r86);
  L165():
    p17 = prom<V +>{
      lapack6 = ld lapack;
      lapack7 = force? lapack6;
      checkMissing(lapack7);
      return lapack7;
    };
    r94 = dyn paste10("  \\item LAPACK: \\verb|", p17, "|");
    check L166() else D47();
  L191():
    p20 = prom<V +>{
      LAver2 = ld LAver;
      LAver3 = force? LAver2;
      checkMissing(LAver3);
      return LAver3;
    };
    r110 = dyn paste11("; \\quad\\ LAPACK version", p20);
    check L192() else D57();
  L198():
    p24 = prom<V +>{
      paste12 = ldf paste;
      p23 = prom<V +>{
        paste13 = ldf paste;
        p22 = prom<V +>{
          sort = ldf sort;
          p21 = prom<V +>{
            object73 = ld object;
            object74 = force? object73;
            checkMissing(object74);
            c97 = `is.object`(object74);
            if c97 then L1() else L2(object74);
          L0(dx61):
            return dx61;
          L1():
            dr46 = tryDispatchBuiltin.1("$", object74);
            dc23 = getTryDispatchBuiltinDispatched(dr46);
            if dc23 then L3() else L2(dr46);
          L2(object76):
            r115 = `$`(object76, <sym basePkgs>);
            goto L0(r115);
          L3():
            dx60 = getTryDispatchBuiltinValue(dr46);
            goto L0(dx60);
          };
          r117 = dyn sort(p21);
          return r117;
        };
        r119 = dyn paste13[, collapse](p22, ", ");
        return r119;
      };
      r121 = dyn paste12("\\item Base packages: ", p23);
      return r121;
    };
    r123 = dyn strwrap[, indent, exdent](p24, 2.0, 4.0);
    check L199() else D61();
  L203():
    p25 = prom<V +>{
      object77 = ld object;
      object78 = force? object77;
      checkMissing(object78);
      c99 = `is.object`(object78);
      if c99 then L1() else L2(object78);
    L0(dx63):
      return dx63;
    L1():
      dr48 = tryDispatchBuiltin.1("$", object78);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(object80):
      r127 = `$`(object80, <sym otherPkg>);
      goto L0(r127);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx62);
    };
    r129 = dyn toLatexPDlist(p25);
    check L204() else D64();
  L206():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L207() else L208();
  D47():
    deopt 182 [r94];
  D57():
    deopt 220 [r110];
  D61():
    deopt 237 [r123];
  D64():
    deopt 246 [r129];
  L47(r132):
    st z = r132;
    goto L48();
  L49(r140):
    c103 = `as.logical`(r140);
    if c103 then L219() else L50();
  L166():
    c74 = ldf c in base;
    r95 = dyn c74(z5, r94);
    check L167() else D48();
  L192():
    c96 = ldf c in base;
    r111 = dyn c96(z7, r110);
    check L193() else D58();
  L199():
    c98 = ldf c in base;
    r124 = dyn c98(z9, r123);
    check L200() else D62();
  L204():
    st `o.ver` = r129;
    length = ldf length in base;
    r130 = dyn length(r129);
    check L205() else D65();
  L207():
    z10 = ld z;
    check L209() else D66();
  L208():
    r131 = dyn base16(<sym z>, <lang strwrap(paste("  \\item Other packages: ", o.ver), indent=2.0, exdent=4.0)>);
    goto L47(r131);
  L214():
    toLatexPDlist1 = ldf toLatexPDlist;
    check L216() else D70();
  L215():
    r139 = dyn base17(<lang `<-`(n.ver, toLatexPDlist(`$`(object, loadedOnly)))>);
    goto L49(r139);
  D48():
    deopt 184 [r95];
  D58():
    deopt 222 [r111];
  D62():
    deopt 239 [r124];
  D65():
    deopt 249 [r130];
  D66():
    deopt 252 [z10];
  D70():
    deopt 270 [];
  L50():
    goto L52();
  L52():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L227() else L228();
  L167():
    goto L36(r95);
  L193():
    goto L42(r111);
  L200():
    goto L44(r124);
  L205():
    goto L45(r130);
  L209():
    z11 = force? z10;
    checkMissing(z11);
    strwrap1 = ldf strwrap;
    check L210() else D67();
  L216():
    p28 = prom<V +>{
      object81 = ld object;
      object82 = force? object81;
      checkMissing(object82);
      c102 = `is.object`(object82);
      if c102 then L1() else L2(object82);
    L0(dx65):
      return dx65;
    L1():
      dr50 = tryDispatchBuiltin.1("$", object82);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(object84):
      r141 = `$`(object84, <sym loadedOnly>);
      goto L0(r141);
    L3():
      dx64 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx64);
    };
    r143 = dyn toLatexPDlist1(p28);
    check L217() else D71();
  L219():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L220() else L221();
  D67():
    deopt 255 [];
  D71():
    deopt 272 [r143];
  L51(r146):
    st z = r146;
    goto L52();
  L53(r154):
    st z = r154;
    l = ld z;
    class__ = ldf `class<-`;
    check L231() else D79();
  L210():
    p27 = prom<V +>{
      paste14 = ldf paste;
      p26 = prom<V +>{
        o_ver = ld `o.ver`;
        o_ver1 = force? o_ver;
        checkMissing(o_ver1);
        return o_ver1;
      };
      r134 = dyn paste14("  \\item Other packages: ", p26);
      return r134;
    };
    r136 = dyn strwrap1[, indent, exdent](p27, 2.0, 4.0);
    check L211() else D68();
  L217():
    st `n.ver` = r143;
    length1 = ldf length in base;
    r144 = dyn length1(r143);
    check L218() else D72();
  L220():
    z12 = ld z;
    check L222() else D73();
  L221():
    r145 = dyn base18(<sym z>, <lang strwrap(paste("  \\item Loaded via a namespace (and not attached): ", n.ver), indent=2.0, exdent=4.0)>);
    goto L51(r145);
  L227():
    z14 = ld z;
    check L229() else D77();
  L228():
    r153 = dyn base19(<sym z>, "\\end{itemize}");
    goto L53(r153);
  D68():
    deopt 261 [r136];
  D72():
    deopt 275 [r144];
  D73():
    deopt 278 [z12];
  D77():
    deopt 295 [z14];
  D79():
    deopt 304 ["Latex", l, "Latex"];
  L211():
    c101 = ldf c in base;
    r137 = dyn c101(z11, r136);
    check L212() else D69();
  L218():
    goto L49(r144);
  L222():
    z13 = force? z12;
    checkMissing(z13);
    strwrap2 = ldf strwrap;
    check L223() else D74();
  L229():
    z15 = force? z14;
    checkMissing(z15);
    c105 = ldf c in base;
    r155 = dyn c105(z15, "\\end{itemize}");
    check L230() else D78();
  L231():
    r156 = dyn class__(l, NULL, "Latex");
    check L232() else D80();
  D69():
    deopt 263 [r137];
  D74():
    deopt 281 [];
  D78():
    deopt 299 [r155];
  D80():
    deopt 306 ["Latex", r156];
  L212():
    goto L47(r137);
  L223():
    p30 = prom<V +>{
      paste15 = ldf paste;
      p29 = prom<V +>{
        n_ver = ld `n.ver`;
        n_ver1 = force? n_ver;
        checkMissing(n_ver1);
        return n_ver1;
      };
      r148 = dyn paste15("  \\item Loaded via a namespace (and not attached): ", p29);
      return r148;
    };
    r150 = dyn strwrap2[, indent, exdent](p30, 2.0, 4.0);
    check L224() else D75();
  L230():
    goto L53(r155);
  L232():
    st z = r156;
    z16 = ld z;
    check L233() else D81();
  D75():
    deopt 287 [r150];
  D81():
    deopt 308 [z16];
  L224():
    c104 = ldf c in base;
    r151 = dyn c104(z13, r150);
    check L225() else D76();
  L233():
    z17 = force? z16;
    checkMissing(z17);
    popenv;
    return z17;
  D76():
    deopt 289 [r151];
  L225():
    goto L51(r151);
  }
}