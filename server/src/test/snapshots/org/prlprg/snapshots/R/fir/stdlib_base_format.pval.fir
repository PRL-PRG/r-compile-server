fun main() {
  () -+> V { reg r:cls, reg format_pval:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg __:cls, reg r3:V, reg r4:cls, reg r5:V, reg c:cls, reg r6:V, reg p:p(V +), reg r8:V, reg format_pval1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg c1:cls, reg r11:V, reg p1:p(V +), reg r13:V |
    mkenv;
    r = clos inner4169636932;
    st `format.pval` = r;
    format_pval = ldf `format.pval`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      __ = ldf `::`;
      r3 = dyn __("stats", "runif");
      checkFun.0(r3);
      r4 = r3 as cls;
      r5 = dyn r4(5.0);
      c = ldf c in base;
      r6 = dyn c(r5, 1.9275814160560206E-50, NA_LGL);
      goto L0(r6);
    L2():
      r1 = dyn base(<lang `::`(stats, runif)(5.0)>, <lang `^`(pi, `-`(100.0))>, NA_LGL);
      goto L0(r1);
    };
    r8 = dyn format_pval(p);
    check L1() else D1();
  D1():
    deopt 6 [r8];
  L1():
    format_pval1 = ldf `format.pval`;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      c1 = ldf c in base;
      r11 = dyn c1(0.1, 1.0E-4, 1.0E-27);
      goto L0(r11);
    L2():
      r9 = dyn base1(0.1, 1.0E-4, 1.0E-27);
      goto L0(r9);
    };
    r13 = dyn format_pval1(p1);
    check L3() else D3();
  D3():
    deopt 10 [r13];
  L3():
    popenv;
    return r13;
  }
}
fun inner4169636932(pv, digits, eps, `na.form`, `...`) {
  (reg pv:*, reg digits:*, reg eps:*, reg na_form:*, reg ddd:dots) -+> V { var pv:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var eps:*, reg eps_isMissing:L, reg eps_orDefault:*, reg _Machine:*, reg _Machine1:V, reg c:L, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), var `na.form`:*, reg na_form_isMissing:L, reg na_form_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg pv1:*, reg pv2:V, reg is_na:cls, reg r12:V, reg any:cls, reg r13:V, reg c1:L, reg pv3:*, reg pv4:V, reg c2:L, reg pv6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ina:*, reg ina1:V, reg r14:V, reg __:cls, reg r15:V, reg character:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg pv7:*, reg pv8:V, reg eps1:*, reg eps2:V, reg r18:V, reg length:cls, reg r19:V, reg p2:p(V +), reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg is0:*, reg is1:V, reg r24:V, reg any1:cls, reg r25:V, reg c3:L, reg pv9:*, reg pv10:V, reg c4:L, reg pv12:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg is2:*, reg is3:V, reg r26:V, reg __1:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg ifelse:cls, reg pv13:*, reg pv14:V, reg r32:V, reg p3:p(V +), reg pv15:*, reg pv16:V, reg p4:p(V +), reg r35:V, reg log10:cls, reg r36:V, reg r37:V, reg expo:*, reg expo1:V, reg r38:V, reg expo2:*, reg expo3:V, reg r39:V, reg digits1:*, reg digits2:V, reg r40:V, reg r41:V, reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg fixp:*, reg fixp1:V, reg any2:cls, reg r45:V, reg c5:L, reg format:cls, reg pv17:*, reg pv18:V, reg c6:L, reg pv20:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg fixp2:*, reg fixp3:V, reg __2:cls, reg r46:V, reg p5:p(V +), reg digits3:*, reg digits4:V, reg p6:p(V +), reg ddd1:dots?, reg r49:V, reg l:*, reg c7:L, reg r51:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx9:V, reg r53:V, reg dx10:V, reg fixp4:*, reg fixp5:V, reg ___:cls, reg r54:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg r57:V, reg fixp6:*, reg fixp7:V, reg r58:V, reg any3:cls, reg r59:V, reg c8:L, reg format1:cls, reg pv21:*, reg pv22:V, reg c9:L, reg pv24:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg fixp8:*, reg fixp9:V, reg r60:V, reg __3:cls, reg r61:V, reg p7:p(V +), reg digits5:*, reg digits6:V, reg p8:p(V +), reg ddd2:dots?, reg r64:V, reg l3:*, reg c10:L, reg r66:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx13:V, reg r68:V, reg dx14:V, reg fixp10:*, reg fixp11:V, reg r69:V, reg ___1:cls, reg r70:V, reg rr:*, reg rr1:V, reg l6:*, reg c11:L, reg rr3:V, reg l8:*, reg dr14:V, reg dc7:L, reg dx15:V, reg rr5:V, reg dx16:V, reg is4:*, reg is5:V, reg r72:V, reg ___2:cls, reg r73:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r74:V, reg r75:V, reg is6:*, reg is7:V, reg any4:cls, reg r76:V, reg c12:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r77:V, reg r78:V, reg digits7:*, reg digits8:V, reg r79:V, reg max1:cls, reg r80:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r81:V, reg r82:V, reg is8:*, reg is9:V, reg r83:V, reg any5:cls, reg r84:V, reg c13:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r85:V, reg r86:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r87:V, reg r88:V, reg rr7:*, reg rr8:V, reg nchar:cls, reg r89:V, reg max2:cls, reg r90:V, reg digits9:*, reg digits10:V, reg r91:V, reg c14:L, reg c16:V, reg digits11:*, reg digits12:V, reg r92:V, reg nc:*, reg nc1:V, reg r93:V, reg c17:L, reg c18:V, reg c20:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r94:V, reg r95:V, reg nc2:*, reg nc3:V, reg r96:V, reg max3:cls, reg r97:V, reg digits13:*, reg digits14:V, reg r99:V, reg c21:L, reg c23:V, reg nc4:*, reg nc5:V, reg r100:V, reg c24:L, reg c25:V, reg c27:L, reg r101:S, reg digits15:*, reg digits16:V, reg r103:V, reg c28:L, reg r104:S, reg paste:cls, reg format2:cls, reg eps3:*, reg eps4:V, reg p9:p(V +), reg digits17:*, reg digits18:V, reg p10:p(V +), reg ddd3:dots?, reg r107:V, reg p11:p(V +), reg sep:*, reg sep1:V, reg p12:p(V +), reg r110:V, reg l9:*, reg c29:L, reg r112:V, reg l11:*, reg dr16:V, reg dc8:L, reg dx17:V, reg r114:V, reg dx18:V, reg is10:*, reg is11:V, reg ___3:cls, reg r115:V, reg has_na:*, reg has_na1:V, reg c30:L, reg r117:*, reg r118:V, reg character1:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r119:V, reg r120:V, reg ina2:*, reg ina3:V, reg length1:cls, reg r121:V, reg p13:p(V +), reg r123:V, reg rok:*, reg rok1:V, reg l12:*, reg c31:L, reg rok3:V, reg l14:*, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg ina4:*, reg ina5:V, reg r124:V, reg ___4:cls, reg r125:V, reg na_form1:*, reg na_form2:V, reg l15:*, reg c32:L, reg na_form4:V, reg l17:*, reg dr20:V, reg dc10:L, reg dx21:V, reg na_form6:V, reg dx22:V, reg ina6:*, reg ina7:V, reg ___5:cls, reg r126:V, reg r127:*, reg r128:V |
    mkenv;
    st pv = pv;
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
      r3 = `-`(r2, 2);
      max = ldf max in base;
      r4 = dyn max(1, r3);
      goto L0(r4);
    L2():
      r = dyn base(1, <lang `-`(getOption("digits"), 2)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    eps_isMissing = missing.0(eps);
    if eps_isMissing then L2() else L3(eps);
  L2():
    p1 = prom<V +>{
      _Machine = ld `.Machine`;
      _Machine1 = force? _Machine;
      checkMissing(_Machine1);
      c = `is.object`(_Machine1);
      if c then L1() else L2(_Machine1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Machine1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Machine3):
      r6 = `$`(_Machine3, <sym double.eps>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L3(p1);
  L3(eps_orDefault):
    st eps = eps_orDefault;
    na_form_isMissing = missing.0(na_form);
    if na_form_isMissing then L4("NA") else L4(na_form);
  L4(na_form_orDefault):
    st `na.form` = na_form_orDefault;
    st `...` = ddd;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L48() else L49();
  L5(r9):
    st `has.na` = r9;
    c1 = `as.logical`(r9);
    if c1 then L55() else L7();
  L48():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L49():
    r8 = dyn base1(<lang `<-`(ina, is.na(pv))>);
    goto L5(r8);
  L6(r11):
    st ina = r11;
    any = ldf any in base;
    r13 = dyn any(r11);
    check L54() else D2();
  L7():
    goto L9();
  L9():
    character = ldf character;
    check L62() else D5();
  L50():
    pv1 = ld pv;
    check L52() else D0();
  L51():
    r10 = dyn base2(<sym pv>);
    goto L6(r10);
  L55():
    pv3 = ld pv;
    check L56() else D3();
  D0():
    deopt 4 [pv1];
  D2():
    deopt 10 [r13];
  D3():
    deopt 12 [pv3];
  D5():
    deopt 22 [];
  L52():
    pv2 = force? pv1;
    checkMissing(pv2);
    is_na = ldf `is.na` in base;
    r12 = dyn is_na(pv2);
    check L53() else D1();
  L54():
    goto L5(r13);
  L56():
    pv4 = force? pv3;
    checkMissing(pv4);
    c2 = `is.object`(pv4);
    if c2 then L57() else L58(pv4);
  L62():
    p2 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      pv7 = ld pv;
      pv8 = force? pv7;
      checkMissing(pv8);
      eps1 = ld eps;
      eps2 = force? eps1;
      checkMissing(eps2);
      r18 = `<`(pv8, eps2);
      st is0 = r18;
      length = ldf length in base;
      r19 = dyn length(r18);
      goto L0(r19);
    L2():
      r16 = dyn base3(<lang `<-`(is0, `<`(pv, eps))>);
      goto L0(r16);
    };
    r21 = dyn character(p2);
    check L63() else D6();
  D1():
    deopt 7 [r12];
  D6():
    deopt 24 [r21];
  L8(dx3):
    st pv = dx3;
    goto L9();
  L53():
    goto L6(r12);
  L57():
    dr2 = tryDispatchBuiltin.1("[", pv4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(dr2);
  L58(pv6):
    ina = ld ina;
    check L60() else D4();
  L63():
    st r = r21;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  D4():
    deopt 14 [pv6, ina];
  L10(r23):
    c3 = `as.logical`(r23);
    if c3 then L68() else L11();
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L60():
    ina1 = force? ina;
    checkMissing(ina1);
    r14 = `!`(ina1);
    __ = ldf `[` in base;
    r15 = dyn __(pv6, r14);
    goto L8(r15);
  L64():
    is0 = ld is0;
    check L66() else D7();
  L65():
    r22 = dyn base4(<lang `!`(is0)>);
    goto L10(r22);
  D7():
    deopt 28 [is0];
  L11():
    goto L24();
  L24():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L114() else L115();
  L66():
    is1 = force? is0;
    checkMissing(is1);
    r24 = `!`(is1);
    any1 = ldf any in base;
    r25 = dyn any1(r24);
    check L67() else D8();
  L68():
    pv9 = ld pv;
    check L69() else D9();
  D8():
    deopt 32 [r25];
  D9():
    deopt 33 [pv9];
  L25(r75):
    c12 = `as.logical`(r75);
    if c12 then L118() else L26();
  L67():
    goto L10(r25);
  L69():
    pv10 = force? pv9;
    checkMissing(pv10);
    c4 = `is.object`(pv10);
    if c4 then L70() else L71(pv10);
  L114():
    is6 = ld is0;
    check L116() else D29();
  L115():
    r74 = dyn base9(<sym is0>);
    goto L25(r74);
  D29():
    deopt 121 [is6];
  L12(dx6):
    st pv = dx6;
    st rr = dx6;
    sym5 = ldf floor;
    base5 = ldf floor in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  L26():
    goto L43();
  L43():
    has_na = ld `has.na`;
    check L163() else D49();
  L70():
    dr4 = tryDispatchBuiltin.1("[", pv10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L72() else L71(dr4);
  L71(pv12):
    is2 = ld is0;
    check L73() else D10();
  L116():
    is7 = force? is6;
    checkMissing(is7);
    any4 = ldf any in base;
    r76 = dyn any4(is7);
    check L117() else D30();
  L118():
    sym10 = ldf max;
    base10 = ldf max in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L119() else L120();
  D10():
    deopt 35 [pv12, is2];
  D30():
    deopt 124 [r76];
  D49():
    deopt 216 [has_na];
  L13(r29):
    st expo = r29;
    expo = ld expo;
    check L81() else D14();
  L27(r78):
    st digits = r78;
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L123() else L124();
  L72():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx5);
  L73():
    is3 = force? is2;
    checkMissing(is3);
    r26 = `!`(is3);
    __1 = ldf `[` in base;
    r27 = dyn __1(pv12, r26);
    goto L12(r27);
  L74():
    sym6 = ldf log10;
    base6 = ldf log10 in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L76() else L77();
  L75():
    r28 = dyn base5(<lang log10(ifelse(`>`(pv, 0.0), pv, 1.0E-50))>);
    goto L13(r28);
  L117():
    goto L25(r76);
  L119():
    digits7 = ld digits;
    check L121() else D31();
  L120():
    r77 = dyn base10(1, <lang `-`(digits, 2)>);
    goto L27(r77);
  L163():
    has_na1 = force? has_na;
    checkMissing(has_na1);
    c30 = `as.logical`(has_na1);
    if c30 then L164() else L44();
  D14():
    deopt 54 [expo];
  D31():
    deopt 128 [digits7];
  L14(r31):
    r37 = floor(r31);
    goto L13(r37);
  L28(r82):
    c13 = `as.logical`(r82);
    if c13 then L127() else L29();
  L44():
    goto L47();
  L47():
    r127 = ld r;
    check L179() else D57();
  L76():
    ifelse = ldf ifelse;
    check L78() else D11();
  L77():
    r30 = dyn base6(<lang ifelse(`>`(pv, 0.0), pv, 1.0E-50)>);
    goto L14(r30);
  L81():
    expo1 = force? expo;
    checkMissing(expo1);
    r38 = `>=`(expo1, -3.0);
    expo2 = ld expo;
    check L82() else D15();
  L121():
    digits8 = force? digits7;
    checkMissing(digits8);
    r79 = `-`(digits8, 2);
    max1 = ldf max in base;
    r80 = dyn max1(1, r79);
    check L122() else D32();
  L123():
    is8 = ld is0;
    check L125() else D33();
  L124():
    r81 = dyn base11(<lang `!`(is0)>);
    goto L28(r81);
  L164():
    r117 = ld r;
    check L165() else D50();
  D11():
    deopt 45 [];
  D15():
    deopt 57 [r38, expo2];
  D32():
    deopt 133 [r80];
  D33():
    deopt 137 [is8];
  D50():
    deopt 218 [r117];
  D57():
    deopt 243 [r127];
  L29():
    digits15 = ld digits;
    check L153() else D45();
  L39():
    paste = ldf paste;
    check L156() else D46();
  L78():
    p3 = prom<V +>{
      pv13 = ld pv;
      pv14 = force? pv13;
      checkMissing(pv14);
      r32 = `>`(pv14, 0.0);
      return r32;
    };
    p4 = prom<V +>{
      pv15 = ld pv;
      pv16 = force? pv15;
      checkMissing(pv16);
      return pv16;
    };
    r35 = dyn ifelse(p3, p4, 1.0E-50);
    check L79() else D12();
  L82():
    expo3 = force? expo2;
    checkMissing(expo3);
    r39 = `==`(expo3, -4.0);
    digits1 = ld digits;
    check L83() else D16();
  L122():
    goto L27(r80);
  L125():
    is9 = force? is8;
    checkMissing(is9);
    r83 = `!`(is9);
    any5 = ldf any in base;
    r84 = dyn any5(r83);
    check L126() else D34();
  L127():
    sym12 = ldf max;
    base12 = ldf max in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L128() else L129();
  L165():
    r118 = force? r117;
    checkMissing(r118);
    st rok = r118;
    character1 = ldf character;
    check L166() else D51();
  L179():
    r128 = force? r127;
    checkMissing(r128);
    popenv;
    return r128;
  D12():
    deopt 49 [r35];
  D16():
    deopt 60 [r38, r39, digits1];
  D34():
    deopt 141 [r84];
  D45():
    deopt 193 [digits15];
  D46():
    deopt 203 [];
  D51():
    deopt 222 [];
  L30(r86):
    st nc = r86;
    digits9 = ld digits;
    check L135() else D38();
  L79():
    log10 = ldf log10 in base;
    r36 = dyn log10(r35);
    check L80() else D13();
  L83():
    digits2 = force? digits1;
    checkMissing(digits2);
    r40 = `>`(digits2, 1.0);
    r41 = `&&`(r39, r40);
    r42 = `||`(r38, r41);
    st fixp = r42;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  L126():
    goto L28(r84);
  L128():
    sym13 = ldf nchar;
    base13 = ldf nchar in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L130() else L131();
  L129():
    r85 = dyn base12(<lang nchar(rr, type="w")>);
    goto L30(r85);
  L153():
    digits16 = force? digits15;
    checkMissing(digits16);
    r103 = `==`(digits16, 1.0);
    c28 = `as.logical`(r103);
    if c28 then L154() else L40();
  L156():
    p11 = prom<V +>{
      format2 = ldf format;
      p9 = prom<V +>{
        eps3 = ld eps;
        eps4 = force? eps3;
        checkMissing(eps4);
        return eps4;
      };
      p10 = prom<V +>{
        digits17 = ld digits;
        digits18 = force? digits17;
        checkMissing(digits18);
        return digits18;
      };
      ddd3 = ld `...`;
      r107 = dyn format2[, digits, `...`](p9, p10, ddd3);
      return r107;
    };
    p12 = prom<V +>{
      sep = ld sep;
      sep1 = force? sep;
      checkMissing(sep1);
      return sep1;
    };
    r110 = dyn paste[, , sep]("<", p11, p12);
    check L157() else D47();
  L166():
    p13 = prom<V +>{
      sym15 = ldf length;
      base15 = ldf length in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r120):
      return r120;
    L1():
      ina2 = ld ina;
      ina3 = force? ina2;
      checkMissing(ina3);
      length1 = ldf length in base;
      r121 = dyn length1(ina3);
      goto L0(r121);
    L2():
      r119 = dyn base15(<sym ina>);
      goto L0(r119);
    };
    r123 = dyn character1(p13);
    check L167() else D52();
  D13():
    deopt 51 [r36];
  D38():
    deopt 156 [digits9];
  D47():
    deopt 208 [r110];
  D52():
    deopt 224 [r123];
  L15(r44):
    c5 = `as.logical`(r44);
    if c5 then L88() else L16();
  L31(r88):
    max2 = ldf max in base;
    r90 = dyn max2(r88);
    check L134() else D37();
  L40():
    goto L41(" ");
  L41(r104):
    st sep = r104;
    goto L39();
  L80():
    goto L14(r36);
  L84():
    fixp = ld fixp;
    check L86() else D17();
  L85():
    r43 = dyn base7(<sym fixp>);
    goto L15(r43);
  L130():
    rr7 = ld rr;
    check L132() else D35();
  L131():
    r87 = dyn base13[, type](<sym rr>, "w");
    goto L31(r87);
  L135():
    digits10 = force? digits9;
    checkMissing(digits10);
    r91 = `>`(digits10, 1);
    c14 = `as.logical`(r91);
    if c14 then L136() else L32(c14);
  L154():
    goto L41("");
  L157():
    l9 = ld r;
    c29 = `is.object`(l9);
    if c29 then L158() else L159(r110, l9);
  L167():
    st r = r123;
    rok = ld rok;
    check L168() else D53();
  D17():
    deopt 69 [fixp];
  D35():
    deopt 146 [rr7];
  D37():
    deopt 154 [r90];
  D53():
    deopt 226 [rok];
  L16():
    goto L18();
  L18():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L96() else L97();
  L32(c16):
    c20 = `as.logical`(c16);
    if c20 then L140() else L33();
  L42(r114, dx18):
    st r = dx18;
    goto L43();
  L86():
    fixp1 = force? fixp;
    checkMissing(fixp1);
    any2 = ldf any in base;
    r45 = dyn any2(fixp1);
    check L87() else D18();
  L88():
    format = ldf format;
    check L89() else D19();
  L132():
    rr8 = force? rr7;
    checkMissing(rr8);
    nchar = ldf nchar in base;
    r89 = dyn nchar(rr8, "w", FALSE, NA_LGL);
    check L133() else D36();
  L134():
    goto L30(r90);
  L136():
    digits11 = ld digits;
    check L137() else D39();
  L158():
    dr16 = tryDispatchBuiltin.0("[<-", l9, r110);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L160() else L159(r110, dr16);
  L159(r112, l11):
    is10 = ld is0;
    check L161() else D48();
  L168():
    rok1 = force? rok;
    checkMissing(rok1);
    l12 = ld r;
    c31 = `is.object`(l12);
    if c31 then L169() else L170(rok1, l12);
  D18():
    deopt 72 [r45];
  D19():
    deopt 74 [];
  D36():
    deopt 152 [r89];
  D39():
    deopt 160 [c14, digits11];
  D48():
    deopt 210 [r112, l11, r110, is10];
  L19(r57):
    c8 = `as.logical`(r57);
    if c8 then L100() else L20();
  L33():
    goto L35();
  L35():
    digits13 = ld digits;
    check L146() else D43();
  L45(dx20):
    st r = dx20;
    na_form1 = ld `na.form`;
    check L173() else D55();
  L87():
    goto L15(r45);
  L89():
    p5 = prom<V +>{
      pv17 = ld pv;
      pv18 = force? pv17;
      checkMissing(pv18);
      c6 = `is.object`(pv18);
      if c6 then L1() else L2(pv18);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("[", pv18);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(pv20):
      fixp2 = ld fixp;
      fixp3 = force? fixp2;
      __2 = ldf `[` in base;
      r46 = dyn __2(pv20, fixp3);
      goto L0(r46);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    p6 = prom<V +>{
      digits3 = ld digits;
      digits4 = force? digits3;
      checkMissing(digits4);
      return digits4;
    };
    ddd1 = ld `...`;
    r49 = dyn format[, digits, `...`](p5, p6, ddd1);
    check L90() else D20();
  L96():
    fixp6 = ld fixp;
    check L98() else D22();
  L97():
    r56 = dyn base8(<lang `!`(fixp)>);
    goto L19(r56);
  L133():
    goto L31(r89);
  L137():
    digits12 = force? digits11;
    checkMissing(digits12);
    r92 = `+`(digits12, 6);
    nc = ld nc;
    check L138() else D40();
  L140():
    sym14 = ldf max;
    base14 = ldf max in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L141() else L142();
  L160():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L42(r110, dx17);
  L161():
    is11 = force? is10;
    ___3 = ldf `[<-` in base;
    r115 = dyn ___3(l11, r110, is11);
    goto L42(r112, r115);
  L169():
    dr18 = tryDispatchBuiltin.0("[<-", l12, rok1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L171() else L170(rok1, dr18);
  L170(rok3, l14):
    ina4 = ld ina;
    check L172() else D54();
  D20():
    deopt 79 [r49];
  D22():
    deopt 89 [fixp6];
  D40():
    deopt 163 [c14, r92, nc];
  D43():
    deopt 179 [digits13];
  D54():
    deopt 229 [rok3, l14, rok1, ina4];
  D55():
    deopt 234 [na_form1];
  L20():
    goto L22();
  L22():
    rr = ld rr;
    check L108() else D27();
  L34(r95):
    st digits = r95;
    goto L35();
  L90():
    l = ld rr;
    c7 = `is.object`(l);
    if c7 then L91() else L92(r49, l);
  L98():
    fixp7 = force? fixp6;
    checkMissing(fixp7);
    r58 = `!`(fixp7);
    any3 = ldf any in base;
    r59 = dyn any3(r58);
    check L99() else D23();
  L100():
    format1 = ldf format;
    check L101() else D24();
  L138():
    nc1 = force? nc;
    checkMissing(nc1);
    r93 = `>`(r92, nc1);
    c17 = `as.logical`(r93);
    c18 = `&&`(c14, c17);
    goto L32(c18);
  L141():
    nc2 = ld nc;
    check L143() else D41();
  L142():
    r94 = dyn base14(1, <lang `-`(nc, 7)>);
    goto L34(r94);
  L146():
    digits14 = force? digits13;
    checkMissing(digits14);
    r99 = `==`(digits14, 1);
    c21 = `as.logical`(r99);
    if c21 then L147() else L36(c21);
  L171():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L45(dx19);
  L172():
    ina5 = force? ina4;
    checkMissing(ina5);
    r124 = `!`(ina5);
    ___4 = ldf `[<-` in base;
    r125 = dyn ___4(l14, rok1, r124);
    goto L45(r125);
  L173():
    na_form2 = force? na_form1;
    checkMissing(na_form2);
    l15 = ld r;
    c32 = `is.object`(l15);
    if c32 then L174() else L175(na_form2, l15);
  D23():
    deopt 93 [r59];
  D24():
    deopt 95 [];
  D27():
    deopt 109 [rr];
  D41():
    deopt 170 [nc2];
  L17(r53, dx10):
    st rr = dx10;
    goto L18();
  L36(c23):
    c27 = `as.logical`(c23);
    if c27 then L150() else L37();
  L46(na_form6, dx22):
    st r = dx22;
    goto L47();
  L91():
    dr8 = tryDispatchBuiltin.0("[<-", l, r49);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L93() else L92(r49, dr8);
  L92(r51, l2):
    fixp4 = ld fixp;
    check L94() else D21();
  L99():
    goto L19(r59);
  L101():
    p7 = prom<V +>{
      pv21 = ld pv;
      pv22 = force? pv21;
      checkMissing(pv22);
      c9 = `is.object`(pv22);
      if c9 then L1() else L2(pv22);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("[", pv22);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(pv24):
      fixp8 = ld fixp;
      fixp9 = force? fixp8;
      checkMissing(fixp9);
      r60 = `!`(fixp9);
      __3 = ldf `[` in base;
      r61 = dyn __3(pv24, r60);
      goto L0(r61);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    p8 = prom<V +>{
      digits5 = ld digits;
      digits6 = force? digits5;
      checkMissing(digits6);
      return digits6;
    };
    ddd2 = ld `...`;
    r64 = dyn format1[, digits, `...`](p7, p8, ddd2);
    check L102() else D25();
  L108():
    rr1 = force? rr;
    checkMissing(rr1);
    l6 = ld r;
    c11 = `is.object`(l6);
    if c11 then L109() else L110(rr1, l6);
  L143():
    nc3 = force? nc2;
    checkMissing(nc3);
    r96 = `-`(nc3, 7);
    max3 = ldf max in base;
    r97 = dyn max3(1, r96);
    check L144() else D42();
  L147():
    nc4 = ld nc;
    check L148() else D44();
  L174():
    dr20 = tryDispatchBuiltin.0("[<-", l15, na_form2);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L176() else L175(na_form2, dr20);
  L175(na_form4, l17):
    ina6 = ld ina;
    check L177() else D56();
  D21():
    deopt 81 [r51, l2, r49, fixp4];
  D25():
    deopt 100 [r64];
  D42():
    deopt 175 [r97];
  D44():
    deopt 183 [c21, nc4];
  D56():
    deopt 237 [na_form4, l17, na_form2, ina6];
  L23(rr5, dx16):
    st r = dx16;
    goto L24();
  L37():
    goto L38(" ");
  L38(r101):
    st sep = r101;
    goto L39();
  L93():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L17(r49, dx9);
  L94():
    fixp5 = force? fixp4;
    ___ = ldf `[<-` in base;
    r54 = dyn ___(l2, r49, fixp5);
    goto L17(r51, r54);
  L102():
    l3 = ld rr;
    c10 = `is.object`(l3);
    if c10 then L103() else L104(r64, l3);
  L109():
    dr14 = tryDispatchBuiltin.0("[<-", l6, rr1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L111() else L110(rr1, dr14);
  L110(rr3, l8):
    is4 = ld is0;
    check L112() else D28();
  L144():
    goto L34(r97);
  L148():
    nc5 = force? nc4;
    checkMissing(nc5);
    r100 = `<=`(nc5, 6);
    c24 = `as.logical`(r100);
    c25 = `&&`(c21, c24);
    goto L36(c25);
  L150():
    goto L38("");
  L176():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L46(na_form2, dx21);
  L177():
    ina7 = force? ina6;
    ___5 = ldf `[<-` in base;
    r126 = dyn ___5(l17, na_form2, ina7);
    goto L46(na_form4, r126);
  D28():
    deopt 112 [rr3, l8, rr1, is4];
  L21(r68, dx14):
    st rr = dx14;
    goto L22();
  L103():
    dr12 = tryDispatchBuiltin.0("[<-", l3, r64);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L105() else L104(r64, dr12);
  L104(r66, l5):
    fixp10 = ld fixp;
    check L106() else D26();
  L111():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L23(rr1, dx15);
  L112():
    is5 = force? is4;
    checkMissing(is5);
    r72 = `!`(is5);
    ___2 = ldf `[<-` in base;
    r73 = dyn ___2(l8, rr1, r72);
    goto L23(rr3, r73);
  D26():
    deopt 102 [r66, l5, r64, fixp10];
  L105():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L21(r64, dx13);
  L106():
    fixp11 = force? fixp10;
    checkMissing(fixp11);
    r69 = `!`(fixp11);
    ___1 = ldf `[<-` in base;
    r70 = dyn ___1(l5, r64, r69);
    goto L21(r66, r70);
  }
}