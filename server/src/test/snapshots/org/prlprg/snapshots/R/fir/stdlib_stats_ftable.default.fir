fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2878520484;
    st `ftable.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2878520484(`...`, exclude, `row.vars`, `col.vars`) {
  (reg ddd:dots, reg exclude:*, reg row_vars:*, reg col_vars:*) -+> V { var `...`:dots?, var exclude:*, reg exclude_isMissing:L, reg exclude_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `row.vars`:*, reg row_vars_isMissing:L, reg row_vars_orDefault:*, var `col.vars`:*, reg col_vars_isMissing:L, reg col_vars_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg list:cls, reg ddd1:dots?, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg args:*, reg args1:V, reg length:cls, reg r9:V, reg r10:V, reg c1:L, reg stop:cls, reg r11:V, reg args2:*, reg args3:V, reg c2:L, reg args5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg x:*, reg x1:V, reg is_list:cls, reg r16:V, reg c3:L, reg table:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg exclude1:*, reg exclude2:V, reg p2:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg x4:*, reg x5:V, reg inherits:cls, reg r23:V, reg c4:L, reg c5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg c9:L, reg r25:V, reg x6:*, reg x7:V, reg is_array:cls, reg r26:V, reg c10:L, reg c13:L, reg c14:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg c19:L, reg c20:L, reg r28:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg c25:L, reg c26:L, reg r30:V, reg x8:*, reg x9:V, reg dim:cls, reg r31:V, reg length1:cls, reg r32:V, reg r33:V, reg c27:L, reg c28:V, reg c31:L, reg c32:V, reg c34:L, reg as_table:cls, reg x10:*, reg x11:V, reg p3:p(V +), reg r35:V, reg arr2:*, reg arr3:V, reg r36:V, reg c35:L, reg table1:cls, reg ddd2:dots?, reg exclude3:*, reg exclude4:V, reg p4:p(V +), reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg x12:*, reg x13:V, reg dimnames:cls, reg r41:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r42:V, reg r43:V, reg x14:*, reg x15:V, reg dim1:cls, reg r44:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r45:V, reg r46:V, reg dx2:*, reg dx3:V, reg length2:cls, reg r47:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r48:V, reg r49:V, reg row_vars1:*, reg row_vars2:V, reg c36:V, reg r50:V, reg c37:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r51:V, reg r52:V, reg row_vars3:*, reg row_vars4:V, reg c38:L, reg c39:L, reg pmatch:cls, reg row_vars5:*, reg row_vars6:V, reg p5:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r54:V, reg r55:V, reg dn:*, reg dn1:V, reg names:cls, reg r56:V, reg p6:p(V +), reg r58:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r59:V, reg r60:V, reg i:*, reg i1:V, reg anyNA:cls, reg r61:V, reg c40:L, reg stop1:cls, reg r62:V, reg i2:*, reg i3:V, reg i4:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r64:V, reg r65:V, reg row_vars7:*, reg row_vars8:V, reg r66:V, reg row_vars9:*, reg row_vars10:V, reg n:*, reg n1:V, reg r67:V, reg r68:V, reg any:cls, reg r69:V, reg c41:L, reg stop2:cls, reg r70:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r71:V, reg r72:V, reg col_vars1:*, reg col_vars2:V, reg c42:V, reg r73:V, reg c43:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r74:V, reg r75:V, reg col_vars3:*, reg col_vars4:V, reg c44:L, reg c45:L, reg pmatch1:cls, reg col_vars5:*, reg col_vars6:V, reg p7:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r77:V, reg r78:V, reg dn2:*, reg dn3:V, reg names1:cls, reg r79:V, reg p8:p(V +), reg r81:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r82:V, reg r83:V, reg i6:*, reg i7:V, reg anyNA1:cls, reg r84:V, reg c46:L, reg stop3:cls, reg r85:V, reg i8:*, reg i9:V, reg i10:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r87:V, reg r88:V, reg col_vars7:*, reg col_vars8:V, reg r89:V, reg col_vars9:*, reg col_vars10:V, reg n2:*, reg n3:V, reg r90:V, reg r91:V, reg any1:cls, reg r92:V, reg c47:L, reg stop4:cls, reg r93:V, reg n4:*, reg n5:V, reg r94:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r95:V, reg r96:V, reg row_vars11:*, reg row_vars12:V, reg c48:V, reg r97:V, reg c49:L, reg c51:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r98:V, reg c54:L, reg r99:V, reg col_vars11:*, reg col_vars12:V, reg c55:V, reg r100:V, reg c56:L, reg c57:V, reg c59:L, reg sort:cls, reg sym23:cls, reg base23:cls, reg guard23:L, reg r101:V, reg r102:V, reg row_vars13:*, reg row_vars14:V, reg col_vars13:*, reg col_vars14:V, reg c60:cls, reg r103:V, reg p9:p(V +), reg r105:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r106:V, reg r107:V, reg all_vars:*, reg all_vars1:V, reg length3:cls, reg r108:V, reg n6:*, reg n7:V, reg r109:V, reg c61:L, reg p10:*, reg p11:V, reg c62:L, reg apply:cls, reg x16:*, reg x17:V, reg p12:p(V +), reg all_vars2:*, reg all_vars3:V, reg p13:p(V +), reg sum:*, reg sum1:V, reg p14:p(V +), reg r113:V, reg r114:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r115:V, reg x18:*, reg x19:V, reg sum2:cls, reg r116:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r117:V, reg r118:V, reg row_vars15:*, reg row_vars16:V, reg all_vars4:*, reg all_vars5:V, reg match:cls, reg r119:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r120:V, reg r121:V, reg col_vars15:*, reg col_vars16:V, reg all_vars6:*, reg all_vars7:V, reg match1:cls, reg r122:V, reg dn4:*, reg dn5:V, reg c63:L, reg dn7:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg all_vars8:*, reg all_vars9:V, reg __1:cls, reg r123:V, reg dx6:*, reg dx7:V, reg c64:L, reg dx9:V, reg dr4:V, reg dc2:L, reg dx10:V, reg dx11:V, reg all_vars10:*, reg all_vars11:V, reg __2:cls, reg r124:V, reg dx12:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r125:V, reg r126:V, reg row_vars17:*, reg row_vars18:V, reg c65:V, reg r127:V, reg c66:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r128:V, reg r129:V, reg row_vars19:*, reg row_vars20:V, reg length4:cls, reg r130:V, reg c67:L, reg i12:*, reg i13:V, reg c68:L, reg i15:V, reg dr6:V, reg dc3:L, reg dx14:V, reg dx15:V, reg row_vars21:*, reg row_vars22:V, reg r131:V, reg __3:cls, reg r132:V, reg dx16:V, reg i16:*, reg i17:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r133:V, reg r134:V, reg col_vars17:*, reg col_vars18:V, reg c69:V, reg r135:V, reg c70:L, reg sym31:cls, reg base31:cls, reg guard31:L, reg r136:V, reg r137:V, reg col_vars19:*, reg col_vars20:V, reg length5:cls, reg r138:V, reg c71:L, reg i18:*, reg i19:V, reg c72:L, reg i21:V, reg dr8:V, reg dc4:L, reg dx17:V, reg dx18:V, reg col_vars21:*, reg col_vars22:V, reg r139:V, reg __4:cls, reg r140:V, reg dx19:V, reg i22:*, reg i23:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r141:V, reg r142:V, reg n8:*, reg n9:V, reg r143:V, reg r144:I, reg n10:*, reg n11:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r145:V, reg r146:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r147:V, reg r148:V, reg rev:cls, reg row_vars23:*, reg row_vars24:V, reg p15:p(V +), reg r150:V, reg rev1:cls, reg col_vars23:*, reg col_vars24:V, reg p16:p(V +), reg r152:V, reg c73:cls, reg r153:V, reg length6:cls, reg r154:V, reg r155:V, reg c74:L, reg aperm:cls, reg x20:*, reg x21:V, reg p17:p(V +), reg perm:*, reg perm1:V, reg p18:p(V +), reg r158:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r160:V, reg r161:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r162:V, reg r163:V, reg dx20:*, reg dx21:V, reg c75:L, reg dx23:V, reg dr10:V, reg dc5:L, reg dx24:V, reg dx25:V, reg row_vars25:*, reg row_vars26:V, reg __5:cls, reg r164:V, reg prod:cls, reg r165:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r166:V, reg r167:V, reg dx26:*, reg dx27:V, reg c76:L, reg dx29:V, reg dr12:V, reg dc6:L, reg dx30:V, reg dx31:V, reg col_vars25:*, reg col_vars26:V, reg __6:cls, reg r168:V, reg prod1:cls, reg r169:V, reg c77:cls, reg r170:V, reg l:*, reg dim__:cls, reg r171:V, reg dn8:*, reg dn9:V, reg c78:L, reg dn11:V, reg dr14:V, reg dc7:L, reg dx32:V, reg dx33:V, reg row_vars27:*, reg row_vars28:V, reg __7:cls, reg r172:V, reg l1:*, reg attr__:cls, reg r173:V, reg dn12:*, reg dn13:V, reg c79:L, reg dn15:V, reg dr16:V, reg dc8:L, reg dx34:V, reg dx35:V, reg col_vars27:*, reg col_vars28:V, reg __8:cls, reg r174:V, reg l2:*, reg attr__1:cls, reg r175:V, reg l3:*, reg class__:cls, reg r176:V, reg x22:*, reg x23:V |
    mkenv;
    st `...` = ddd;
    exclude_isMissing = missing.0(exclude);
    if exclude_isMissing then L0() else L1(exclude);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(NA_LGL, NA_REAL);
      goto L0(r2);
    L2():
      r = dyn base(NA_LGL, NA_REAL);
      goto L0(r);
    };
    goto L1(p);
  L1(exclude_orDefault):
    st exclude = exclude_orDefault;
    row_vars_isMissing = missing.0(row_vars);
    if row_vars_isMissing then L2(NULL) else L2(row_vars);
  L2(row_vars_orDefault):
    st `row.vars` = row_vars_orDefault;
    col_vars_isMissing = missing.0(col_vars);
    if col_vars_isMissing then L3(NULL) else L3(col_vars);
  L3(col_vars_orDefault):
    st `col.vars` = col_vars_orDefault;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L83() else L84();
  L4(r5):
    st args = r5;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L87() else L88();
  L83():
    list = ldf list;
    check L85() else D0();
  L84():
    r4 = dyn base1(<sym ...>);
    goto L4(r4);
  D0():
    deopt 2 [];
  L5(r8):
    r10 = `==`(r8, 0);
    c1 = `as.logical`(r10);
    if c1 then L91() else L6();
  L85():
    ddd1 = ld `...`;
    r6 = dyn list[`...`](ddd1);
    check L86() else D1();
  L87():
    args = ld args;
    check L89() else D2();
  L88():
    r7 = dyn base2(<sym args>);
    goto L5(r7);
  D1():
    deopt 4 [r6];
  D2():
    deopt 8 [args];
  L6():
    goto L7();
  L7():
    args2 = ld args;
    check L95() else D6();
  L86():
    goto L4(r6);
  L89():
    args1 = force? args;
    checkMissing(args1);
    length = ldf length in base;
    r9 = dyn length(args1);
    check L90() else D3();
  L91():
    stop = ldf stop;
    check L92() else D4();
  D3():
    deopt 11 [r9];
  D4():
    deopt 15 [];
  D6():
    deopt 20 [args2];
  L90():
    goto L5(r9);
  L92():
    r11 = dyn stop("nothing to tabulate");
    check L93() else D5();
  L95():
    args3 = force? args2;
    checkMissing(args3);
    c2 = `is.object`(args3);
    if c2 then L96() else L97(args3);
  D5():
    deopt 17 [r11];
  L8(dx1):
    st x = dx1;
    sym3 = ldf `is.list`;
    base3 = ldf `is.list` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L99() else L100();
  L93():
    goto L7();
  L96():
    dr = tryDispatchBuiltin.1("[[", args3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L98() else L97(dr);
  L97(args5):
    __ = ldf `[[` in base;
    r13 = dyn __(args5, 1);
    goto L8(r13);
  L9(r15):
    c3 = `as.logical`(r15);
    if c3 then L103() else L10();
  L98():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L99():
    x = ld x;
    check L101() else D7();
  L100():
    r14 = dyn base3(<sym x>);
    goto L9(r14);
  D7():
    deopt 28 [x];
  L10():
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L107() else L108();
  L11():
    sym8 = ldf dimnames;
    base8 = ldf dimnames in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L135() else L136();
  L101():
    x1 = force? x;
    checkMissing(x1);
    is_list = ldf `is.list` in base;
    r16 = dyn is_list(x1);
    check L102() else D8();
  L103():
    table = ldf table;
    check L104() else D9();
  D8():
    deopt 31 [r16];
  D9():
    deopt 33 [];
  L12(r22):
    c4 = `as.logical`(r22);
    if c4 then L13(c4) else L111();
  L20(r40):
    st dn = r40;
    sym9 = ldf dim;
    base9 = ldf dim in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L139() else L140();
  L102():
    goto L9(r16);
  L104():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p2 = prom<V +>{
      exclude1 = ld exclude;
      exclude2 = force? exclude1;
      checkMissing(exclude2);
      return exclude2;
    };
    r19 = dyn table[, exclude](p1, p2);
    check L105() else D10();
  L107():
    x4 = ld x;
    check L109() else D11();
  L108():
    r21 = dyn base4(<sym x>, "ftable");
    goto L12(r21);
  L135():
    x12 = ld x;
    check L137() else D23();
  L136():
    r39 = dyn base8(<sym x>);
    goto L20(r39);
  D10():
    deopt 37 [r19];
  D11():
    deopt 41 [x4];
  D23():
    deopt 87 [x12];
  L13(c5):
    c34 = `as.logical`(c5);
    if c34 then L126() else L18();
  L21(r43):
    st dx = r43;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L143() else L144();
  L105():
    st x = r19;
    goto L11();
  L109():
    x5 = force? x4;
    checkMissing(x5);
    inherits = ldf inherits in base;
    r23 = dyn inherits(x5, "ftable", FALSE);
    check L110() else D12();
  L111():
    sym5 = ldf `is.array`;
    base5 = ldf `is.array` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L112() else L113();
  L137():
    x13 = force? x12;
    checkMissing(x13);
    dimnames = ldf dimnames in base;
    r41 = dyn dimnames(x13);
    check L138() else D24();
  L139():
    x14 = ld x;
    check L141() else D25();
  L140():
    r42 = dyn base9(<sym x>);
    goto L21(r42);
  D12():
    deopt 46 [r23];
  D24():
    deopt 90 [r41];
  D25():
    deopt 94 [x14];
  L14(c9, r25):
    c10 = `as.logical`(r25);
    if c10 then L116() else L15(c9, c10);
  L18():
    arr2 = ld arr2;
    check L130() else D20();
  L22(r46):
    st n = r46;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L147() else L148();
  L110():
    goto L12(r23);
  L112():
    x6 = ld x;
    check L114() else D13();
  L113():
    r24 = dyn base5(<sym x>);
    goto L14(c4, r24);
  L126():
    as_table = ldf `as.table`;
    check L127() else D18();
  L138():
    goto L20(r41);
  L141():
    x15 = force? x14;
    checkMissing(x15);
    dim1 = ldf dim in base;
    r44 = dyn dim1(x15);
    check L142() else D26();
  L143():
    dx2 = ld dx;
    check L145() else D27();
  L144():
    r45 = dyn base10(<sym dx>);
    goto L22(r45);
  D13():
    deopt 49 [c4, x6];
  D18():
    deopt 69 [];
  D20():
    deopt 73 [arr2];
  D26():
    deopt 97 [r44];
  D27():
    deopt 101 [dx2];
  L15(c13, c14):
    st arr2 = c14;
    c31 = `as.logical`(c14);
    c32 = `||`(c13, c31);
    goto L13(c32);
  L23(r49):
    r50 = `!`(r49);
    c37 = `as.logical`(r50);
    if c37 then L150() else L24();
  L114():
    x7 = force? x6;
    checkMissing(x7);
    is_array = ldf `is.array` in base;
    r26 = dyn is_array(x7);
    check L115() else D14();
  L116():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L117() else L118();
  L127():
    p3 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r35 = dyn as_table(p3);
    check L128() else D19();
  L130():
    arr3 = force? arr2;
    checkMissing(arr3);
    r36 = `!`(arr3);
    c35 = `as.logical`(r36);
    if c35 then L131() else L19();
  L142():
    goto L21(r44);
  L145():
    dx3 = force? dx2;
    checkMissing(dx3);
    length2 = ldf length in base;
    r47 = dyn length2(dx3);
    check L146() else D28();
  L147():
    row_vars1 = ld `row.vars`;
    check L149() else D29();
  L148():
    r48 = dyn base11(<sym row.vars>);
    goto L23(r48);
  D14():
    deopt 52 [c4, r26];
  D19():
    deopt 71 [r35];
  D28():
    deopt 104 [r47];
  D29():
    deopt 107 [row_vars1];
  L16(c19, c20, r28):
    r33 = `>`(r28, 1);
    c27 = `as.logical`(r33);
    c28 = `&&`(c20, c27);
    goto L15(c19, c28);
  L19():
    goto L11();
  L24():
    goto L33();
  L33():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L178() else L179();
  L115():
    goto L14(c4, r26);
  L117():
    sym7 = ldf dim;
    base7 = ldf dim in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L119() else L120();
  L118():
    r27 = dyn base6(<lang dim(x)>);
    goto L16(c9, c10, r27);
  L128():
    st x = r35;
    goto L11();
  L131():
    table1 = ldf table;
    check L132() else D21();
  L146():
    goto L22(r47);
  L149():
    row_vars2 = force? row_vars1;
    checkMissing(row_vars2);
    c36 = `==`(row_vars2, NULL);
    goto L23(c36);
  L150():
    sym12 = ldf `is.character`;
    base12 = ldf `is.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L151() else L152();
  D21():
    deopt 77 [];
  L17(c25, c26, r30):
    length1 = ldf length in base;
    r32 = dyn length1(r30);
    check L123() else D17();
  L25(r52):
    c39 = `as.logical`(r52);
    if c39 then L154() else L26();
  L34(r72):
    r73 = `!`(r72);
    c43 = `as.logical`(r73);
    if c43 then L181() else L35();
  L119():
    x8 = ld x;
    check L121() else D15();
  L120():
    r29 = dyn base7(<sym x>);
    goto L17(c9, c10, r29);
  L132():
    ddd2 = ld `...`;
    p4 = prom<V +>{
      exclude3 = ld exclude;
      exclude4 = force? exclude3;
      checkMissing(exclude4);
      return exclude4;
    };
    r38 = dyn table1[`...`, exclude](ddd2, p4);
    check L133() else D22();
  L151():
    row_vars3 = ld `row.vars`;
    check L153() else D30();
  L152():
    r51 = dyn base12(<sym row.vars>);
    goto L25(r51);
  L178():
    col_vars1 = ld `col.vars`;
    check L180() else D44();
  L179():
    r71 = dyn base16(<sym col.vars>);
    goto L34(r71);
  D15():
    deopt 57 [c9, c10, x8];
  D17():
    deopt 62 [c25, c26, r32];
  D22():
    deopt 81 [r38];
  D30():
    deopt 112 [row_vars3];
  D44():
    deopt 157 [col_vars1];
  L26():
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L167() else L168();
  L30(i4):
    goto L33();
  L35():
    goto L44();
  L44():
    n4 = ld n;
    check L209() else D59();
  L121():
    x9 = force? x8;
    checkMissing(x9);
    dim = ldf dim in base;
    r31 = dyn dim(x9);
    check L122() else D16();
  L123():
    goto L16(c25, c26, r32);
  L133():
    st x = r38;
    goto L11();
  L153():
    row_vars4 = force? row_vars3;
    checkMissing(row_vars4);
    c38 = `is.character`(row_vars4);
    goto L25(c38);
  L154():
    pmatch = ldf pmatch;
    check L155() else D31();
  L180():
    col_vars2 = force? col_vars1;
    checkMissing(col_vars2);
    c42 = `==`(col_vars2, NULL);
    goto L34(c42);
  L181():
    sym17 = ldf `is.character`;
    base17 = ldf `is.character` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L182() else L183();
  D16():
    deopt 60 [c9, c10, r31];
  D31():
    deopt 116 [];
  D59():
    deopt 207 [1.0, n4];
  L31(r65):
    c41 = `as.logical`(r65);
    if c41 then L173() else L32();
  L36(r75):
    c45 = `as.logical`(r75);
    if c45 then L185() else L37();
  L122():
    goto L17(c9, c10, r31);
  L155():
    p5 = prom<V +>{
      row_vars5 = ld `row.vars`;
      row_vars6 = force? row_vars5;
      checkMissing(row_vars6);
      return row_vars6;
    };
    p6 = prom<V +>{
      sym13 = ldf names;
      base13 = ldf names in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      dn = ld dn;
      dn1 = force? dn;
      checkMissing(dn1);
      names = ldf names in base;
      r56 = dyn names(dn1);
      goto L0(r56);
    L2():
      r54 = dyn base13(<sym dn>);
      goto L0(r54);
    };
    r58 = dyn pmatch(p5, p6);
    check L156() else D32();
  L167():
    row_vars7 = ld `row.vars`;
    check L169() else D38();
  L168():
    r64 = dyn base15(<lang `|`(`(`(`<`(row.vars, 1.0)), `(`(`>`(row.vars, n)))>);
    goto L31(r64);
  L182():
    col_vars3 = ld `col.vars`;
    check L184() else D45();
  L183():
    r74 = dyn base17(<sym col.vars>);
    goto L36(r74);
  L209():
    n5 = force? n4;
    checkMissing(n5);
    r94 = `:`(1.0, n5);
    st i = r94;
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L210() else L211();
  D32():
    deopt 119 [r58];
  D38():
    deopt 138 [row_vars7];
  D45():
    deopt 162 [col_vars3];
  L32():
    goto L30(NULL);
  L37():
    sym20 = ldf any;
    base20 = ldf any in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L198() else L199();
  L41(i10):
    goto L44();
  L45(r96):
    r97 = `!`(r96);
    c49 = `as.logical`(r97);
    if c49 then L213() else L46(c49);
  L156():
    st i = r58;
    sym14 = ldf anyNA;
    base14 = ldf anyNA in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L157() else L158();
  L169():
    row_vars8 = force? row_vars7;
    checkMissing(row_vars8);
    r66 = `<`(row_vars8, 1.0);
    row_vars9 = ld `row.vars`;
    check L170() else D39();
  L173():
    stop2 = ldf stop;
    check L174() else D42();
  L184():
    col_vars4 = force? col_vars3;
    checkMissing(col_vars4);
    c44 = `is.character`(col_vars4);
    goto L36(c44);
  L185():
    pmatch1 = ldf pmatch;
    check L186() else D46();
  L210():
    row_vars11 = ld `row.vars`;
    check L212() else D60();
  L211():
    r95 = dyn base21(<sym row.vars>);
    goto L45(r95);
  D39():
    deopt 141 [r66, row_vars9];
  D42():
    deopt 149 [];
  D46():
    deopt 166 [];
  D60():
    deopt 212 [row_vars11];
  L27(r60):
    c40 = `as.logical`(r60);
    if c40 then L161() else L28();
  L42(r88):
    c47 = `as.logical`(r88);
    if c47 then L204() else L43();
  L46(c51):
    c59 = `as.logical`(c51);
    if c59 then L218() else L48();
  L157():
    i = ld i;
    check L159() else D33();
  L158():
    r59 = dyn base14(<sym i>);
    goto L27(r59);
  L170():
    row_vars10 = force? row_vars9;
    checkMissing(row_vars10);
    n = ld n;
    check L171() else D40();
  L174():
    r70 = dyn stop2("incorrect specification for 'row.vars'");
    check L175() else D43();
  L186():
    p7 = prom<V +>{
      col_vars5 = ld `col.vars`;
      col_vars6 = force? col_vars5;
      checkMissing(col_vars6);
      return col_vars6;
    };
    p8 = prom<V +>{
      sym18 = ldf names;
      base18 = ldf names in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r78):
      return r78;
    L1():
      dn2 = ld dn;
      dn3 = force? dn2;
      checkMissing(dn3);
      names1 = ldf names in base;
      r79 = dyn names1(dn3);
      goto L0(r79);
    L2():
      r77 = dyn base18(<sym dn>);
      goto L0(r77);
    };
    r81 = dyn pmatch1(p7, p8);
    check L187() else D47();
  L198():
    col_vars7 = ld `col.vars`;
    check L200() else D53();
  L199():
    r87 = dyn base20(<lang `|`(`(`(`<`(col.vars, 1.0)), `(`(`>`(col.vars, n)))>);
    goto L42(r87);
  L212():
    row_vars12 = force? row_vars11;
    checkMissing(row_vars12);
    c48 = `==`(row_vars12, NULL);
    goto L45(c48);
  L213():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L214() else L215();
  D33():
    deopt 123 [i];
  D40():
    deopt 142 [r66, row_vars10, n];
  D43():
    deopt 151 [r70];
  D47():
    deopt 169 [r81];
  D53():
    deopt 188 [col_vars7];
  L28():
    goto L29();
  L29():
    i2 = ld i;
    check L165() else D37();
  L43():
    goto L41(NULL);
  L47(c54, r99):
    r100 = `!`(r99);
    c56 = `as.logical`(r100);
    c57 = `&&`(c54, c56);
    goto L46(c57);
  L48():
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L258() else L259();
  L58():
    sym33 = ldf length;
    base33 = ldf length in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L296() else L297();
  L159():
    i1 = force? i;
    checkMissing(i1);
    anyNA = ldf anyNA in base;
    r61 = dyn anyNA(i1);
    check L160() else D34();
  L161():
    stop1 = ldf stop;
    check L162() else D35();
  L171():
    n1 = force? n;
    checkMissing(n1);
    r67 = `>`(row_vars10, n1);
    r68 = `||`(r66, r67);
    any = ldf any in base;
    r69 = dyn any(r68);
    check L172() else D41();
  L175():
    goto L30(r70);
  L187():
    st i = r81;
    sym19 = ldf anyNA;
    base19 = ldf anyNA in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L188() else L189();
  L200():
    col_vars8 = force? col_vars7;
    checkMissing(col_vars8);
    r89 = `<`(col_vars8, 1.0);
    col_vars9 = ld `col.vars`;
    check L201() else D54();
  L204():
    stop4 = ldf stop;
    check L205() else D57();
  L214():
    col_vars11 = ld `col.vars`;
    check L216() else D61();
  L215():
    r98 = dyn base22(<sym col.vars>);
    goto L47(c49, r98);
  L218():
    sort = ldf sort;
    check L219() else D62();
  D34():
    deopt 126 [r61];
  D35():
    deopt 128 [];
  D37():
    deopt 133 [i2];
  D41():
    deopt 147 [r69];
  D54():
    deopt 191 [r89, col_vars9];
  D57():
    deopt 199 [];
  D61():
    deopt 217 [c49, col_vars11];
  D62():
    deopt 223 [];
  L38(r83):
    c46 = `as.logical`(r83);
    if c46 then L192() else L39();
  L59(r126):
    r127 = `!`(r126);
    c66 = `as.logical`(r127);
    if c66 then L261() else L60();
  L72(r146):
    r155 = `>`(r146, 1.0);
    c74 = `as.logical`(r155);
    if c74 then L306() else L74();
  L160():
    goto L27(r61);
  L162():
    r62 = dyn stop1("incorrect specification for 'row.vars'");
    check L163() else D36();
  L165():
    i3 = force? i2;
    checkMissing(i3);
    st `row.vars` = i3;
    goto L30(i3);
  L172():
    goto L31(r69);
  L188():
    i6 = ld i;
    check L190() else D48();
  L189():
    r82 = dyn base19(<sym i>);
    goto L38(r82);
  L201():
    col_vars10 = force? col_vars9;
    checkMissing(col_vars10);
    n2 = ld n;
    check L202() else D55();
  L205():
    r93 = dyn stop4("incorrect specification for 'col.vars'");
    check L206() else D58();
  L216():
    col_vars12 = force? col_vars11;
    checkMissing(col_vars12);
    c55 = `==`(col_vars12, NULL);
    goto L47(c49, c55);
  L219():
    p9 = prom<V +>{
      sym23 = ldf c;
      base23 = ldf c in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r102):
      return r102;
    L1():
      row_vars13 = ld `row.vars`;
      row_vars14 = force? row_vars13;
      checkMissing(row_vars14);
      col_vars13 = ld `col.vars`;
      col_vars14 = force? col_vars13;
      checkMissing(col_vars14);
      c60 = ldf c in base;
      r103 = dyn c60(row_vars14, col_vars14);
      goto L0(r103);
    L2():
      r101 = dyn base23(<sym row.vars>, <sym col.vars>);
      goto L0(r101);
    };
    r105 = dyn sort(p9);
    check L220() else D63();
  L258():
    row_vars17 = ld `row.vars`;
    check L260() else D82();
  L259():
    r125 = dyn base28(<sym row.vars>);
    goto L59(r125);
  L296():
    sym34 = ldf c;
    base34 = ldf c in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L298() else L299();
  L297():
    r145 = dyn base33(<lang `<-`(perm, c(rev(row.vars), rev(col.vars)))>);
    goto L72(r145);
  D36():
    deopt 130 [r62];
  D48():
    deopt 173 [i6];
  D55():
    deopt 192 [r89, col_vars10, n2];
  D58():
    deopt 201 [r93];
  D63():
    deopt 225 [r105];
  D82():
    deopt 288 [row_vars17];
  L39():
    goto L40();
  L40():
    i8 = ld i;
    check L196() else D52();
  L60():
    sym30 = ldf `is.null`;
    base30 = ldf `is.null` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L275() else L276();
  L73(r148):
    st perm = r148;
    length6 = ldf length in base;
    r154 = dyn length6(r148);
    check L305() else D101();
  L74():
    goto L75();
  L75():
    sym35 = ldf c;
    base35 = ldf c in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L310() else L311();
  L163():
    goto L29();
  L190():
    i7 = force? i6;
    checkMissing(i7);
    anyNA1 = ldf anyNA in base;
    r84 = dyn anyNA1(i7);
    check L191() else D49();
  L192():
    stop3 = ldf stop;
    check L193() else D50();
  L202():
    n3 = force? n2;
    checkMissing(n3);
    r90 = `>`(col_vars10, n3);
    r91 = `||`(r89, r90);
    any1 = ldf any in base;
    r92 = dyn any1(r91);
    check L203() else D56();
  L206():
    goto L41(r93);
  L220():
    st `all.vars` = r105;
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L221() else L222();
  L260():
    row_vars18 = force? row_vars17;
    checkMissing(row_vars18);
    c65 = `==`(row_vars18, NULL);
    goto L59(c65);
  L261():
    sym29 = ldf length;
    base29 = ldf length in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L262() else L263();
  L298():
    rev = ldf rev;
    check L300() else D96();
  L299():
    r147 = dyn base34(<lang rev(row.vars)>, <lang rev(col.vars)>);
    goto L73(r147);
  L306():
    aperm = ldf aperm;
    check L307() else D102();
  D49():
    deopt 176 [r84];
  D50():
    deopt 178 [];
  D52():
    deopt 183 [i8];
  D56():
    deopt 197 [r92];
  D96():
    deopt 342 [];
  D101():
    deopt 353 [r154];
  D102():
    deopt 357 [];
  L49(r107):
    st p = r107;
    n6 = ld n;
    check L225() else D66();
  L61(r129):
    c67 = `as.logical`(r129);
    if c67 then L266() else L62();
  L65(r134):
    r135 = `!`(r134);
    c70 = `as.logical`(r135);
    if c70 then L278() else L66();
  L76(r161):
    l = ld x;
    dim__ = ldf `dim<-`;
    check L329() else D111();
  L191():
    goto L38(r84);
  L193():
    r85 = dyn stop3("incorrect specification for 'col.vars'");
    check L194() else D51();
  L196():
    i9 = force? i8;
    checkMissing(i9);
    st `col.vars` = i9;
    goto L41(i9);
  L203():
    goto L42(r92);
  L221():
    all_vars = ld `all.vars`;
    check L223() else D64();
  L222():
    r106 = dyn base24(<sym all.vars>);
    goto L49(r106);
  L262():
    row_vars19 = ld `row.vars`;
    check L264() else D83();
  L263():
    r128 = dyn base29(<sym row.vars>);
    goto L61(r128);
  L275():
    col_vars17 = ld `col.vars`;
    check L277() else D88();
  L276():
    r133 = dyn base30(<sym col.vars>);
    goto L65(r133);
  L300():
    p15 = prom<V +>{
      row_vars23 = ld `row.vars`;
      row_vars24 = force? row_vars23;
      checkMissing(row_vars24);
      return row_vars24;
    };
    r150 = dyn rev(p15);
    check L301() else D97();
  L305():
    goto L72(r154);
  L307():
    p17 = prom<V +>{
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      return x21;
    };
    p18 = prom<V +>{
      perm = ld perm;
      perm1 = force? perm;
      checkMissing(perm1);
      return perm1;
    };
    r158 = dyn aperm(p17, p18);
    check L308() else D103();
  L310():
    sym36 = ldf prod;
    base36 = ldf prod in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L312() else L313();
  L311():
    r160 = dyn base35(<lang prod(`[`(dx, row.vars))>, <lang prod(`[`(dx, col.vars))>);
    goto L76(r160);
  D51():
    deopt 180 [r85];
  D64():
    deopt 229 [all_vars];
  D66():
    deopt 233 [r107, n6];
  D83():
    deopt 294 [row_vars19];
  D88():
    deopt 308 [col_vars17];
  D97():
    deopt 344 [r150];
  D103():
    deopt 360 [r158];
  D111():
    deopt 387 [r161, l, r161];
  L62():
    i16 = ld i;
    check L273() else D87();
  L64(dx16):
    st `col.vars` = dx16;
    goto L58();
  L66():
    sym32 = ldf seq_len;
    base32 = ldf seq_len in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L292() else L293();
  L77(r163):
    sym37 = ldf prod;
    base37 = ldf prod in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L320() else L321();
  L194():
    goto L40();
  L223():
    all_vars1 = force? all_vars;
    checkMissing(all_vars1);
    length3 = ldf length in base;
    r108 = dyn length3(all_vars1);
    check L224() else D65();
  L225():
    n7 = force? n6;
    checkMissing(n7);
    r109 = `<`(r107, n7);
    c61 = `as.logical`(r109);
    if c61 then L226() else L50();
  L264():
    row_vars20 = force? row_vars19;
    checkMissing(row_vars20);
    length4 = ldf length in base;
    r130 = dyn length4(row_vars20);
    check L265() else D84();
  L266():
    i12 = ld i;
    check L267() else D85();
  L277():
    col_vars18 = force? col_vars17;
    checkMissing(col_vars18);
    c69 = `==`(col_vars18, NULL);
    goto L65(c69);
  L278():
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L279() else L280();
  L301():
    rev1 = ldf rev;
    check L302() else D98();
  L308():
    st x = r158;
    goto L75();
  L312():
    dx20 = ld dx;
    check L314() else D104();
  L313():
    r162 = dyn base36(<lang `[`(dx, row.vars)>);
    goto L77(r162);
  L329():
    r171 = dyn dim__(l, NULL, r161);
    check L330() else D112();
  D65():
    deopt 232 [r108];
  D84():
    deopt 297 [r130];
  D85():
    deopt 298 [i12];
  D87():
    deopt 304 [i16];
  D98():
    deopt 346 [];
  D104():
    deopt 368 [dx20];
  D112():
    deopt 389 [r161, r171];
  L50():
    goto L57(NULL);
  L57(dx12):
    goto L58();
  L67(r137):
    c71 = `as.logical`(r137);
    if c71 then L283() else L68();
  L71(r142):
    st `row.vars` = r142;
    n10 = ld n;
    check L295() else D95();
  L79(r167):
    c77 = ldf c in base;
    r170 = dyn c77(r163, r167);
    check L328() else D110();
  L224():
    goto L49(r108);
  L226():
    p10 = ld p;
    check L227() else D67();
  L265():
    goto L61(r130);
  L267():
    i13 = force? i12;
    checkMissing(i13);
    c68 = `is.object`(i13);
    if c68 then L268() else L269(i13);
  L273():
    i17 = force? i16;
    checkMissing(i17);
    goto L64(i17);
  L279():
    col_vars19 = ld `col.vars`;
    check L281() else D89();
  L280():
    r136 = dyn base31(<sym col.vars>);
    goto L67(r136);
  L292():
    n8 = ld n;
    check L294() else D94();
  L293():
    r141 = dyn base32(<lang `-`(n, 1.0)>);
    goto L71(r141);
  L302():
    p16 = prom<V +>{
      col_vars23 = ld `col.vars`;
      col_vars24 = force? col_vars23;
      checkMissing(col_vars24);
      return col_vars24;
    };
    r152 = dyn rev1(p16);
    check L303() else D99();
  L314():
    dx21 = force? dx20;
    checkMissing(dx21);
    c75 = `is.object`(dx21);
    if c75 then L315() else L316(dx21);
  L320():
    dx26 = ld dx;
    check L322() else D107();
  L321():
    r166 = dyn base37(<lang `[`(dx, col.vars)>);
    goto L79(r166);
  L330():
    st x = r171;
    dn8 = ld dn;
    check L331() else D113();
  D67():
    deopt 236 [p10];
  D89():
    deopt 314 [col_vars19];
  D94():
    deopt 328 [n8];
  D95():
    deopt 334 [n10];
  D99():
    deopt 348 [r152];
  D107():
    deopt 377 [dx26];
  D110():
    deopt 385 [r170];
  D113():
    deopt 391 [dn8];
  L63(dx15):
    goto L64(dx15);
  L68():
    i22 = ld i;
    check L290() else D93();
  L70(dx19):
    st `row.vars` = dx19;
    goto L58();
  L78(dx25):
    prod = ldf prod in base;
    r165 = dyn prod(dx25);
    check L319() else D106();
  L227():
    p11 = force? p10;
    checkMissing(p11);
    c62 = `as.logical`(p11);
    if c62 then L228() else L51();
  L268():
    dr6 = tryDispatchBuiltin.1("[", i13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L270() else L269(dr6);
  L269(i15):
    row_vars21 = ld `row.vars`;
    check L271() else D86();
  L281():
    col_vars20 = force? col_vars19;
    checkMissing(col_vars20);
    length5 = ldf length in base;
    r138 = dyn length5(col_vars20);
    check L282() else D90();
  L283():
    i18 = ld i;
    check L284() else D91();
  L294():
    n9 = force? n8;
    checkMissing(n9);
    r143 = `-`(n9, 1.0);
    r144 = seq_len(r143);
    goto L71(r144);
  L295():
    n11 = force? n10;
    checkMissing(n11);
    st `col.vars` = n11;
    goto L58();
  L303():
    c73 = ldf c in base;
    r153 = dyn c73(r150, r152);
    check L304() else D100();
  L315():
    dr10 = tryDispatchBuiltin.1("[", dx21);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L317() else L316(dr10);
  L316(dx23):
    row_vars25 = ld `row.vars`;
    check L318() else D105();
  L322():
    dx27 = force? dx26;
    checkMissing(dx27);
    c76 = `is.object`(dx27);
    if c76 then L323() else L324(dx27);
  L328():
    goto L76(r170);
  L331():
    dn9 = force? dn8;
    checkMissing(dn9);
    c78 = `is.object`(dn9);
    if c78 then L332() else L333(dn9);
  D86():
    deopt 300 [i15, row_vars21];
  D90():
    deopt 317 [r138];
  D91():
    deopt 318 [i18];
  D93():
    deopt 324 [i22];
  D100():
    deopt 350 [r153];
  D105():
    deopt 370 [dx23, row_vars25];
  D106():
    deopt 374 [r165];
  L51():
    sym25 = ldf sum;
    base25 = ldf sum in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L232() else L233();
  L52(r114):
    st x = r114;
    sym26 = ldf match;
    base26 = ldf match in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L236() else L237();
  L80(dx31):
    prod1 = ldf prod in base;
    r169 = dyn prod1(dx31);
    check L327() else D109();
  L81(dx33):
    l1 = ld x;
    attr__ = ldf `attr<-`;
    check L336() else D115();
  L228():
    apply = ldf apply;
    check L229() else D68();
  L270():
    dx14 = getTryDispatchBuiltinValue(dr6);
    goto L63(dx14);
  L271():
    row_vars22 = force? row_vars21;
    checkMissing(row_vars22);
    r131 = `-`(<missing>, row_vars22);
    __3 = ldf `[` in base;
    r132 = dyn __3(i15, r131);
    goto L63(r132);
  L282():
    goto L67(r138);
  L284():
    i19 = force? i18;
    checkMissing(i19);
    c72 = `is.object`(i19);
    if c72 then L285() else L286(i19);
  L290():
    i23 = force? i22;
    checkMissing(i23);
    goto L70(i23);
  L304():
    goto L73(r153);
  L317():
    dx24 = getTryDispatchBuiltinValue(dr10);
    goto L78(dx24);
  L318():
    row_vars26 = force? row_vars25;
    __5 = ldf `[` in base;
    r164 = dyn __5(dx23, row_vars26);
    goto L78(r164);
  L319():
    goto L77(r165);
  L323():
    dr12 = tryDispatchBuiltin.1("[", dx27);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L325() else L324(dr12);
  L324(dx29):
    col_vars25 = ld `col.vars`;
    check L326() else D108();
  L332():
    dr14 = tryDispatchBuiltin.1("[", dn9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L334() else L333(dr14);
  L333(dn11):
    row_vars27 = ld `row.vars`;
    check L335() else D114();
  D68():
    deopt 239 [];
  D108():
    deopt 379 [dx29, col_vars25];
  D109():
    deopt 383 [r169];
  D114():
    deopt 393 [dn11, row_vars27];
  D115():
    deopt 397 [dx33, l1, dx33];
  L53(r118):
    st `row.vars` = r118;
    sym27 = ldf match;
    base27 = ldf match in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L241() else L242();
  L69(dx18):
    goto L70(dx18);
  L229():
    p12 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    p13 = prom<V +>{
      all_vars2 = ld `all.vars`;
      all_vars3 = force? all_vars2;
      checkMissing(all_vars3);
      return all_vars3;
    };
    p14 = prom<V +>{
      sum = ld sum;
      sum1 = force? sum;
      checkMissing(sum1);
      return sum1;
    };
    r113 = dyn apply(p12, p13, p14);
    check L230() else D69();
  L232():
    x18 = ld x;
    check L234() else D70();
  L233():
    r115 = dyn base25(<sym x>);
    goto L52(r115);
  L236():
    row_vars15 = ld `row.vars`;
    check L238() else D72();
  L237():
    r117 = dyn base26(<sym row.vars>, <sym all.vars>);
    goto L53(r117);
  L285():
    dr8 = tryDispatchBuiltin.1("[", i19);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L287() else L286(dr8);
  L286(i21):
    col_vars21 = ld `col.vars`;
    check L288() else D92();
  L325():
    dx30 = getTryDispatchBuiltinValue(dr12);
    goto L80(dx30);
  L326():
    col_vars26 = force? col_vars25;
    __6 = ldf `[` in base;
    r168 = dyn __6(dx29, col_vars26);
    goto L80(r168);
  L327():
    goto L79(r169);
  L334():
    dx32 = getTryDispatchBuiltinValue(dr14);
    goto L81(dx32);
  L335():
    row_vars28 = force? row_vars27;
    __7 = ldf `[` in base;
    r172 = dyn __7(dn11, row_vars28);
    goto L81(r172);
  L336():
    r173 = dyn attr__(l1, NULL, "row.vars", dx33);
    check L337() else D116();
  D69():
    deopt 243 [r113];
  D70():
    deopt 246 [x18];
  D72():
    deopt 253 [row_vars15];
  D92():
    deopt 320 [i21, col_vars21];
  D116():
    deopt 400 [dx33, r173];
  L54(r121):
    st `col.vars` = r121;
    dn4 = ld dn;
    check L246() else D78();
  L230():
    goto L52(r113);
  L234():
    x19 = force? x18;
    checkMissing(x19);
    sum2 = ldf sum in base;
    r116 = dyn sum2(x19);
    check L235() else D71();
  L238():
    row_vars16 = force? row_vars15;
    checkMissing(row_vars16);
    all_vars4 = ld `all.vars`;
    check L239() else D73();
  L241():
    col_vars15 = ld `col.vars`;
    check L243() else D75();
  L242():
    r120 = dyn base27(<sym col.vars>, <sym all.vars>);
    goto L54(r120);
  L287():
    dx17 = getTryDispatchBuiltinValue(dr8);
    goto L69(dx17);
  L288():
    col_vars22 = force? col_vars21;
    checkMissing(col_vars22);
    r139 = `-`(<missing>, col_vars22);
    __4 = ldf `[` in base;
    r140 = dyn __4(i21, r139);
    goto L69(r140);
  L337():
    st x = r173;
    dn12 = ld dn;
    check L338() else D117();
  D71():
    deopt 249 [r116];
  D73():
    deopt 255 [all_vars4];
  D75():
    deopt 264 [col_vars15];
  D78():
    deopt 273 [dn4];
  D117():
    deopt 402 [dn12];
  L235():
    goto L52(r116);
  L239():
    all_vars5 = force? all_vars4;
    checkMissing(all_vars5);
    match = ldf match in base;
    r119 = dyn match(row_vars16, all_vars5, NA_INT, NULL);
    check L240() else D74();
  L243():
    col_vars16 = force? col_vars15;
    checkMissing(col_vars16);
    all_vars6 = ld `all.vars`;
    check L244() else D76();
  L246():
    dn5 = force? dn4;
    checkMissing(dn5);
    c63 = `is.object`(dn5);
    if c63 then L247() else L248(dn5);
  L338():
    dn13 = force? dn12;
    checkMissing(dn13);
    c79 = `is.object`(dn13);
    if c79 then L339() else L340(dn13);
  D74():
    deopt 260 [r119];
  D76():
    deopt 266 [all_vars6];
  L55(dx5):
    st dn = dx5;
    dx6 = ld dx;
    check L251() else D80();
  L82(dx35):
    l2 = ld x;
    attr__1 = ldf `attr<-`;
    check L343() else D119();
  L240():
    goto L53(r119);
  L244():
    all_vars7 = force? all_vars6;
    checkMissing(all_vars7);
    match1 = ldf match in base;
    r122 = dyn match1(col_vars16, all_vars7, NA_INT, NULL);
    check L245() else D77();
  L247():
    dr2 = tryDispatchBuiltin.1("[", dn5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L249() else L248(dr2);
  L248(dn7):
    all_vars8 = ld `all.vars`;
    check L250() else D79();
  L339():
    dr16 = tryDispatchBuiltin.1("[", dn13);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L341() else L340(dr16);
  L340(dn15):
    col_vars27 = ld `col.vars`;
    check L342() else D118();
  D77():
    deopt 271 [r122];
  D79():
    deopt 275 [dn7, all_vars8];
  D80():
    deopt 279 [dx6];
  D118():
    deopt 404 [dn15, col_vars27];
  D119():
    deopt 408 [dx35, l2, dx35];
  L245():
    goto L54(r122);
  L249():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L55(dx4);
  L250():
    all_vars9 = force? all_vars8;
    __1 = ldf `[` in base;
    r123 = dyn __1(dn7, all_vars9);
    goto L55(r123);
  L251():
    dx7 = force? dx6;
    checkMissing(dx7);
    c64 = `is.object`(dx7);
    if c64 then L252() else L253(dx7);
  L341():
    dx34 = getTryDispatchBuiltinValue(dr16);
    goto L82(dx34);
  L342():
    col_vars28 = force? col_vars27;
    __8 = ldf `[` in base;
    r174 = dyn __8(dn15, col_vars28);
    goto L82(r174);
  L343():
    r175 = dyn attr__1(l2, NULL, "col.vars", dx35);
    check L344() else D120();
  D120():
    deopt 411 [dx35, r175];
  L56(dx11):
    st dx = dx11;
    goto L57(dx11);
  L252():
    dr4 = tryDispatchBuiltin.1("[", dx7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L254() else L253(dr4);
  L253(dx9):
    all_vars10 = ld `all.vars`;
    check L255() else D81();
  L344():
    st x = r175;
    l3 = ld x;
    class__ = ldf `class<-`;
    check L345() else D121();
  D81():
    deopt 281 [dx9, all_vars10];
  D121():
    deopt 416 ["ftable", l3, "ftable"];
  L254():
    dx10 = getTryDispatchBuiltinValue(dr4);
    goto L56(dx10);
  L255():
    all_vars11 = force? all_vars10;
    __2 = ldf `[` in base;
    r124 = dyn __2(dx9, all_vars11);
    goto L56(r124);
  L345():
    r176 = dyn class__(l3, NULL, "ftable");
    check L346() else D122();
  D122():
    deopt 418 ["ftable", r176];
  L346():
    st x = r176;
    x22 = ld x;
    check L347() else D123();
  D123():
    deopt 420 [x22];
  L347():
    x23 = force? x22;
    checkMissing(x23);
    popenv;
    return x23;
  }
}