fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3067705224;
    st `aggregate.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3067705224(x, by, FUN, `...`, simplify, drop) {
  (reg x:*, reg by:*, reg FUN:*, reg ddd:dots, reg simplify:*, reg drop:*) -+> V { var x:*, var by:*, var FUN:*, var `...`:dots?, var simplify:*, reg simplify_isMissing:L, reg simplify_orDefault:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg as_data_frame:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r4:V, reg match_fun:cls, reg FUN1:*, reg FUN2:V, reg p2:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg by1:*, reg by2:V, reg inherits:cls, reg r10:V, reg c1:L, reg aggregate_formula:cls, reg by3:*, reg by4:V, reg p3:p(V +), reg x5:*, reg x6:V, reg p4:p(V +), reg FUN3:*, reg FUN4:V, reg p5:p(V +), reg ddd1:dots?, reg r14:V, reg NROW:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg r18:V, reg r19:V, reg c2:L, reg stop:cls, reg r20:V, reg NCOL:cls, reg x9:*, reg x10:V, reg p7:p(V +), reg r23:V, reg r24:V, reg c3:L, reg data_frame:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg rep:cls, reg r27:V, reg p8:p(V +), reg r29:V, reg aggregate_data_frame:cls, reg x11:*, reg x12:V, reg p9:p(V +), reg by5:*, reg by6:V, reg p10:p(V +), reg r32:cls, reg p11:p(V +), reg r34:V, reg c4:L, reg r36:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r39:V, reg r40:V, reg r41:V, reg by7:*, reg by8:V, reg r42:I, reg __:cls, reg r43:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r46:V, reg r47:V, reg by9:*, reg by10:V, reg is_list:cls, reg r48:V, reg r49:V, reg c5:L, reg stop1:cls, reg r50:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r52:V, reg r53:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r54:V, reg r55:V, reg by11:*, reg by12:V, reg names:cls, reg r56:V, reg c6:V, reg c7:L, reg c9:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg c12:L, reg r58:V, reg by13:*, reg by14:V, reg length:cls, reg r59:V, reg c13:L, reg c14:V, reg c16:L, reg paste0:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg r61:V, reg by15:*, reg by16:V, reg r62:I, reg p12:p(V +), reg r64:V, reg l:*, reg names__:cls, reg r65:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r67:V, reg r68:V, reg by17:*, reg by18:V, reg names1:cls, reg r69:V, reg which:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r70:V, reg r71:V, reg nam:*, reg nam1:V, reg nzchar:cls, reg r72:V, reg r73:V, reg p13:p(V +), reg r75:V, reg paste1:cls, reg ind:*, reg ind1:V, reg p14:p(V +), reg r77:V, reg l1:*, reg names2:cls, reg r78:V, reg c17:L, reg r81:V, reg l3:*, reg r82:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r84:V, reg l5:*, reg dx3:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r85:V, reg names__1:cls, reg r86:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r87:V, reg r88:V, reg lengths:cls, reg by19:*, reg by20:V, reg p15:p(V +), reg r90:V, reg NROW1:cls, reg x13:*, reg x14:V, reg p16:p(V +), reg r92:V, reg r93:V, reg any:cls, reg r94:V, reg c18:L, reg stop2:cls, reg r95:V, reg as_data_frame1:cls, reg by21:*, reg by22:V, reg p17:p(V +), reg r98:V, reg complete_cases:cls, reg by23:*, reg by24:V, reg p18:p(V +), reg r100:V, reg y:*, reg y1:V, reg c19:L, reg y3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg keep:*, reg keep1:V, reg __1:cls, reg r101:V, reg x15:*, reg x16:V, reg c20:L, reg x18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg keep2:*, reg keep3:V, reg __2:cls, reg r102:V, reg NROW2:cls, reg x19:*, reg x20:V, reg p19:p(V +), reg r104:V, reg r105:cls, reg lapply:cls, reg y4:*, reg y5:V, reg p20:p(V +), reg ident:*, reg ident1:V, reg p21:p(V +), reg r108:V, reg drop1:*, reg drop2:V, reg r109:V, reg c21:L, reg c23:V, reg ncol:cls, reg y6:*, reg y7:V, reg p22:p(V +), reg r111:V, reg c24:L, reg c25:V, reg multi_y:*, reg multi_y1:V, reg c27:L, reg lapply1:cls, reg grp:*, reg grp1:V, reg p23:p(V +), reg levels:*, reg levels1:V, reg p24:p(V +), reg r114:V, reg as_list:cls, reg y8:*, reg y9:V, reg p25:p(V +), reg r116:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r117:V, reg r118:V, reg y10:*, reg y11:V, reg r119:I, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c28:L, reg x21:V, reg y12:*, reg y13:V, reg c29:L, reg i6:I, reg y15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i8:I, reg dx9:V, reg i9:*, reg i10:V, reg __3:cls, reg r120:V, reg c30:L, reg i12:I, reg dx11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg i14:I, reg dx13:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r121:V, reg i17:I, reg dx16:V, reg r122:V, reg lev:*, reg lev1:V, reg c31:L, reg i19:I, reg dx18:V, reg lev3:V, reg dr12:V, reg dc6:L, reg dx20:V, reg i21:I, reg dx21:V, reg dx22:V, reg i22:*, reg i23:V, reg __4:cls, reg r123:V, reg grp2:*, reg grp3:V, reg c32:L, reg i25:I, reg dx24:V, reg grp5:V, reg dr14:V, reg dc7:L, reg dx26:V, reg i27:I, reg dx27:V, reg dx28:V, reg i28:*, reg i29:V, reg __5:cls, reg r124:V, reg match:cls, reg r125:V, reg __6:cls, reg r126:V, reg is_factor:cls, reg z:*, reg z1:V, reg p26:p(V +), reg r128:V, reg c33:L, reg i31:I, reg c35:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r129:V, reg i34:I, reg c38:L, reg r130:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r131:V, reg i37:I, reg c41:L, reg r132:V, reg z2:*, reg z3:V, reg is_na:cls, reg r133:V, reg any1:cls, reg r134:V, reg c42:L, reg c43:V, reg c45:L, reg levels2:cls, reg z4:*, reg z5:V, reg p27:p(V +), reg r136:V, reg c46:L, reg i42:I, reg r138:V, reg dr16:V, reg dc8:L, reg dx29:V, reg i44:I, reg dx30:V, reg keep4:*, reg keep5:V, reg __7:cls, reg r139:V, reg l7:*, reg c47:L, reg i46:I, reg dx32:V, reg l9:*, reg dr18:V, reg dc9:L, reg dx34:V, reg i48:I, reg dx35:V, reg dx36:V, reg keep6:*, reg keep7:V, reg ___1:cls, reg r140:V, reg i49:I, reg z6:*, reg z7:V, reg l10:*, reg c48:L, reg i51:I, reg z9:V, reg l12:*, reg dr20:V, reg dc10:L, reg dx38:V, reg i53:I, reg dx39:V, reg i54:*, reg i55:V, reg ____:cls, reg r141:V, reg r142:cls, reg eGrid:cls, reg y16:*, reg y17:V, reg p28:p(V +), reg r144:V, reg ncol1:cls, reg y18:*, reg y19:V, reg p29:p(V +), reg r147:V, reg c49:L, reg l13:*, reg names__2:cls, reg r148:V, reg do_call:cls, reg paste2:*, reg paste3:V, reg p30:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r150:V, reg r151:V, reg rev:cls, reg grp6:*, reg grp7:V, reg p31:p(V +), reg r153:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r154:V, reg r155:V, reg list:cls, reg r156:V, reg c50:cls, reg r157:V, reg p32:p(V +), reg r159:V, reg r160:V, reg integer:cls, reg nrx:*, reg nrx1:V, reg p33:p(V +), reg r162:V, reg multi_y2:*, reg multi_y3:V, reg c51:L, reg as_list1:cls, reg eGrid1:cls, reg lev4:*, reg lev5:V, reg p34:p(V +), reg r164:V, reg p35:p(V +), reg r166:V, reg l14:*, reg names__3:cls, reg r167:V, reg do_call1:cls, reg paste4:*, reg paste5:V, reg p36:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r169:V, reg r170:V, reg rev1:cls, reg lev6:*, reg lev7:V, reg p37:p(V +), reg r172:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r173:V, reg r174:V, reg list1:cls, reg r175:V, reg c52:cls, reg r176:V, reg p38:p(V +), reg r178:V, reg y20:*, reg y21:V, reg c53:L, reg y23:V, reg dr22:V, reg dc11:L, reg dx40:V, reg dx41:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r180:V, reg r181:V, reg sort:cls, reg unique:cls, reg grp8:*, reg grp9:V, reg p39:p(V +), reg r183:V, reg p40:p(V +), reg r185:V, reg grp10:*, reg grp11:V, reg match1:cls, reg r186:V, reg __8:cls, reg r187:V, reg lapply2:cls, reg x22:*, reg x23:V, reg p41:p(V +), reg r189:cls, reg p42:p(V +), reg r191:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r192:V, reg r193:V, reg y27:*, reg y28:V, reg length1:cls, reg r194:V, reg multi_y4:*, reg multi_y5:V, reg c54:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r195:V, reg r196:V, reg lev8:*, reg lev9:V, reg sort1:cls, reg unique1:cls, reg grp12:*, reg grp13:V, reg p43:p(V +), reg r198:V, reg p44:p(V +), reg r200:V, reg match2:cls, reg r201:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r202:V, reg r203:V, reg z12:*, reg z13:V, reg r204:I, reg s1:V, reg l15:I, reg i56:I, reg i57:I, reg i58:I, reg c55:L, reg x24:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r205:V, reg i63:I, reg r206:V, reg z14:*, reg z15:V, reg c56:L, reg i65:I, reg z17:V, reg dr24:V, reg dc12:L, reg dx42:V, reg i67:I, reg dx43:V, reg i68:*, reg i69:V, reg __9:cls, reg r207:V, reg is_matrix:cls, reg r208:V, reg c57:L, reg z18:*, reg z19:V, reg c58:L, reg i73:I, reg z21:V, reg dr26:V, reg dc13:L, reg dx44:V, reg i75:I, reg dx45:V, reg i76:*, reg i77:V, reg __10:cls, reg r209:V, reg c59:L, reg i79:I, reg dx47:V, reg dr28:V, reg dc14:L, reg dx48:V, reg i81:I, reg dx49:V, reg keep8:*, reg keep9:V, reg __11:cls, reg r210:V, reg i82:I, reg dx50:V, reg z22:*, reg z23:V, reg c60:L, reg i84:I, reg z25:V, reg dr30:V, reg dc15:L, reg dx51:V, reg i86:I, reg dx52:V, reg i87:*, reg i88:V, reg __12:cls, reg r211:V, reg c61:L, reg i90:I, reg dx54:V, reg dr32:V, reg dc16:L, reg dx55:V, reg keep10:*, reg keep11:V, reg __13:cls, reg r212:V, reg l16:*, reg c62:L, reg i93:I, reg dx57:V, reg l18:*, reg dr34:V, reg dc17:L, reg dx59:V, reg i95:I, reg dx61:V, reg len:*, reg len1:V, reg i96:*, reg i97:V, reg r213:V, reg ____1:cls, reg r214:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r215:V, reg r216:V, reg z26:*, reg z27:V, reg r217:I, reg s2:V, reg l19:I, reg i99:I, reg i100:I, reg i101:I, reg c63:L, reg x25:V, reg z28:*, reg z29:V, reg c64:L, reg i105:I, reg z31:V, reg dr36:V, reg dc18:L, reg dx62:V, reg i107:I, reg dx63:V, reg i108:*, reg i109:V, reg __14:cls, reg r218:V, reg l20:*, reg c65:L, reg i111:I, reg dx65:V, reg l22:*, reg dr38:V, reg dc19:L, reg dx67:V, reg i113:I, reg dx69:V, reg len2:*, reg len3:V, reg i114:*, reg i115:V, reg r219:V, reg ____2:cls, reg r220:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r221:V, reg r222:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r223:V, reg r224:V, reg by25:*, reg by26:V, reg names3:cls, reg r225:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r226:V, reg r227:V, reg x26:*, reg x27:V, reg names4:cls, reg r228:V, reg c66:cls, reg r229:V, reg l23:*, reg names__4:cls, reg r230:V, reg l24:*, reg row_names__:cls, reg r231:V, reg y29:*, reg y30:V |
    mkenv;
    st x = x;
    st by = by;
    st FUN = FUN;
    st `...` = ddd;
    simplify_isMissing = missing.0(simplify);
    if simplify_isMissing then L0(TRUE) else L0(simplify);
  L0(simplify_orDefault):
    st simplify = simplify_orDefault;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L1(TRUE) else L1(drop);
  L1(drop_orDefault):
    st drop = drop_orDefault;
    is_data_frame = ldf `is.data.frame`;
    check L77() else D0();
  D0():
    deopt 1 [];
  L77():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_data_frame(p);
    check L78() else D1();
  D1():
    deopt 3 [r1];
  L78():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L79() else L2();
  L2():
    goto L3();
  L3():
    match_fun = ldf `match.fun`;
    check L83() else D4();
  L79():
    as_data_frame = ldf `as.data.frame`;
    check L80() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 13 [];
  L80():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r4 = dyn as_data_frame(p1);
    check L81() else D3();
  L83():
    p2 = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    r7 = dyn match_fun(p2);
    check L84() else D5();
  D3():
    deopt 8 [r4];
  D5():
    deopt 15 [r7];
  L81():
    st x = r4;
    goto L3();
  L84():
    st FUN = r7;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L85() else L86();
  L4(r9):
    c1 = `as.logical`(r9);
    if c1 then L89() else L5();
  L85():
    by1 = ld by;
    check L87() else D6();
  L86():
    r8 = dyn base(<sym by>, "formula");
    goto L4(r8);
  D6():
    deopt 19 [by1];
  L5():
    NROW = ldf NROW;
    check L94() else D10();
  L87():
    by2 = force? by1;
    checkMissing(by2);
    inherits = ldf inherits in base;
    r10 = dyn inherits(by2, "formula", FALSE);
    check L88() else D7();
  L89():
    aggregate_formula = ldf `aggregate.formula`;
    check L90() else D8();
  D7():
    deopt 24 [r10];
  D8():
    deopt 26 [];
  D10():
    deopt 39 [];
  L88():
    goto L4(r10);
  L90():
    p3 = prom<V +>{
      by3 = ld by;
      by4 = force? by3;
      checkMissing(by4);
      return by4;
    };
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p5 = prom<V +>{
      FUN3 = ld FUN;
      FUN4 = force? FUN3;
      checkMissing(FUN4);
      return FUN4;
    };
    ddd1 = ld `...`;
    r14 = dyn aggregate_formula[x, data, FUN, `...`](p3, p4, p5, ddd1);
    check L91() else D9();
  L94():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r18 = dyn NROW(p6);
    check L95() else D11();
  D9():
    deopt 34 [r14];
  D11():
    deopt 41 [r18];
  L91():
    popenv;
    return r14;
  L95():
    r19 = `==`(r18, 0);
    c2 = `as.logical`(r19);
    if c2 then L96() else L7();
  L7():
    goto L8();
  L8():
    NCOL = ldf NCOL;
    check L100() else D14();
  L96():
    stop = ldf stop;
    check L97() else D12();
  D12():
    deopt 45 [];
  D14():
    deopt 51 [];
  L97():
    r20 = dyn stop("no rows to aggregate");
    check L98() else D13();
  L100():
    p7 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r23 = dyn NCOL(p7);
    check L101() else D15();
  D13():
    deopt 47 [r20];
  D15():
    deopt 53 [r23];
  L98():
    goto L8();
  L101():
    r24 = `==`(r23, 0);
    c3 = `as.logical`(r24);
    if c3 then L102() else L9();
  L9():
    sym3 = ldf `is.list`;
    base3 = ldf `is.list` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L115() else L116();
  L102():
    data_frame = ldf `data.frame`;
    check L103() else D16();
  D16():
    deopt 57 [];
  L13(r47):
    r49 = `!`(r47);
    c5 = `as.logical`(r49);
    if c5 then L119() else L14();
  L103():
    p8 = prom<V +>{
      sym1 = ldf rep;
      base1 = ldf rep in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      rep = ldf rep in base;
      r27 = dyn rep(1.0, <lang NROW(x)>);
      goto L0(r27);
    L2():
      r25 = dyn base1(1.0, <lang NROW(x)>);
      goto L0(r25);
    };
    r29 = dyn data_frame[x](p8);
    check L104() else D17();
  L115():
    by9 = ld by;
    check L117() else D21();
  L116():
    r46 = dyn base3(<sym by>);
    goto L13(r46);
  D17():
    deopt 60 [r29];
  D21():
    deopt 78 [by9];
  L14():
    goto L15();
  L15():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L123() else L124();
  L104():
    st x = r29;
    aggregate_data_frame = ldf `aggregate.data.frame`;
    check L105() else D18();
  L117():
    by10 = force? by9;
    checkMissing(by10);
    is_list = ldf `is.list` in base;
    r48 = dyn is_list(by10);
    check L118() else D22();
  L119():
    stop1 = ldf stop;
    check L120() else D23();
  D18():
    deopt 63 [];
  D22():
    deopt 81 [r48];
  D23():
    deopt 84 [];
  L16(r53):
    c7 = `as.logical`(r53);
    if c7 then L129() else L18(c7);
  L105():
    p9 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p10 = prom<V +>{
      by5 = ld by;
      by6 = force? by5;
      checkMissing(by6);
      return by6;
    };
    p11 = prom<V +>{
      r32 = clos inner2501545716;
      return r32;
    };
    r34 = dyn aggregate_data_frame(p9, p10, p11);
    check L106() else D19();
  L118():
    goto L13(r48);
  L120():
    r50 = dyn stop1("'by' must be a list");
    check L121() else D24();
  L123():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L125() else L126();
  L124():
    r52 = dyn base4(<lang names(by)>);
    goto L16(r52);
  D19():
    deopt 67 [r34];
  D24():
    deopt 86 [r50];
  L17(r55):
    c6 = `==`(r55, NULL);
    goto L16(c6);
  L18(c9):
    c16 = `as.logical`(c9);
    if c16 then L135() else L20();
  L106():
    c4 = `is.object`(r34);
    if c4 then L107() else L108(r34);
  L121():
    goto L15();
  L125():
    by11 = ld by;
    check L127() else D25();
  L126():
    r54 = dyn base5(<sym by>);
    goto L17(r54);
  L129():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L130() else L131();
  D25():
    deopt 92 [by11];
  L10(dx1):
    popenv;
    return dx1;
  L19(c12, r58):
    c13 = `as.logical`(r58);
    c14 = `&&`(c12, c13);
    goto L18(c14);
  L20():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L141() else L142();
  L21():
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L157() else L158();
  L107():
    dr = tryDispatchBuiltin.1("[", r34);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L109() else L108(dr);
  L108(r36):
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L110() else L111();
  L127():
    by12 = force? by11;
    checkMissing(by12);
    names = ldf names in base;
    r56 = dyn names(by12);
    check L128() else D26();
  L130():
    by13 = ld by;
    check L132() else D27();
  L131():
    r57 = dyn base6(<sym by>);
    goto L19(c7, r57);
  L135():
    paste0 = ldf paste0;
    check L136() else D29();
  D26():
    deopt 95 [r56];
  D27():
    deopt 99 [c7, by13];
  D29():
    deopt 105 [];
  L11(r40, r41):
    __ = ldf `[` in base;
    r43 = dyn __(r40, r41);
    goto L10(r43);
  L22(r68):
    st nam = r68;
    which = ldf which;
    check L145() else D35();
  L24(r88):
    c18 = `as.logical`(r88);
    if c18 then L164() else L25();
  L109():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L110():
    by7 = ld by;
    check L112() else D20();
  L111():
    r39 = dyn base2(<sym by>);
    goto L11(r36, r39);
  L128():
    goto L17(r56);
  L132():
    by14 = force? by13;
    checkMissing(by14);
    length = ldf length in base;
    r59 = dyn length(by14);
    check L133() else D28();
  L136():
    p12 = prom<V +>{
      sym7 = ldf seq_along;
      base7 = ldf seq_along in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r61):
      return r61;
    L1():
      by15 = ld by;
      by16 = force? by15;
      checkMissing(by16);
      r62 = seq_along(by16);
      goto L0(r62);
    L2():
      r60 = dyn base7(<sym by>);
      goto L0(r60);
    };
    r64 = dyn paste0("Group.", p12);
    check L137() else D30();
  L141():
    by17 = ld by;
    check L143() else D33();
  L142():
    r67 = dyn base8(<sym by>);
    goto L22(r67);
  L157():
    lengths = ldf lengths;
    check L159() else D44();
  L158():
    r87 = dyn base10(<lang `!=`(lengths(by), NROW(x))>);
    goto L24(r87);
  D20():
    deopt 69 [r36, by7];
  D28():
    deopt 102 [c7, r59];
  D30():
    deopt 108 [r64];
  D33():
    deopt 116 [by17];
  D35():
    deopt 122 [];
  D44():
    deopt 146 [];
  L25():
    goto L26();
  L26():
    as_data_frame1 = ldf `as.data.frame`;
    check L168() else D51();
  L112():
    by8 = force? by7;
    checkMissing(by8);
    r42 = seq_along(by8);
    goto L11(r36, r42);
  L133():
    goto L19(c7, r59);
  L137():
    l = ld by;
    names__ = ldf `names<-`;
    check L138() else D31();
  L143():
    by18 = force? by17;
    checkMissing(by18);
    names1 = ldf names in base;
    r69 = dyn names1(by18);
    check L144() else D34();
  L145():
    p13 = prom<V +>{
      sym9 = ldf nzchar;
      base9 = ldf nzchar in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r71):
      r73 = `!`(r71);
      return r73;
    L1():
      nam = ld nam;
      nam1 = force? nam;
      checkMissing(nam1);
      nzchar = ldf nzchar in base;
      r72 = dyn nzchar(nam1);
      goto L0(r72);
    L2():
      r70 = dyn base9(<sym nam>);
      goto L0(r70);
    };
    r75 = dyn which(p13);
    check L146() else D36();
  L159():
    p15 = prom<V +>{
      by19 = ld by;
      by20 = force? by19;
      checkMissing(by20);
      return by20;
    };
    r90 = dyn lengths(p15);
    check L160() else D45();
  L164():
    stop2 = ldf stop;
    check L165() else D49();
  D31():
    deopt 110 [r64, l, r64];
  D34():
    deopt 119 [r69];
  D36():
    deopt 124 [r75];
  D45():
    deopt 148 [r90];
  D49():
    deopt 156 [];
  D51():
    deopt 162 [];
  L138():
    r65 = dyn names__(l, NULL, r64);
    check L139() else D32();
  L144():
    goto L22(r69);
  L146():
    st ind = r75;
    paste1 = ldf paste0;
    check L147() else D37();
  L160():
    NROW1 = ldf NROW;
    check L161() else D46();
  L165():
    r95 = dyn stop2("arguments must have same length");
    check L166() else D50();
  L168():
    p17 = prom<V +>{
      by21 = ld by;
      by22 = force? by21;
      checkMissing(by22);
      return by22;
    };
    r98 = dyn as_data_frame1[, stringsAsFactors](p17, FALSE);
    check L169() else D52();
  D32():
    deopt 112 [r64, r65];
  D37():
    deopt 127 [];
  D46():
    deopt 149 [r90];
  D50():
    deopt 158 [r95];
  D52():
    deopt 166 [r98];
  L139():
    st by = r65;
    goto L21();
  L147():
    p14 = prom<V +>{
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      return ind1;
    };
    r77 = dyn paste1("Group.", p14);
    check L148() else D38();
  L161():
    p16 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r92 = dyn NROW1(p16);
    check L162() else D47();
  L166():
    goto L26();
  L169():
    st y = r98;
    complete_cases = ldf `complete.cases`;
    check L170() else D53();
  D38():
    deopt 130 [r77];
  D47():
    deopt 151 [r90, r92];
  D53():
    deopt 169 [];
  L148():
    l1 = ld by;
    names2 = ldf names;
    check L149() else D39();
  L162():
    r93 = `!=`(r90, r92);
    any = ldf any in base;
    r94 = dyn any(r93);
    check L163() else D48();
  L170():
    p18 = prom<V +>{
      by23 = ld by;
      by24 = force? by23;
      checkMissing(by24);
      return by24;
    };
    r100 = dyn complete_cases(p18);
    check L171() else D54();
  D39():
    deopt 132 [r77, l1, r77];
  D48():
    deopt 154 [r94];
  D54():
    deopt 171 [r100];
  L149():
    r78 = dyn names2(r77, NULL);
    check L150() else D40();
  L163():
    goto L24(r94);
  L171():
    st keep = r100;
    y = ld y;
    check L172() else D55();
  D40():
    deopt 134 [r77, l1, r77, r78];
  D55():
    deopt 173 [y];
  L150():
    c17 = `is.object`(r78);
    if c17 then L151() else L152(r77, l1, r78);
  L172():
    y1 = force? y;
    checkMissing(y1);
    c19 = `is.object`(y1);
    if c19 then L173() else L174(y1);
  L23(r84, l5, dx3):
    names__1 = ldf `names<-`;
    check L155() else D42();
  L27(dx5):
    st y = dx5;
    x15 = ld x;
    check L177() else D57();
  L151():
    dr2 = tryDispatchBuiltin.0("[<-", r78, r77);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L153() else L152(r77, l1, dr2);
  L152(r81, l3, r82):
    ind2 = ld ind;
    check L154() else D41();
  L173():
    dr4 = tryDispatchBuiltin.1("[", y1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L175() else L174(dr4);
  L174(y3):
    keep = ld keep;
    check L176() else D56();
  D41():
    deopt 136 [r81, l3, r82, r77, ind2];
  D42():
    deopt 139 [r84, l5, dx3];
  D56():
    deopt 175 [y3, keep];
  D57():
    deopt 183 [x15];
  L153():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(r77, l1, dx2);
  L154():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r85 = dyn ___(r82, r77, ind3);
    goto L23(r81, l3, r85);
  L155():
    r86 = dyn names__1(l5, NULL, dx3);
    check L156() else D43();
  L175():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L27(dx4);
  L176():
    keep1 = force? keep;
    __1 = ldf `[` in base;
    r101 = dyn __1(y1, keep1, <missing>, FALSE);
    goto L27(r101);
  L177():
    x16 = force? x15;
    checkMissing(x16);
    c20 = `is.object`(x16);
    if c20 then L178() else L179(x16);
  D43():
    deopt 141 [r84, r86];
  L28(dx7):
    st x = dx7;
    NROW2 = ldf NROW;
    check L182() else D59();
  L156():
    st by = r86;
    goto L21();
  L178():
    dr6 = tryDispatchBuiltin.1("[", x16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L180() else L179(dr6);
  L179(x18):
    keep2 = ld keep;
    check L181() else D58();
  D58():
    deopt 185 [x18, keep2];
  D59():
    deopt 194 [];
  L180():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L28(dx6);
  L181():
    keep3 = force? keep2;
    __2 = ldf `[` in base;
    r102 = dyn __2(x16, keep3, <missing>, FALSE);
    goto L28(r102);
  L182():
    p19 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r104 = dyn NROW2(p19);
    check L183() else D60();
  D60():
    deopt 196 [r104];
  L183():
    st nrx = r104;
    r105 = clos inner2501545716;
    st ident = r105;
    lapply = ldf lapply;
    check L184() else D61();
  D61():
    deopt 202 [];
  L184():
    p20 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p21 = prom<V +>{
      ident = ld ident;
      ident1 = force? ident;
      checkMissing(ident1);
      return ident1;
    };
    r108 = dyn lapply(p20, p21);
    check L185() else D62();
  D62():
    deopt 205 [r108];
  L185():
    st grp = r108;
    drop1 = ld drop;
    check L186() else D63();
  D63():
    deopt 207 [drop1];
  L186():
    drop2 = force? drop1;
    checkMissing(drop2);
    r109 = `!`(drop2);
    c21 = `as.logical`(r109);
    if c21 then L187() else L29(c21);
  L29(c23):
    st `multi.y` = c23;
    multi_y = ld `multi.y`;
    check L191() else D66();
  L187():
    ncol = ldf ncol;
    check L188() else D64();
  D64():
    deopt 211 [c21];
  D66():
    deopt 216 [multi_y];
  L188():
    p22 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    r111 = dyn ncol(p22);
    check L189() else D65();
  L191():
    multi_y1 = force? multi_y;
    checkMissing(multi_y1);
    c27 = `as.logical`(multi_y1);
    if c27 then L192() else L30();
  D65():
    deopt 213 [c21, r111];
  L30():
    goto L47();
  L47():
    ncol1 = ldf ncol;
    check L253() else D92();
  L189():
    c24 = `as.logical`(r111);
    c25 = `&&`(c21, c24);
    goto L29(c25);
  L192():
    lapply1 = ldf lapply;
    check L193() else D67();
  D67():
    deopt 219 [];
  D92():
    deopt 307 [];
  L193():
    p23 = prom<V +>{
      grp = ld grp;
      grp1 = force? grp;
      checkMissing(grp1);
      return grp1;
    };
    p24 = prom<V +>{
      levels = ld levels;
      levels1 = force? levels;
      checkMissing(levels1);
      return levels1;
    };
    r114 = dyn lapply1(p23, p24);
    check L194() else D68();
  L253():
    p29 = prom<V +>{
      y18 = ld y;
      y19 = force? y18;
      checkMissing(y19);
      return y19;
    };
    r147 = dyn ncol1(p29);
    check L254() else D93();
  D68():
    deopt 222 [r114];
  D93():
    deopt 309 [r147];
  L194():
    st lev = r114;
    as_list = ldf `as.list`;
    check L195() else D69();
  L254():
    c49 = `as.logical`(r147);
    if c49 then L255() else L48();
  D69():
    deopt 225 [];
  L48():
    integer = ldf integer;
    check L261() else D98();
  L49(r160):
    st grp = r160;
    multi_y2 = ld `multi.y`;
    check L263() else D100();
  L195():
    p25 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      return y9;
    };
    r116 = dyn as_list(p25);
    check L196() else D70();
  L255():
    l13 = ld grp;
    names__2 = ldf `names<-`;
    check L256() else D94();
  D70():
    deopt 227 [r116];
  D94():
    deopt 313 [NULL, l13, NULL];
  D98():
    deopt 323 [];
  D100():
    deopt 327 [multi_y2];
  L196():
    st y = r116;
    sym11 = ldf seq_along;
    base11 = ldf seq_along in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L197() else L198();
  L256():
    r148 = dyn names__2(l13, NULL, NULL);
    check L257() else D95();
  L261():
    p33 = prom<V +>{
      nrx = ld nrx;
      nrx1 = force? nrx;
      checkMissing(nrx1);
      return nrx1;
    };
    r162 = dyn integer(p33);
    check L262() else D99();
  L263():
    multi_y3 = force? multi_y2;
    checkMissing(multi_y3);
    c51 = `as.logical`(multi_y3);
    if c51 then L264() else L50();
  D95():
    deopt 315 [NULL, r148];
  D99():
    deopt 325 [r162];
  L31(r118):
    s = toForSeq(r118);
    l6 = length(s);
    i = 0;
    goto L32(i);
  L50():
    y20 = ld y;
    check L272() else D107();
  L51():
    lapply2 = ldf lapply;
    check L282() else D112();
  L197():
    y10 = ld y;
    check L199() else D71();
  L198():
    r117 = dyn base11(<sym y>);
    goto L31(r117);
  L257():
    st grp = r148;
    do_call = ldf `do.call`;
    check L258() else D96();
  L262():
    goto L49(r162);
  L264():
    as_list1 = ldf `as.list`;
    check L265() else D101();
  D71():
    deopt 230 [y10];
  D96():
    deopt 318 [];
  D101():
    deopt 330 [];
  D107():
    deopt 347 [y20];
  D112():
    deopt 368 [];
  L32(i1):
    i2 = `+`.1(i1, 1);
    c28 = `<`.1(l6, i2);
    if c28 then L200() else L46();
  L199():
    y11 = force? y10;
    checkMissing(y11);
    r119 = seq_along(y11);
    goto L31(r119);
  L258():
    p30 = prom<V +>{
      paste2 = ld paste;
      paste3 = force? paste2;
      checkMissing(paste3);
      return paste3;
    };
    p32 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L2() else L3();
    L0(r151):
      return r151;
    L2():
      rev = ldf rev;
      p31 = prom<V +>{
        grp6 = ld grp;
        grp7 = force? grp6;
        checkMissing(grp7);
        return grp7;
      };
      r153 = dyn rev(p31);
      sym16 = ldf list;
      base16 = ldf list in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L4() else L5();
    L3():
      r150 = dyn base15(<lang rev(grp)>, <lang list(sep=".")>);
      goto L0(r150);
    L1(r155):
      c50 = ldf c in base;
      r157 = dyn c50(r153, r155);
      goto L0(r157);
    L4():
      list = ldf list in base;
      r156 = dyn list(".");
      goto L1(r156);
    L5():
      r154 = dyn base16[sep](".");
      goto L1(r154);
    };
    r159 = dyn do_call(p30, p32);
    check L259() else D97();
  L265():
    p35 = prom<V +>{
      eGrid1 = ldf eGrid;
      p34 = prom<V +>{
        lev4 = ld lev;
        lev5 = force? lev4;
        checkMissing(lev5);
        return lev5;
      };
      r164 = dyn eGrid1(p34);
      return r164;
    };
    r166 = dyn as_list1(p35);
    check L266() else D102();
  L272():
    y21 = force? y20;
    checkMissing(y21);
    c53 = `is.object`(y21);
    if c53 then L273() else L274(y21);
  L282():
    p41 = prom<V +>{
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      return x23;
    };
    p42 = prom<V +>{
      r189 = clos inner3708401697;
      return r189;
    };
    r191 = dyn lapply2(p41, p42);
    check L283() else D113();
  D97():
    deopt 321 [r159];
  D102():
    deopt 332 [r166];
  D113():
    deopt 371 [r191];
  L46():
    x21 = `[[`(s, i2, NULL, TRUE);
    st i = x21;
    y12 = ld y;
    check L201() else D72();
  L52(dx41):
    st y = dx41;
    goto L51();
  L200():
    r142 = clos inner1679555528;
    st eGrid = r142;
    eGrid = ldf eGrid;
    check L250() else D90();
  L259():
    goto L49(r159);
  L266():
    st lev = r166;
    l14 = ld lev;
    names__3 = ldf `names<-`;
    check L267() else D103();
  L273():
    dr22 = tryDispatchBuiltin.1("[", y21);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L275() else L274(dr22);
  L274(y23):
    sym19 = ldf match;
    base19 = ldf match in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L276() else L277();
  L283():
    st z = r191;
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L284() else L285();
  D72():
    deopt 233 [i2, y12];
  D90():
    deopt 300 [];
  D103():
    deopt 337 [NULL, l14, NULL];
  L53(r181):
    __8 = ldf `[` in base;
    r187 = dyn __8(y21, r181, <missing>, FALSE);
    goto L52(r187);
  L54(r193):
    st len = r193;
    multi_y4 = ld `multi.y`;
    check L288() else D116();
  L201():
    y13 = force? y12;
    checkMissing(y13);
    c29 = `is.object`(y13);
    if c29 then L202() else L203(i2, y13);
  L250():
    p28 = prom<V +>{
      y16 = ld y;
      y17 = force? y16;
      checkMissing(y17);
      return y17;
    };
    r144 = dyn eGrid(p28);
    check L251() else D91();
  L267():
    r167 = dyn names__3(l14, NULL, NULL);
    check L268() else D104();
  L275():
    dx40 = getTryDispatchBuiltinValue(dr22);
    goto L52(dx40);
  L276():
    sort = ldf sort;
    check L278() else D108();
  L277():
    r180 = dyn base19(<lang sort(unique(grp))>, <sym grp>, 0);
    goto L53(r180);
  L284():
    y27 = ld y;
    check L286() else D114();
  L285():
    r192 = dyn base20(<sym y>);
    goto L54(r192);
  D91():
    deopt 302 [r144];
  D104():
    deopt 339 [NULL, r167];
  D108():
    deopt 352 [y23];
  D114():
    deopt 375 [y27];
  D116():
    deopt 380 [multi_y4];
  L33(i8, dx9):
    c30 = `is.object`(dx9);
    if c30 then L206() else L207(i8, dx9);
  L202():
    dr8 = tryDispatchBuiltin.1("[[", y13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L204() else L203(i2, dr8);
  L203(i6, y15):
    i9 = ld i;
    check L205() else D73();
  L251():
    st y = r144;
    goto L47();
  L268():
    st lev = r167;
    do_call1 = ldf `do.call`;
    check L269() else D105();
  L278():
    p40 = prom<V +>{
      unique = ldf unique;
      p39 = prom<V +>{
        grp8 = ld grp;
        grp9 = force? grp8;
        checkMissing(grp9);
        return grp9;
      };
      r183 = dyn unique(p39);
      return r183;
    };
    r185 = dyn sort(p40);
    check L279() else D109();
  L286():
    y28 = force? y27;
    checkMissing(y28);
    length1 = ldf length in base;
    r194 = dyn length1(y28);
    check L287() else D115();
  L288():
    multi_y5 = force? multi_y4;
    checkMissing(multi_y5);
    c54 = `as.logical`(multi_y5);
    if c54 then L289() else L55();
  D73():
    deopt 235 [i6, y15, i9];
  D105():
    deopt 342 [];
  D109():
    deopt 354 [y23, r185];
  D115():
    deopt 378 [r194];
  L34(i14, dx13):
    st z = dx13;
    is_factor = ldf `is.factor`;
    check L222() else D79();
  L55():
    sym24 = ldf seq_along;
    base24 = ldf seq_along in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L334() else L335();
  L68():
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L348() else L349();
  L204():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L33(i2, dx8);
  L205():
    i10 = force? i9;
    __3 = ldf `[[` in base;
    r120 = dyn __3(y15, i10);
    goto L33(i6, r120);
  L206():
    dr10 = tryDispatchBuiltin.1("[", dx9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L208() else L207(i8, dr10);
  L207(i12, dx11):
    sym12 = ldf match;
    base12 = ldf match in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L209() else L210();
  L269():
    p36 = prom<V +>{
      paste4 = ld paste;
      paste5 = force? paste4;
      checkMissing(paste5);
      return paste5;
    };
    p38 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L2() else L3();
    L0(r170):
      return r170;
    L2():
      rev1 = ldf rev;
      p37 = prom<V +>{
        lev6 = ld lev;
        lev7 = force? lev6;
        checkMissing(lev7);
        return lev7;
      };
      r172 = dyn rev1(p37);
      sym18 = ldf list;
      base18 = ldf list in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L4() else L5();
    L3():
      r169 = dyn base17(<lang rev(lev)>, <lang list(sep=".")>);
      goto L0(r169);
    L1(r174):
      c52 = ldf c in base;
      r176 = dyn c52(r172, r174);
      goto L0(r176);
    L4():
      list1 = ldf list in base;
      r175 = dyn list1(".");
      goto L1(r175);
    L5():
      r173 = dyn base18[sep](".");
      goto L1(r173);
    };
    r178 = dyn do_call1(p36, p38);
    check L270() else D106();
  L279():
    grp10 = ld grp;
    check L280() else D110();
  L287():
    goto L54(r194);
  L289():
    sym21 = ldf match;
    base21 = ldf match in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L290() else L291();
  D79():
    deopt 257 [i14];
  D106():
    deopt 345 [r178];
  D110():
    deopt 355 [y23, grp10];
  L35(i17, dx16, r122):
    __6 = ldf `[` in base;
    r126 = dyn __6(dx16, r122);
    goto L34(i17, r126);
  L56(r196):
    st keep = r196;
    sym22 = ldf seq_along;
    base22 = ldf seq_along in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L296() else L297();
  L69(r216):
    s2 = toForSeq(r216);
    l19 = length(s2);
    i99 = 0;
    goto L70(i99);
  L74(r222):
    l23 = ld y;
    names__4 = ldf `names<-`;
    check L359() else D143();
  L208():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L34(i8, dx12);
  L209():
    lev = ld lev;
    check L211() else D74();
  L210():
    r121 = dyn base12(<lang `[[`(lev, i)>, <lang `[[`(grp, i)>);
    goto L35(i12, dx11, r121);
  L222():
    p26 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r128 = dyn is_factor(p26);
    check L223() else D80();
  L270():
    st lev = r178;
    goto L51();
  L280():
    grp11 = force? grp10;
    checkMissing(grp11);
    match1 = ldf match in base;
    r186 = dyn match1(r185, grp11, 0, NULL);
    check L281() else D111();
  L290():
    lev8 = ld lev;
    check L292() else D117();
  L291():
    r195 = dyn base21(<sym lev>, <lang sort(unique(grp))>);
    goto L56(r195);
  L334():
    z26 = ld z;
    check L336() else D133();
  L335():
    r215 = dyn base24(<sym z>);
    goto L69(r215);
  L348():
    sym26 = ldf names;
    base26 = ldf names in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L350() else L351();
  L349():
    r221 = dyn base25(<lang names(by)>, <lang names(x)>);
    goto L74(r221);
  D74():
    deopt 240 [i12, dx11, lev];
  D80():
    deopt 259 [i14, r128];
  D111():
    deopt 360 [y23, r186];
  D117():
    deopt 384 [lev8];
  D133():
    deopt 439 [z26];
  D143():
    deopt 474 [r222, l23, r222];
  L57(r203):
    s1 = toForSeq(r203);
    l15 = length(s1);
    i56 = 0;
    goto L58(i56);
  L70(i100):
    i101 = `+`.1(i100, 1);
    c63 = `<`.1(l19, i101);
    if c63 then L337() else L73();
  L75(r224):
    sym27 = ldf names;
    base27 = ldf names in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L354() else L355();
  L211():
    lev1 = force? lev;
    checkMissing(lev1);
    c31 = `is.object`(lev1);
    if c31 then L212() else L213(i12, dx11, lev1);
  L223():
    c33 = `as.logical`(r128);
    if c33 then L224() else L38(i14, c33);
  L281():
    goto L53(r186);
  L292():
    lev9 = force? lev8;
    checkMissing(lev9);
    sort1 = ldf sort;
    check L293() else D118();
  L296():
    z12 = ld z;
    check L298() else D121();
  L297():
    r202 = dyn base22(<sym z>);
    goto L57(r202);
  L336():
    z27 = force? z26;
    checkMissing(z27);
    r217 = seq_along(z27);
    goto L69(r217);
  L350():
    by25 = ld by;
    check L352() else D138();
  L351():
    r223 = dyn base26(<sym by>);
    goto L75(r223);
  L359():
    r230 = dyn names__4(l23, NULL, r222);
    check L360() else D144();
  D118():
    deopt 387 [];
  D121():
    deopt 396 [z12];
  D138():
    deopt 461 [by25];
  D144():
    deopt 476 [r222, r230];
  L36(i21, dx21, dx22):
    grp2 = ld grp;
    check L216() else D76();
  L38(i31, c35):
    c45 = `as.logical`(c35);
    if c45 then L233() else L41();
  L58(i57):
    i58 = `+`.1(i57, 1);
    c55 = `<`.1(l15, i58);
    if c55 then L299() else L67();
  L73():
    x25 = `[[`(s2, i101, NULL, TRUE);
    st i = x25;
    z28 = ld z;
    check L338() else D134();
  L76(r227):
    c66 = ldf c in base;
    r229 = dyn c66(r224, r227);
    check L358() else D142();
  L212():
    dr12 = tryDispatchBuiltin.1("[[", lev1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L214() else L213(i12, dx11, dr12);
  L213(i19, dx18, lev3):
    i22 = ld i;
    check L215() else D75();
  L224():
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L225() else L226();
  L293():
    p44 = prom<V +>{
      unique1 = ldf unique;
      p43 = prom<V +>{
        grp12 = ld grp;
        grp13 = force? grp12;
        checkMissing(grp13);
        return grp13;
      };
      r198 = dyn unique1(p43);
      return r198;
    };
    r200 = dyn sort1(p44);
    check L294() else D119();
  L298():
    z13 = force? z12;
    checkMissing(z13);
    r204 = seq_along(z13);
    goto L57(r204);
  L337():
    goto L68();
  L352():
    by26 = force? by25;
    checkMissing(by26);
    names3 = ldf names in base;
    r225 = dyn names3(by26);
    check L353() else D139();
  L354():
    x26 = ld x;
    check L356() else D140();
  L355():
    r226 = dyn base27(<sym x>);
    goto L76(r226);
  L360():
    st y = r230;
    l24 = ld y;
    row_names__ = ldf `row.names<-`;
    check L361() else D145();
  D75():
    deopt 242 [i19, dx18, lev3, i22];
  D76():
    deopt 245 [i21, dx21, grp2];
  D119():
    deopt 389 [r200];
  D134():
    deopt 442 [i101, z28];
  D139():
    deopt 464 [r225];
  D140():
    deopt 467 [x26];
  D142():
    deopt 472 [r229];
  D145():
    deopt 481 [NULL, l24, NULL];
  L39(i34, c38, r130):
    c42 = `as.logical`(r130);
    c43 = `&&`(c38, c42);
    goto L38(i34, c43);
  L41():
    goto L44(i31);
  L44(i49):
    z6 = ld z;
    check L245() else D88();
  L67():
    x24 = `[[`(s1, i58, NULL, TRUE);
    st i = x24;
    sym23 = ldf `is.matrix`;
    base23 = ldf `is.matrix` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L300() else L301();
  L214():
    dx20 = getTryDispatchBuiltinValue(dr12);
    goto L36(i12, dx11, dx20);
  L215():
    i23 = force? i22;
    __4 = ldf `[[` in base;
    r123 = dyn __4(lev3, i23);
    goto L36(i19, dx18, r123);
  L216():
    grp3 = force? grp2;
    checkMissing(grp3);
    c32 = `is.object`(grp3);
    if c32 then L217() else L218(i21, dx21, grp3);
  L225():
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L227() else L228();
  L226():
    r129 = dyn base13(<lang `<-`(keep, is.na(z))>);
    goto L39(i14, c33, r129);
  L233():
    levels2 = ldf levels;
    check L234() else D84();
  L294():
    match2 = ldf match in base;
    r201 = dyn match2(lev9, r200, NA_INT, NULL);
    check L295() else D120();
  L299():
    goto L68();
  L338():
    z29 = force? z28;
    checkMissing(z29);
    c64 = `is.object`(z29);
    if c64 then L339() else L340(i101, z29);
  L353():
    goto L75(r225);
  L356():
    x27 = force? x26;
    checkMissing(x27);
    names4 = ldf names in base;
    r228 = dyn names4(x27);
    check L357() else D141();
  L358():
    goto L74(r229);
  L361():
    r231 = dyn row_names__(l24, NULL, NULL);
    check L362() else D146();
  D84():
    deopt 273 [i31];
  D88():
    deopt 286 [i49, z6];
  D120():
    deopt 393 [r201];
  D141():
    deopt 470 [r228];
  D146():
    deopt 483 [NULL, r231];
  L37(i27, dx27, dx28):
    match = ldf match in base;
    r125 = dyn match(dx22, dx28, NA_INT, NULL);
    check L221() else D78();
  L40(i37, c41, r132):
    st keep = r132;
    any1 = ldf any in base;
    r134 = dyn any1(r132);
    check L231() else D83();
  L59(i63, r206):
    c57 = `as.logical`(r206);
    if c57 then L308() else L61();
  L71(i107, dx63):
    l20 = ld y;
    c65 = `is.object`(l20);
    if c65 then L343() else L344(i107, dx63, l20);
  L217():
    dr14 = tryDispatchBuiltin.1("[[", grp3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L219() else L218(i21, dx21, dr14);
  L218(i25, dx24, grp5):
    i28 = ld i;
    check L220() else D77();
  L227():
    z2 = ld z;
    check L229() else D81();
  L228():
    r131 = dyn base14(<sym z>);
    goto L40(i14, c33, r131);
  L234():
    p27 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      return z5;
    };
    r136 = dyn levels2(p27);
    check L235() else D85();
  L245():
    z7 = force? z6;
    checkMissing(z7);
    l10 = ld y;
    c48 = `is.object`(l10);
    if c48 then L246() else L247(i49, z7, l10);
  L295():
    goto L56(r201);
  L300():
    z14 = ld z;
    check L302() else D122();
  L301():
    r205 = dyn base23(<lang `[[`(z, i)>);
    goto L59(i58, r205);
  L339():
    dr36 = tryDispatchBuiltin.1("[[", z29);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L341() else L340(i101, dr36);
  L340(i105, z31):
    i108 = ld i;
    check L342() else D135();
  L357():
    goto L76(r228);
  L362():
    st y = r231;
    y29 = ld y;
    check L363() else D147();
  D77():
    deopt 247 [i25, dx24, grp5, i28];
  D78():
    deopt 253 [i27, dx27, r125];
  D81():
    deopt 264 [i14, c33, z2];
  D83():
    deopt 270 [i37, c41, r134];
  D85():
    deopt 275 [i31, r136];
  D122():
    deopt 401 [i58, z14];
  D135():
    deopt 444 [i105, z31, i108];
  D147():
    deopt 485 [y29];
  L45(i53, dx39):
    st y = dx39;
    goto L32(i53);
  L61():
    z22 = ld z;
    check L319() else D128();
  L64(i82, dx50):
    l16 = ld y;
    c62 = `is.object`(l16);
    if c62 then L328() else L329(i82, dx50, l16);
  L72(i113, dx69):
    st y = dx69;
    goto L70(i113);
  L219():
    dx26 = getTryDispatchBuiltinValue(dr14);
    goto L37(i21, dx21, dx26);
  L220():
    i29 = force? i28;
    __5 = ldf `[[` in base;
    r124 = dyn __5(grp5, i29);
    goto L37(i25, dx24, r124);
  L221():
    goto L35(i27, dx27, r125);
  L229():
    z3 = force? z2;
    checkMissing(z3);
    is_na = ldf `is.na` in base;
    r133 = dyn is_na(z3);
    check L230() else D82();
  L231():
    goto L39(i37, c41, r134);
  L235():
    c46 = `is.object`(r136);
    if c46 then L236() else L237(i31, r136);
  L246():
    dr20 = tryDispatchBuiltin.0("[[<-", l10, z7);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L248() else L247(i49, z7, dr20);
  L247(i51, z9, l12):
    i54 = ld i;
    check L249() else D89();
  L302():
    z15 = force? z14;
    checkMissing(z15);
    c56 = `is.object`(z15);
    if c56 then L303() else L304(i58, z15);
  L308():
    z18 = ld z;
    check L309() else D125();
  L341():
    dx62 = getTryDispatchBuiltinValue(dr36);
    goto L71(i101, dx62);
  L342():
    i109 = force? i108;
    __14 = ldf `[[` in base;
    r218 = dyn __14(z31, i109);
    goto L71(i105, r218);
  L343():
    dr38 = tryDispatchBuiltin.0("[[<-", l20, dx63);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L345() else L344(i107, dx63, dr38);
  L344(i111, dx65, l22):
    len2 = ld len;
    check L346() else D136();
  L363():
    y30 = force? y29;
    checkMissing(y30);
    popenv;
    return y30;
  D82():
    deopt 267 [i14, c33, r133];
  D89():
    deopt 289 [i51, z9, l12, z7, i54];
  D125():
    deopt 408 [i63, z18];
  D128():
    deopt 420 [i63, z22];
  D136():
    deopt 448 [i111, dx65, l22, dx63, len2];
  L42(i44, dx30):
    l7 = ld z;
    c47 = `is.object`(l7);
    if c47 then L240() else L241(i44, dx30, l7);
  L60(i67, dx43):
    is_matrix = ldf `is.matrix` in base;
    r208 = dyn is_matrix(dx43);
    check L307() else D124();
  L66(i95, dx61):
    st y = dx61;
    goto L58(i95);
  L230():
    goto L40(i14, c33, r133);
  L236():
    dr16 = tryDispatchBuiltin.1("[", r136);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L238() else L237(i31, dr16);
  L237(i42, r138):
    keep4 = ld keep;
    check L239() else D86();
  L248():
    dx38 = getTryDispatchBuiltinValue(dr20);
    goto L45(i49, dx38);
  L249():
    i55 = force? i54;
    ____ = ldf `[[<-` in base;
    r141 = dyn ____(l12, z7, i55);
    goto L45(i51, r141);
  L303():
    dr24 = tryDispatchBuiltin.1("[[", z15);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L305() else L304(i58, dr24);
  L304(i65, z17):
    i68 = ld i;
    check L306() else D123();
  L309():
    z19 = force? z18;
    checkMissing(z19);
    c58 = `is.object`(z19);
    if c58 then L310() else L311(i63, z19);
  L319():
    z23 = force? z22;
    checkMissing(z23);
    c60 = `is.object`(z23);
    if c60 then L320() else L321(i63, z23);
  L328():
    dr34 = tryDispatchBuiltin.0("[[<-", l16, dx50);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L330() else L329(i82, dx50, dr34);
  L329(i93, dx57, l18):
    len = ld len;
    check L331() else D131();
  L345():
    dx67 = getTryDispatchBuiltinValue(dr38);
    goto L72(i107, dx67);
  L346():
    len3 = force? len2;
    checkMissing(len3);
    i114 = ld i;
    check L347() else D137();
  D86():
    deopt 276 [i42, r138, keep4];
  D123():
    deopt 403 [i65, z17, i68];
  D124():
    deopt 407 [i67, r208];
  D131():
    deopt 429 [i93, dx57, l18, dx50, len];
  D137():
    deopt 449 [i111, dx65, l22, dx63, len3, i114];
  L43(i48, dx35, dx36):
    st z = dx36;
    goto L44(i48);
  L62(i75, dx45):
    c59 = `is.object`(dx45);
    if c59 then L314() else L315(i75, dx45);
  L65(i86, dx52):
    c61 = `is.object`(dx52);
    if c61 then L324() else L325(i86, dx52);
  L238():
    dx29 = getTryDispatchBuiltinValue(dr16);
    goto L42(i31, dx29);
  L239():
    keep5 = force? keep4;
    __7 = ldf `[` in base;
    r139 = dyn __7(r138, keep5);
    goto L42(i42, r139);
  L240():
    dr18 = tryDispatchBuiltin.0("[<-", l7, dx30);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L242() else L241(i44, dx30, dr18);
  L241(i46, dx32, l9):
    keep6 = ld keep;
    check L243() else D87();
  L305():
    dx42 = getTryDispatchBuiltinValue(dr24);
    goto L60(i58, dx42);
  L306():
    i69 = force? i68;
    __9 = ldf `[[` in base;
    r207 = dyn __9(z17, i69);
    goto L60(i65, r207);
  L307():
    goto L59(i67, r208);
  L310():
    dr26 = tryDispatchBuiltin.1("[[", z19);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L312() else L311(i63, dr26);
  L311(i73, z21):
    i76 = ld i;
    check L313() else D126();
  L320():
    dr30 = tryDispatchBuiltin.1("[[", z23);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L322() else L321(i63, dr30);
  L321(i84, z25):
    i87 = ld i;
    check L323() else D129();
  L330():
    dx59 = getTryDispatchBuiltinValue(dr34);
    goto L66(i82, dx59);
  L331():
    len1 = force? len;
    checkMissing(len1);
    i96 = ld i;
    check L332() else D132();
  L347():
    i115 = force? i114;
    checkMissing(i115);
    r219 = `+`(len3, i115);
    ____2 = ldf `[[<-` in base;
    r220 = dyn ____2(l22, dx63, r219);
    goto L72(i111, r220);
  D87():
    deopt 280 [i46, dx32, l9, dx30, keep6];
  D126():
    deopt 410 [i73, z21, i76];
  D129():
    deopt 422 [i84, z25, i87];
  D132():
    deopt 430 [i93, dx57, l18, dx50, len1, i96];
  L63(i81, dx49):
    goto L64(i81, dx49);
  L242():
    dx34 = getTryDispatchBuiltinValue(dr18);
    goto L43(i44, dx30, dx34);
  L243():
    keep7 = force? keep6;
    ___1 = ldf `[<-` in base;
    r140 = dyn ___1(l9, dx30, keep7);
    goto L43(i46, dx32, r140);
  L312():
    dx44 = getTryDispatchBuiltinValue(dr26);
    goto L62(i63, dx44);
  L313():
    i77 = force? i76;
    __10 = ldf `[[` in base;
    r209 = dyn __10(z21, i77);
    goto L62(i73, r209);
  L314():
    dr28 = tryDispatchBuiltin.1("[", dx45);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L316() else L315(i75, dr28);
  L315(i79, dx47):
    keep8 = ld keep;
    check L317() else D127();
  L322():
    dx51 = getTryDispatchBuiltinValue(dr30);
    goto L65(i63, dx51);
  L323():
    i88 = force? i87;
    __12 = ldf `[[` in base;
    r211 = dyn __12(z25, i88);
    goto L65(i84, r211);
  L324():
    dr32 = tryDispatchBuiltin.1("[", dx52);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L326() else L325(i86, dr32);
  L325(i90, dx54):
    keep10 = ld keep;
    check L327() else D130();
  L332():
    i97 = force? i96;
    checkMissing(i97);
    r213 = `+`(len1, i97);
    ____1 = ldf `[[<-` in base;
    r214 = dyn ____1(l18, dx50, r213);
    goto L66(i93, r214);
  D127():
    deopt 413 [i79, dx47, keep8];
  D130():
    deopt 425 [i90, dx54, keep10];
  L316():
    dx48 = getTryDispatchBuiltinValue(dr28);
    goto L63(i75, dx48);
  L317():
    keep9 = force? keep8;
    __11 = ldf `[` in base;
    r210 = dyn __11(dx45, keep9, <missing>, FALSE);
    goto L63(i79, r210);
  L326():
    dx55 = getTryDispatchBuiltinValue(dr32);
    goto L64(i86, dx55);
  L327():
    keep11 = force? keep10;
    __13 = ldf `[` in base;
    r212 = dyn __13(dx54, keep11);
    goto L64(i90, r212);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:* |
    mkenv;
    st x = x;
    popenv;
    return 0;
  }
}
fun inner1679555528(L) {
  (reg L:*) -+> V { var L:*, reg expand_grid:cls, reg L1:*, reg L2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st L = L;
    expand_grid = ldf `expand.grid`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      L1 = ld L;
      L2 = force? L1;
      checkMissing(L2);
      return L2;
    };
    r1 = dyn expand_grid[, `KEEP.OUT.ATTRS`, stringsAsFactors](p, FALSE, FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg lapply:cls, reg unname:cls, reg split:cls, reg e1:*, reg e2:V, reg p:p(V +), reg grp:*, reg grp1:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg FUN:*, reg FUN1:V, reg p4:p(V +), reg ddd:*, reg r7:V, reg simplify:*, reg simplify1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg c5:L, reg r9:V, reg unique:cls, reg lengths:cls, reg ans:*, reg ans1:V, reg p5:p(V +), reg r11:V, reg p6:p(V +), reg r13:V, reg length:cls, reg r14:V, reg r15:V, reg c6:L, reg c7:V, reg c9:L, reg len:*, reg len1:V, reg r16:V, reg c10:L, reg lapply1:cls, reg ans2:*, reg ans3:V, reg p7:p(V +), reg oldClass:*, reg oldClass1:V, reg p8:p(V +), reg r19:V, reg cl:*, reg cl1:V, reg c11:L, reg cl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg cl4:*, reg cl5:V, reg c12:V, reg r23:V, reg c13:L, reg c15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg c18:L, reg r25:V, reg vapply:cls, reg cl6:*, reg cl7:V, reg p9:p(V +), reg identical:*, reg identical1:V, reg p10:p(V +), reg cl8:*, reg cl9:V, reg p11:p(V +), reg r29:V, reg all:cls, reg r30:V, reg c19:L, reg c20:V, reg c22:L, reg do_call:cls, reg c23:*, reg c24:V, reg p12:p(V +), reg ans4:*, reg ans5:V, reg p13:p(V +), reg r33:V, reg r34:V, reg unlist:cls, reg ans6:*, reg ans7:V, reg p14:p(V +), reg r36:V, reg r37:V, reg len2:*, reg len3:V, reg r38:V, reg c25:L, reg matrix:cls, reg unlist1:cls, reg ans8:*, reg ans9:V, reg p15:p(V +), reg r40:V, reg p16:p(V +), reg len4:*, reg len5:V, reg p17:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r43:V, reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg ans10:*, reg ans11:V, reg c26:L, reg ans13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r47:V, reg names:cls, reg r48:V, reg c27:V, reg r49:V, reg c28:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg nms:*, reg nms1:V, reg list:cls, reg r52:V, reg p18:p(V +), reg r54:V, reg ans14:*, reg ans15:V |
    mkenv;
    st e = e;
    lapply = ldf lapply;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p3 = prom<V +>{
      unname = ldf unname;
      p2 = prom<V +>{
        split = ldf split;
        p = prom<V +>{
          e1 = ld e;
          e2 = force? e1;
          checkMissing(e2);
          return e2;
        };
        p1 = prom<V +>{
          grp = ld grp;
          grp1 = force? grp;
          checkMissing(grp1);
          return grp1;
        };
        r2 = dyn split(p, p1);
        return r2;
      };
      r4 = dyn unname(p2);
      return r4;
    };
    p4 = prom<V +>{
      FUN = ld FUN;
      FUN1 = force? FUN;
      checkMissing(FUN1);
      return FUN1;
    };
    ddd = ld `...`;
    r7 = dyn lapply[X, FUN, `...`](p3, p4, ddd);
    check L14() else D1();
  D1():
    deopt 7 [r7];
  L14():
    st ans = r7;
    simplify = ld simplify;
    check L15() else D2();
  D2():
    deopt 9 [simplify];
  L15():
    simplify1 = force? simplify;
    checkMissing(simplify1);
    c = `as.logical`(simplify1);
    if c then L16() else L0(c);
  L0(c2):
    c9 = `as.logical`(c2);
    if c9 then L23() else L2();
  L16():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L1(c5, r9):
    r15 = `==`(r9, 1);
    c6 = `as.logical`(r15);
    c7 = `&&`(c5, c6);
    goto L0(c7);
  L2():
    goto L12();
  L12():
    ans14 = ld ans;
    check L55() else D21();
  L17():
    unique = ldf unique;
    check L19() else D3();
  L18():
    r8 = dyn base(<lang `<-`(len, unique(lengths(ans)))>);
    goto L1(c, r8);
  L23():
    len = ld len;
    check L24() else D6();
  D3():
    deopt 14 [c];
  D6():
    deopt 23 [len];
  D21():
    deopt 90 [ans14];
  L19():
    p6 = prom<V +>{
      lengths = ldf lengths;
      p5 = prom<V +>{
        ans = ld ans;
        ans1 = force? ans;
        checkMissing(ans1);
        return ans1;
      };
      r11 = dyn lengths(p5);
      return r11;
    };
    r13 = dyn unique(p6);
    check L20() else D4();
  L24():
    len1 = force? len;
    checkMissing(len1);
    r16 = `==`(len1, 1);
    c10 = `as.logical`(r16);
    if c10 then L25() else L3();
  L55():
    ans15 = force? ans14;
    checkMissing(ans15);
    popenv;
    return ans15;
  D4():
    deopt 16 [c, r13];
  L3():
    len2 = ld len;
    check L49() else D18();
  L10(r37):
    goto L12();
  L20():
    st len = r13;
    length = ldf length in base;
    r14 = dyn length(r13);
    check L21() else D5();
  L25():
    lapply1 = ldf lapply;
    check L26() else D7();
  D5():
    deopt 19 [c, r14];
  D7():
    deopt 28 [];
  D18():
    deopt 71 [len2];
  L21():
    goto L1(c, r14);
  L26():
    p7 = prom<V +>{
      ans2 = ld ans;
      ans3 = force? ans2;
      checkMissing(ans3);
      return ans3;
    };
    p8 = prom<V +>{
      oldClass = ld oldClass;
      oldClass1 = force? oldClass;
      checkMissing(oldClass1);
      return oldClass1;
    };
    r19 = dyn lapply1(p7, p8);
    check L27() else D8();
  L49():
    len3 = force? len2;
    checkMissing(len3);
    r38 = `>`(len3, 1);
    c25 = `as.logical`(r38);
    if c25 then L50() else L11();
  D8():
    deopt 31 [r19];
  L11():
    goto L10(NULL);
  L27():
    st cl = r19;
    cl = ld cl;
    check L28() else D9();
  L50():
    matrix = ldf matrix;
    check L51() else D19();
  D9():
    deopt 33 [cl];
  D19():
    deopt 76 [];
  L28():
    cl1 = force? cl;
    checkMissing(cl1);
    c11 = `is.object`(cl1);
    if c11 then L29() else L30(cl1);
  L51():
    p16 = prom<V +>{
      unlist1 = ldf unlist;
      p15 = prom<V +>{
        ans8 = ld ans;
        ans9 = force? ans8;
        checkMissing(ans9);
        return ans9;
      };
      r40 = dyn unlist1[, recursive, `use.names`](p15, FALSE, FALSE);
      return r40;
    };
    p17 = prom<V +>{
      len4 = ld len;
      len5 = force? len4;
      checkMissing(len5);
      return len5;
    };
    p18 = prom<V +>{
      sym3 = ldf `is.null`;
      base3 = ldf `is.null` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L0(r44):
      r49 = `!`(r44);
      c28 = `as.logical`(r49);
      if c28 then L12() else L3();
    L5():
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L7() else L8();
    L6():
      r43 = dyn base3(<lang `<-`(nms, names(`[[`(ans, 1)))>);
      goto L0(r43);
    L1(r46):
      st nms = r46;
      c27 = `==`(r46, NULL);
      goto L0(c27);
    L3():
      invisible.0();
      return NULL;
    L7():
      ans10 = ld ans;
      ans11 = force? ans10;
      checkMissing(ans11);
      c26 = `is.object`(ans11);
      if c26 then L9() else L10(ans11);
    L8():
      r45 = dyn base4(<lang `[[`(ans, 1)>);
      goto L1(r45);
    L12():
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L13() else L14();
    L2(dx3):
      names = ldf names in base;
      r48 = dyn names(dx3);
      goto L1(r48);
    L4(r51):
      return r51;
    L9():
      dr2 = tryDispatchBuiltin.1("[[", ans11);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L11() else L10(dr2);
    L10(ans13):
      __1 = ldf `[[` in base;
      r47 = dyn __1(ans13, 1);
      goto L2(r47);
    L13():
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      list = ldf list in base;
      r52 = dyn list(NULL, nms1);
      goto L4(r52);
    L14():
      r50 = dyn base5(NULL, <sym nms>);
      goto L4(r50);
    L11():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L2(dx2);
    };
    r54 = dyn matrix[, ncol, byrow, dimnames](p16, p17, TRUE, p18);
    check L52() else D20();
  D20():
    deopt 84 [r54];
  L4(dx1):
    st cl1 = dx1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L29():
    dr = tryDispatchBuiltin.1("[[", cl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(cl3):
    __ = ldf `[[` in base;
    r20 = dyn __(cl3, 1);
    goto L4(r20);
  L52():
    st ans = r54;
    goto L10(r54);
  L5(r22):
    r23 = `!`(r22);
    c13 = `as.logical`(r23);
    if c13 then L35() else L6(c13);
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L32():
    cl4 = ld cl1;
    check L34() else D10();
  L33():
    r21 = dyn base1(<sym cl1>);
    goto L5(r21);
  D10():
    deopt 40 [cl4];
  L6(c15):
    c22 = `as.logical`(c15);
    if c22 then L42() else L8();
  L34():
    cl5 = force? cl4;
    checkMissing(cl5);
    c12 = `==`(cl5, NULL);
    goto L5(c12);
  L35():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L7(c18, r25):
    c19 = `as.logical`(r25);
    c20 = `&&`(c18, c19);
    goto L6(c20);
  L8():
    unlist = ldf unlist;
    check L46() else D16();
  L9(r34):
    st ans = r34;
    goto L10(r34);
  L36():
    vapply = ldf vapply;
    check L38() else D11();
  L37():
    r24 = dyn base2(<lang vapply(cl, identical, NA_LGL, y=cl1)>);
    goto L7(c13, r24);
  L42():
    do_call = ldf `do.call`;
    check L43() else D14();
  D11():
    deopt 47 [c13];
  D14():
    deopt 58 [];
  D16():
    deopt 63 [];
  L38():
    p9 = prom<V +>{
      cl6 = ld cl;
      cl7 = force? cl6;
      checkMissing(cl7);
      return cl7;
    };
    p10 = prom<V +>{
      identical = ld identical;
      identical1 = force? identical;
      checkMissing(identical1);
      return identical1;
    };
    p11 = prom<V +>{
      cl8 = ld cl1;
      cl9 = force? cl8;
      checkMissing(cl9);
      return cl9;
    };
    r29 = dyn vapply[, , , y](p9, p10, NA_LGL, p11);
    check L39() else D12();
  L43():
    p12 = prom<V +>{
      c23 = ld c;
      c24 = force? c23;
      checkMissing(c24);
      return c24;
    };
    p13 = prom<V +>{
      ans4 = ld ans;
      ans5 = force? ans4;
      checkMissing(ans5);
      return ans5;
    };
    r33 = dyn do_call(p12, p13);
    check L44() else D15();
  L46():
    p14 = prom<V +>{
      ans6 = ld ans;
      ans7 = force? ans6;
      checkMissing(ans7);
      return ans7;
    };
    r36 = dyn unlist[, recursive, `use.names`](p14, FALSE, FALSE);
    check L47() else D17();
  D12():
    deopt 53 [c13, r29];
  D15():
    deopt 61 [r33];
  D17():
    deopt 69 [r36];
  L39():
    all = ldf all in base;
    r30 = dyn all(r29);
    check L40() else D13();
  L44():
    goto L9(r33);
  L47():
    goto L9(r36);
  D13():
    deopt 55 [c13, r30];
  L40():
    goto L7(c13, r30);
  }
}