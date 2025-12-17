fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1496484187`;
    st `[[<-.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1496484187`(x, i, j, value) {
  (reg x:*, reg i:*, reg j:*, reg value:*) -+> V { var x:*, var i:*, var j:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _in_:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg sys_call:cls, reg r4:V, reg names:cls, reg r5:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg all:cls, reg r12:V, reg r13:V, reg c1:L, reg warning:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r18:V, reg l:*, reg class__:cls, reg r19:V, reg _row_names_info:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg value1:*, reg value2:V, reg is_atomic:cls, reg r24:V, reg c2:L, reg c4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg c7:L, reg r26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg c10:L, reg r28:V, reg value3:*, reg value4:V, reg names1:cls, reg r29:V, reg c11:V, reg r30:V, reg c12:L, reg c13:V, reg c15:L, reg l1:*, reg names__:cls, reg r31:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg nargs:cls, reg r35:V, reg r36:V, reg c16:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r37:V, reg r38:V, reg x5:*, reg x6:V, reg length:cls, reg r39:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg r41:V, reg value5:*, reg value6:V, reg c17:V, reg r42:V, reg c18:L, reg NROW:cls, reg value7:*, reg value8:V, reg p3:p(V +), reg r44:V, reg N:*, reg N1:V, reg nrows:*, reg nrows1:V, reg r45:V, reg c19:L, reg stop:cls, reg sprintf:cls, reg ngettext:cls, reg N2:*, reg N3:V, reg p4:p(V +), reg r47:V, reg p5:p(V +), reg N4:*, reg N5:V, reg p6:p(V +), reg nrows2:*, reg nrows3:V, reg p7:p(V +), reg r51:V, reg p8:p(V +), reg r53:V, reg N6:*, reg N7:V, reg nrows4:*, reg nrows5:V, reg r55:V, reg c20:L, reg N8:*, reg N9:V, reg r56:V, reg c21:L, reg c23:V, reg nrows6:*, reg nrows7:V, reg N10:*, reg N11:V, reg __:cls, reg r57:V, reg r58:V, reg c24:L, reg c25:V, reg c27:L, reg c29:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r59:V, reg c32:L, reg r60:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r61:V, reg c35:L, reg r62:V, reg value9:*, reg value10:V, reg dim:cls, reg r63:V, reg length1:cls, reg r64:V, reg r65:V, reg c36:L, reg c37:V, reg c39:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r66:V, reg r67:V, reg rep:cls, reg r68:V, reg r69:V, reg stop1:cls, reg sprintf1:cls, reg ngettext1:cls, reg N12:*, reg N13:V, reg p9:p(V +), reg r71:V, reg p10:p(V +), reg N14:*, reg N15:V, reg p11:p(V +), reg nrows8:*, reg nrows9:V, reg p12:p(V +), reg r75:V, reg p13:p(V +), reg r77:V, reg r78:V, reg value11:*, reg value12:V, reg l2:*, reg c40:L, reg value14:V, reg l4:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg ____:cls, reg r80:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r81:V, reg r82:V, reg x7:*, reg x8:V, reg length2:cls, reg r83:V, reg nc:*, reg nc1:V, reg r84:V, reg c41:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r85:V, reg r86:V, reg x9:*, reg x10:V, reg length3:cls, reg r87:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r88:V, reg r89:V, reg x11:*, reg x12:V, reg names2:cls, reg r90:V, reg c42:L, reg r92:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nc2:*, reg nc3:V, reg __1:cls, reg r93:V, reg r94:V, reg c43:L, reg paste0:cls, reg nc4:*, reg nc5:V, reg p14:p(V +), reg r96:V, reg l5:*, reg names3:cls, reg r97:V, reg c44:L, reg r100:V, reg l7:*, reg r101:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r103:V, reg l9:*, reg dx5:V, reg nc6:*, reg nc7:V, reg ___:cls, reg r104:V, reg names__1:cls, reg r105:V, reg make_unique:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r107:V, reg r108:V, reg x13:*, reg x14:V, reg names4:cls, reg r109:V, reg p15:p(V +), reg r111:V, reg l10:*, reg names__2:cls, reg r112:V, reg cl:*, reg cl1:V, reg l11:*, reg class__1:cls, reg r114:V, reg x15:*, reg x16:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r117:V, reg r118:V, reg missing:cls, reg r119:V, reg c45:L, reg c46:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r120:V, reg c50:L, reg r121:V, reg missing1:cls, reg r122:V, reg c51:L, reg c52:V, reg c54:L, reg stop2:cls, reg r123:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r125:V, reg r126:V, reg x17:*, reg x18:V, reg attr:cls, reg r127:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r128:V, reg r129:V, reg x19:*, reg x20:V, reg length4:cls, reg r130:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r131:V, reg r132:V, reg i3:*, reg i4:V, reg c55:L, reg c56:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r133:V, reg r134:V, reg i5:*, reg i6:V, reg rows:*, reg rows1:V, reg match:cls, reg r135:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r136:V, reg r137:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r138:V, reg r139:V, reg ii:*, reg ii1:V, reg is_na:cls, reg r140:V, reg sum:cls, reg r141:V, reg n:*, reg n1:V, reg r142:V, reg c57:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r143:V, reg r144:V, reg nrows10:*, reg nrows11:V, reg r145:V, reg n2:*, reg n3:V, reg seq_int:cls, reg r146:V, reg l12:*, reg c58:L, reg r148:V, reg l14:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg new_rows:*, reg new_rows1:V, reg ___1:cls, reg r151:V, reg i7:*, reg i8:V, reg c59:L, reg i10:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg new_rows2:*, reg new_rows3:V, reg __2:cls, reg r152:V, reg ii2:*, reg ii3:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r153:V, reg r154:V, reg i11:*, reg i12:V, reg r155:V, reg all1:cls, reg r156:V, reg c60:L, reg c62:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r157:V, reg c65:L, reg r158:V, reg i13:*, reg i14:V, reg max:cls, reg r159:V, reg nrows12:*, reg nrows13:V, reg r160:V, reg c66:L, reg c67:V, reg c69:L, reg n4:*, reg n5:V, reg r161:V, reg c70:L, reg nrows14:*, reg nrows15:V, reg r162:V, reg nn:*, reg nn1:V, reg r163:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r164:V, reg r165:V, reg value17:*, reg value18:V, reg inherits:cls, reg r166:V, reg c71:L, reg c73:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r167:V, reg c76:L, reg r168:V, reg value19:*, reg value20:V, reg dim1:cls, reg r169:V, reg c77:L, reg c79:L, reg r171:V, reg dr10:V, reg dc5:L, reg dx11:V, reg c81:L, reg dx12:V, reg __3:cls, reg r172:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r173:V, reg c84:L, reg dx15:V, reg r174:V, reg nrr:*, reg nrr1:V, reg length5:cls, reg r175:V, reg r176:V, reg c85:L, reg c86:V, reg c88:L, reg sym31:cls, reg base31:cls, reg guard31:L, reg r177:V, reg r178:V, reg value21:*, reg value22:V, reg attr1:cls, reg r179:V, reg c89:L, reg r181:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r184:V, reg r185:V, reg r186:V, reg nrr2:*, reg nrr3:V, reg r187:I, reg __4:cls, reg r188:V, reg duplicated:cls, reg new_rows4:*, reg new_rows5:V, reg p16:p(V +), reg r190:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r193:V, reg r194:V, reg r195:V, reg new_rows6:*, reg new_rows7:V, reg rows2:*, reg rows3:V, reg match1:cls, reg r196:V, reg r197:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r198:V, reg r199:V, reg repl:*, reg repl1:V, reg any:cls, reg r200:V, reg c90:L, reg nrr4:*, reg nrr5:V, reg c91:L, reg nrr7:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg repl2:*, reg repl3:V, reg __5:cls, reg r201:V, reg l15:*, reg c92:L, reg dx21:V, reg l17:*, reg dr16:V, reg dc8:L, reg dx23:V, reg dx24:V, reg dx25:V, reg repl4:*, reg repl5:V, reg ___2:cls, reg r202:V, reg dx26:V, reg dx27:V, reg nrr8:*, reg nrr9:V, reg xpdrows_data_frame:cls, reg x21:*, reg x22:V, reg p17:p(V +), reg rows4:*, reg rows5:V, reg p18:p(V +), reg new_rows8:*, reg new_rows9:V, reg p19:p(V +), reg r206:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r207:V, reg r208:V, reg x23:*, reg x24:V, reg attr2:cls, reg r209:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r210:V, reg r211:V, reg rows6:*, reg rows7:V, reg length6:cls, reg r212:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r214:V, reg r215:V, reg nrows16:*, reg nrows17:V, reg r216:I, reg c93:L, reg r218:V, reg dr18:V, reg dc9:L, reg dx29:V, reg dx30:V, reg i15:*, reg i16:V, reg __6:cls, reg r219:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r220:V, reg r221:V, reg iseq:*, reg iseq1:V, reg anyNA:cls, reg r222:V, reg c94:L, reg stop3:cls, reg r223:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r225:V, reg r226:V, reg j1:*, reg j2:V, reg c95:L, reg c96:L, reg _in_1:cls, reg j3:*, reg j4:V, reg p20:p(V +), reg r228:V, reg c97:L, reg stop4:cls, reg r229:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r231:V, reg r232:V, reg j5:*, reg j6:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r233:V, reg r234:V, reg x25:*, reg x26:V, reg names5:cls, reg r235:V, reg match2:cls, reg r236:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r237:V, reg r238:V, reg jseq:*, reg jseq1:V, reg anyNA1:cls, reg r239:V, reg c98:L, reg stop5:cls, reg gettextf:cls, reg j7:*, reg j8:V, reg c99:L, reg j10:V, reg dr20:V, reg dc10:L, reg dx31:V, reg dx32:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r240:V, reg j13:V, reg r241:V, reg jseq2:*, reg jseq3:V, reg is_na1:cls, reg r242:V, reg __7:cls, reg r243:V, reg p21:p(V +), reg r245:V, reg p22:p(V +), reg r247:V, reg r248:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r250:V, reg r251:V, reg j14:*, reg j15:V, reg c100:L, reg c101:L, reg c102:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r252:V, reg c106:L, reg r253:V, reg j16:*, reg j17:V, reg min:cls, reg r254:V, reg r255:V, reg c107:L, reg c108:V, reg c110:L, reg sym46:cls, reg base46:cls, reg guard46:L, reg r256:V, reg r257:V, reg x27:*, reg x28:V, reg r258:I, reg c111:L, reg r260:V, reg dr22:V, reg dc11:L, reg dx33:V, reg dx34:V, reg j18:*, reg j19:V, reg __8:cls, reg r261:V, reg j20:*, reg j21:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r262:V, reg r263:V, reg jseq4:*, reg jseq5:V, reg max1:cls, reg r264:V, reg nvars:*, reg nvars1:V, reg r265:V, reg c112:L, reg stop6:cls, reg gettextf1:cls, reg jseq6:*, reg jseq7:V, reg c113:L, reg jseq9:V, reg dr24:V, reg dc12:L, reg dx35:V, reg dx36:V, reg jseq10:*, reg jseq11:V, reg nvars2:*, reg nvars3:V, reg r266:V, reg __9:cls, reg r267:V, reg p23:p(V +), reg r269:V, reg p24:p(V +), reg r271:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r272:V, reg r273:V, reg iseq2:*, reg iseq3:V, reg length7:cls, reg r274:V, reg r275:V, reg c114:L, reg c115:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r276:V, reg c119:L, reg r277:V, reg jseq12:*, reg jseq13:V, reg length8:cls, reg r278:V, reg r279:V, reg c120:L, reg c121:V, reg c123:L, reg stop7:cls, reg r280:V, reg value23:*, reg value24:V, reg l18:*, reg c124:L, reg value27:V, reg l21:*, reg value28:V, reg l22:*, reg dr26:V, reg dc13:L, reg dx37:V, reg value31:V, reg l24:*, reg value32:V, reg dx38:V, reg jseq14:*, reg jseq15:V, reg __10:cls, reg r282:V, reg c125:L, reg value34:V, reg l26:*, reg dx40:V, reg dr28:V, reg dc14:L, reg dx41:V, reg value36:V, reg l28:*, reg dx42:V, reg iseq4:*, reg iseq5:V, reg ____1:cls, reg r283:V, reg c126:L, reg value38:V, reg l30:*, reg dr30:V, reg dc15:L, reg dx43:V, reg dx44:V, reg jseq16:*, reg jseq17:V, reg ____2:cls, reg r284:V, reg cl2:*, reg cl3:V, reg l31:*, reg class__2:cls, reg r285:V, reg x29:*, reg x30:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    st value = value;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L112() else L113();
  L0(r1):
    r13 = `!`(r1);
    c1 = `as.logical`(r13);
    if c1 then L117() else L1();
  L112():
    _in_ = ldf `%in%`;
    check L114() else D0();
  L113():
    r = dyn base(<lang `%in%`(names(sys.call()), c("", "value"))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1():
    goto L2();
  L2():
    sym3 = ldf oldClass;
    base3 = ldf oldClass in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L121() else L122();
  L114():
    p = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      sys_call = ldf `sys.call`;
      r4 = dyn sys_call();
      names = ldf names in base;
      r5 = dyn names(r4);
      goto L0(r5);
    L2():
      r2 = dyn base1(<lang sys.call()>);
      goto L0(r2);
    };
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c = ldf c in base;
      r9 = dyn c("", "value");
      goto L0(r9);
    L2():
      r7 = dyn base2("", "value");
      goto L0(r7);
    };
    r11 = dyn _in_(p, p1);
    check L115() else D1();
  L117():
    warning = ldf warning;
    check L118() else D3();
  D1():
    deopt 6 [r11];
  D3():
    deopt 11 [];
  L3(r17):
    st cl = r17;
    l = ld x;
    class__ = ldf `class<-`;
    check L125() else D7();
  L115():
    all = ldf all in base;
    r12 = dyn all(r11);
    check L116() else D2();
  L118():
    r14 = dyn warning("named arguments are discouraged");
    check L119() else D4();
  L121():
    x1 = ld x;
    check L123() else D5();
  L122():
    r16 = dyn base3(<sym x>);
    goto L3(r16);
  D2():
    deopt 8 [r12];
  D4():
    deopt 13 [r14];
  D5():
    deopt 18 [x1];
  D7():
    deopt 26 [NULL, l, NULL];
  L116():
    goto L0(r12);
  L119():
    goto L2();
  L123():
    x2 = force? x1;
    checkMissing(x2);
    oldClass = ldf oldClass in base;
    r18 = dyn oldClass(x2);
    check L124() else D6();
  L125():
    r19 = dyn class__(l, NULL, NULL);
    check L126() else D8();
  D6():
    deopt 21 [r18];
  D8():
    deopt 28 [NULL, r19];
  L124():
    goto L3(r18);
  L126():
    st x = r19;
    _row_names_info = ldf `.row_names_info`;
    check L127() else D9();
  D9():
    deopt 31 [];
  L127():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r21 = dyn _row_names_info(p2, 2);
    check L128() else D10();
  D10():
    deopt 34 [r21];
  L128():
    st nrows = r21;
    sym4 = ldf `is.atomic`;
    base4 = ldf `is.atomic` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L129() else L130();
  L4(r23):
    c2 = `as.logical`(r23);
    if c2 then L133() else L5(c2);
  L129():
    value1 = ld value;
    check L131() else D11();
  L130():
    r22 = dyn base4(<sym value>);
    goto L4(r22);
  D11():
    deopt 38 [value1];
  L5(c4):
    c15 = `as.logical`(c4);
    if c15 then L141() else L8();
  L131():
    value2 = force? value1;
    checkMissing(value2);
    is_atomic = ldf `is.atomic` in base;
    r24 = dyn is_atomic(value2);
    check L132() else D12();
  L133():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L134() else L135();
  D12():
    deopt 41 [r24];
  L6(c7, r26):
    r30 = `!`(r26);
    c12 = `as.logical`(r30);
    c13 = `&&`(c7, c12);
    goto L5(c13);
  L8():
    goto L9();
  L9():
    sym7 = ldf nargs;
    base7 = ldf nargs in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L145() else L146();
  L132():
    goto L4(r24);
  L134():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L136() else L137();
  L135():
    r25 = dyn base5(<lang names(value)>);
    goto L6(c2, r25);
  L141():
    l1 = ld value;
    names__ = ldf `names<-`;
    check L142() else D15();
  D15():
    deopt 55 [NULL, l1, NULL];
  L7(c10, r28):
    c11 = `==`(r28, NULL);
    goto L6(c10, c11);
  L10(r34):
    r36 = `<`(r34, 4);
    c16 = `as.logical`(r36);
    if c16 then L148() else L11();
  L136():
    value3 = ld value;
    check L138() else D13();
  L137():
    r27 = dyn base6(<sym value>);
    goto L7(c2, r27);
  L142():
    r31 = dyn names__(l1, NULL, NULL);
    check L143() else D16();
  L145():
    nargs = ldf nargs in base;
    r35 = dyn nargs();
    check L147() else D17();
  L146():
    r33 = dyn base7();
    goto L10(r33);
  D13():
    deopt 45 [c2, value3];
  D16():
    deopt 57 [NULL, r31];
  D17():
    deopt 64 [r35];
  L11():
    sym17 = ldf missing;
    base17 = ldf missing in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L237() else L238();
  L138():
    value4 = force? value3;
    checkMissing(value4);
    names1 = ldf names in base;
    r29 = dyn names1(value4);
    check L139() else D14();
  L143():
    st value = r31;
    goto L9();
  L147():
    goto L10(r35);
  L148():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L149() else L150();
  D14():
    deopt 48 [c2, r29];
  L12(r38):
    st nc = r38;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L153() else L154();
  L38(r118):
    c45 = `as.logical`(r118);
    if c45 then L39(c45) else L239();
  L139():
    goto L7(c2, r29);
  L149():
    x5 = ld x;
    check L151() else D18();
  L150():
    r37 = dyn base8(<sym x>);
    goto L12(r37);
  L237():
    missing = ldf missing in base;
    r119 = dyn missing(<sym i>);
    goto L38(r119);
  L238():
    r117 = dyn base17(<sym i>);
    goto L38(r117);
  D18():
    deopt 69 [x5];
  L13(r41):
    r42 = `!`(r41);
    c18 = `as.logical`(r42);
    if c18 then L156() else L14();
  L39(c46):
    c54 = `as.logical`(c46);
    if c54 then L243() else L41();
  L151():
    x6 = force? x5;
    checkMissing(x6);
    length = ldf length in base;
    r39 = dyn length(x6);
    check L152() else D19();
  L153():
    value5 = ld value;
    check L155() else D20();
  L154():
    r40 = dyn base9(<sym value>);
    goto L13(r40);
  L239():
    sym18 = ldf missing;
    base18 = ldf missing in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L240() else L241();
  D19():
    deopt 72 [r39];
  D20():
    deopt 75 [value5];
  L14():
    goto L26();
  L26():
    value11 = ld value;
    check L191() else D38();
  L40(c50, r121):
    c51 = `as.logical`(r121);
    c52 = `||`(c50, c51);
    goto L39(c52);
  L41():
    goto L42();
  L42():
    sym19 = ldf attr;
    base19 = ldf attr in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L247() else L248();
  L152():
    goto L12(r39);
  L155():
    value6 = force? value5;
    checkMissing(value6);
    c17 = `==`(value6, NULL);
    goto L13(c17);
  L156():
    NROW = ldf NROW;
    check L157() else D21();
  L240():
    missing1 = ldf missing in base;
    r122 = dyn missing1(<sym j>);
    goto L40(c45, r122);
  L241():
    r120 = dyn base18(<sym j>);
    goto L40(c45, r120);
  L243():
    stop2 = ldf stop;
    check L244() else D63();
  D21():
    deopt 80 [];
  D38():
    deopt 141 [value11];
  D63():
    deopt 224 [];
  L43(r126):
    st rows = r126;
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L251() else L252();
  L157():
    p3 = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    r44 = dyn NROW(p3);
    check L158() else D22();
  L191():
    value12 = force? value11;
    checkMissing(value12);
    l2 = ld x;
    c40 = `is.object`(l2);
    if c40 then L192() else L193(value12, l2);
  L244():
    r123 = dyn stop2("only valid calls are x[[j]] <- value or x[[i,j]] <- value");
    check L245() else D64();
  L247():
    x17 = ld x;
    check L249() else D65();
  L248():
    r125 = dyn base19(<sym x>, "row.names");
    goto L43(r125);
  D22():
    deopt 82 [r44];
  D64():
    deopt 226 [r123];
  D65():
    deopt 231 [x17];
  L27(dx1):
    st x = dx1;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L196() else L197();
  L44(r129):
    st nvars = r129;
    sym21 = ldf `is.character`;
    base21 = ldf `is.character` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L255() else L256();
  L158():
    st N = r44;
    N = ld N;
    check L159() else D23();
  L192():
    dr = tryDispatchBuiltin.0("[[<-", l2, value12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L194() else L193(value12, dr);
  L193(value14, l4):
    i1 = ld i;
    check L195() else D39();
  L245():
    goto L42();
  L249():
    x18 = force? x17;
    checkMissing(x18);
    attr = ldf attr in base;
    r127 = dyn attr(x18, "row.names");
    check L250() else D66();
  L251():
    x19 = ld x;
    check L253() else D67();
  L252():
    r128 = dyn base20(<sym x>);
    goto L44(r128);
  D23():
    deopt 84 [N];
  D39():
    deopt 144 [value14, l4, value12, i1];
  D66():
    deopt 235 [r127];
  D67():
    deopt 239 [x19];
  L28(r82):
    nc = ld nc;
    check L200() else D42();
  L45(r132):
    st n = r132;
    c56 = `as.logical`(r132);
    if c56 then L258() else L46();
  L159():
    N1 = force? N;
    checkMissing(N1);
    nrows = ld nrows;
    check L160() else D24();
  L194():
    dx = getTryDispatchBuiltinValue(dr);
    goto L27(dx);
  L195():
    i2 = force? i1;
    ____ = ldf `[[<-` in base;
    r80 = dyn ____(l4, value12, i2);
    goto L27(r80);
  L196():
    x7 = ld x;
    check L198() else D40();
  L197():
    r81 = dyn base13(<sym x>);
    goto L28(r81);
  L250():
    goto L43(r127);
  L253():
    x20 = force? x19;
    checkMissing(x20);
    length4 = ldf length in base;
    r130 = dyn length4(x20);
    check L254() else D68();
  L255():
    i3 = ld i;
    check L257() else D69();
  L256():
    r131 = dyn base21(<sym i>);
    goto L45(r131);
  D24():
    deopt 85 [N1, nrows];
  D40():
    deopt 150 [x7];
  D42():
    deopt 153 [r82, nc];
  D68():
    deopt 242 [r130];
  D69():
    deopt 245 [i3];
  L46():
    goto L55();
  L55():
    sym26 = ldf all;
    base26 = ldf all in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L290() else L291();
  L160():
    nrows1 = force? nrows;
    checkMissing(nrows1);
    r45 = `>`(N1, nrows1);
    c19 = `as.logical`(r45);
    if c19 then L161() else L15();
  L198():
    x8 = force? x7;
    checkMissing(x8);
    length2 = ldf length in base;
    r83 = dyn length2(x8);
    check L199() else D41();
  L200():
    nc1 = force? nc;
    checkMissing(nc1);
    r84 = `>`(r82, nc1);
    c41 = `as.logical`(r84);
    if c41 then L201() else L29();
  L254():
    goto L44(r130);
  L257():
    i4 = force? i3;
    checkMissing(i4);
    c55 = `is.character`(i4);
    goto L45(c55);
  L258():
    sym22 = ldf match;
    base22 = ldf match in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L259() else L260();
  D41():
    deopt 153 [r83];
  L15():
    goto L16();
  L16():
    N6 = ld N;
    check L165() else D27();
  L29():
    goto L36();
  L36():
    cl = ld cl;
    check L231() else D59();
  L47(r134):
    st ii = r134;
    sym23 = ldf sum;
    base23 = ldf sum in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L264() else L265();
  L56(r154):
    c60 = `as.logical`(r154);
    if c60 then L294() else L57(c60);
  L161():
    stop = ldf stop;
    check L162() else D25();
  L199():
    goto L28(r83);
  L201():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L202() else L203();
  L259():
    i5 = ld i;
    check L261() else D70();
  L260():
    r133 = dyn base22(<sym i>, <sym rows>);
    goto L47(r133);
  L290():
    i11 = ld i;
    check L292() else D84();
  L291():
    r153 = dyn base26(<lang `>=`(i, 0)>);
    goto L56(r153);
  D25():
    deopt 89 [];
  D27():
    deopt 96 [N6];
  D59():
    deopt 204 [cl];
  D70():
    deopt 251 [i5];
  D84():
    deopt 308 [i11];
  L30(r86):
    st nc = r86;
    sym15 = ldf names;
    base15 = ldf names in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L206() else L207();
  L48(r137):
    st n = r137;
    n = ld n;
    check L271() else D76();
  L57(c62):
    c69 = `as.logical`(c62);
    if c69 then L301() else L59();
  L162():
    p8 = prom<V +>{
      sprintf = ldf sprintf;
      p5 = prom<V +>{
        ngettext = ldf ngettext;
        p4 = prom<V +>{
          N2 = ld N;
          N3 = force? N2;
          checkMissing(N3);
          return N3;
        };
        r47 = dyn ngettext(p4, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
        return r47;
      };
      p6 = prom<V +>{
        N4 = ld N;
        N5 = force? N4;
        checkMissing(N5);
        return N5;
      };
      p7 = prom<V +>{
        nrows2 = ld nrows;
        nrows3 = force? nrows2;
        checkMissing(nrows3);
        return nrows3;
      };
      r51 = dyn sprintf(p5, p6, p7);
      return r51;
    };
    r53 = dyn stop[, domain](p8, NA_LGL);
    check L163() else D26();
  L165():
    N7 = force? N6;
    checkMissing(N7);
    nrows4 = ld nrows;
    check L166() else D28();
  L202():
    x9 = ld x;
    check L204() else D43();
  L203():
    r85 = dyn base14(<sym x>);
    goto L30(r85);
  L231():
    cl1 = force? cl;
    checkMissing(cl1);
    l11 = ld x;
    class__1 = ldf `class<-`;
    check L232() else D60();
  L261():
    i6 = force? i5;
    checkMissing(i6);
    rows = ld rows;
    check L262() else D71();
  L264():
    sym24 = ldf `is.na`;
    base24 = ldf `is.na` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L266() else L267();
  L265():
    r136 = dyn base23(<lang `<-`(new.rows, is.na(ii))>);
    goto L48(r136);
  L292():
    i12 = force? i11;
    checkMissing(i12);
    r155 = `>=`(i12, 0);
    all1 = ldf all in base;
    r156 = dyn all1(r155);
    check L293() else D85();
  L294():
    sym27 = ldf max;
    base27 = ldf max in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L295() else L296();
  D26():
    deopt 93 [r53];
  D28():
    deopt 97 [N7, nrows4];
  D43():
    deopt 158 [x9];
  D60():
    deopt 207 [cl1, l11, cl1];
  D71():
    deopt 253 [rows];
  D76():
    deopt 272 [n];
  D85():
    deopt 313 [r156];
  L31(r89):
    c42 = `is.object`(r89);
    if c42 then L210() else L211(r89);
  L49(r139):
    st `new.rows` = r139;
    sum = ldf sum in base;
    r141 = dyn sum(r139);
    check L270() else D75();
  L58(c65, r158):
    st nn = r158;
    nrows12 = ld nrows;
    check L299() else D88();
  L59():
    goto L80();
  L80():
    sym37 = ldf seq_len;
    base37 = ldf seq_len in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L370() else L371();
  L163():
    goto L16();
  L166():
    nrows5 = force? nrows4;
    checkMissing(nrows5);
    r55 = `<`(N7, nrows5);
    c20 = `as.logical`(r55);
    if c20 then L167() else L17();
  L204():
    x10 = force? x9;
    checkMissing(x10);
    length3 = ldf length in base;
    r87 = dyn length3(x10);
    check L205() else D44();
  L206():
    x11 = ld x;
    check L208() else D45();
  L207():
    r88 = dyn base15(<sym x>);
    goto L31(r88);
  L232():
    r114 = dyn class__1(l11, NULL, cl1);
    check L233() else D61();
  L262():
    rows1 = force? rows;
    checkMissing(rows1);
    match = ldf match in base;
    r135 = dyn match(i6, rows1, NA_INT, NULL);
    check L263() else D72();
  L266():
    ii = ld ii;
    check L268() else D73();
  L267():
    r138 = dyn base24(<sym ii>);
    goto L49(r138);
  L271():
    n1 = force? n;
    checkMissing(n1);
    r142 = `>`(n1, 0);
    c57 = `as.logical`(r142);
    if c57 then L272() else L50();
  L293():
    goto L56(r156);
  L295():
    i13 = ld i;
    check L297() else D86();
  L296():
    r157 = dyn base27(<sym i>);
    goto L58(c60, r157);
  L301():
    n4 = ld n;
    check L302() else D89();
  D44():
    deopt 161 [r87];
  D45():
    deopt 165 [x11];
  D61():
    deopt 209 [cl1, r114];
  D72():
    deopt 258 [r135];
  D73():
    deopt 264 [ii];
  D75():
    deopt 270 [r141];
  D86():
    deopt 316 [c60, i13];
  D88():
    deopt 320 [c65, r158, nrows12];
  D89():
    deopt 324 [n4];
  L17():
    goto L25(NULL);
  L25(r78):
    goto L26();
  L32(dx3):
    r94 = `==`(dx3, "");
    c43 = `as.logical`(r94);
    if c43 then L214() else L33();
  L50():
    goto L54();
  L54():
    ii2 = ld ii;
    check L288() else D83();
  L81(r215):
    c93 = `is.object`(r215);
    if c93 then L373() else L374(r215);
  L167():
    N8 = ld N;
    check L168() else D29();
  L205():
    goto L30(r87);
  L208():
    x12 = force? x11;
    checkMissing(x12);
    names2 = ldf names in base;
    r90 = dyn names2(x12);
    check L209() else D46();
  L210():
    dr2 = tryDispatchBuiltin.1("[", r89);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L212() else L211(dr2);
  L211(r92):
    nc2 = ld nc;
    check L213() else D47();
  L233():
    st x = r114;
    x15 = ld x;
    check L234() else D62();
  L263():
    goto L47(r135);
  L268():
    ii1 = force? ii;
    checkMissing(ii1);
    is_na = ldf `is.na` in base;
    r140 = dyn is_na(ii1);
    check L269() else D74();
  L270():
    goto L48(r141);
  L272():
    sym25 = ldf `seq.int`;
    base25 = ldf `seq.int` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L273() else L274();
  L297():
    i14 = force? i13;
    checkMissing(i14);
    max = ldf max in base;
    r159 = dyn max(i14);
    check L298() else D87();
  L299():
    nrows13 = force? nrows12;
    checkMissing(nrows13);
    r160 = `>`(r158, nrows13);
    c66 = `as.logical`(r160);
    c67 = `&&`(c65, c66);
    goto L57(c67);
  L302():
    n5 = force? n4;
    checkMissing(n5);
    r161 = `==`(n5, 0);
    c70 = `as.logical`(r161);
    if c70 then L303() else L60();
  L370():
    nrows16 = ld nrows;
    check L372() else D118();
  L371():
    r214 = dyn base37(<sym nrows>);
    goto L81(r214);
  D29():
    deopt 100 [N8];
  D46():
    deopt 168 [r90];
  D47():
    deopt 169 [r92, nc2];
  D62():
    deopt 211 [x15];
  D74():
    deopt 267 [r140];
  D83():
    deopt 301 [ii2];
  D87():
    deopt 319 [c60, r159];
  D118():
    deopt 435 [nrows16];
  L33():
    goto L35();
  L35():
    make_unique = ldf `make.unique`;
    check L226() else D55();
  L51(r144):
    l12 = ld ii;
    c58 = `is.object`(l12);
    if c58 then L278() else L279(r144, l12);
  L60():
    goto L77();
  L77():
    xpdrows_data_frame = ldf `xpdrows.data.frame`;
    check L359() else D112();
  L82(dx30):
    st iseq = dx30;
    sym38 = ldf anyNA;
    base38 = ldf anyNA in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L377() else L378();
  L168():
    N9 = force? N8;
    checkMissing(N9);
    r56 = `>`(N9, 0);
    c21 = `as.logical`(r56);
    if c21 then L169() else L18(c21);
  L209():
    goto L31(r90);
  L212():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L32(dx2);
  L213():
    nc3 = force? nc2;
    __1 = ldf `[` in base;
    r93 = dyn __1(r92, nc3);
    goto L32(r93);
  L214():
    paste0 = ldf paste0;
    check L215() else D48();
  L234():
    x16 = force? x15;
    checkMissing(x16);
    popenv;
    return x16;
  L269():
    goto L49(r140);
  L273():
    nrows10 = ld nrows;
    check L275() else D77();
  L274():
    r143 = dyn base25[from, `length.out`](<lang `+`(nrows, 1)>, <sym n>);
    goto L51(r143);
  L288():
    ii3 = force? ii2;
    checkMissing(ii3);
    st i = ii3;
    goto L55();
  L298():
    goto L58(c60, r159);
  L303():
    nrows14 = ld nrows;
    check L304() else D90();
  L372():
    nrows17 = force? nrows16;
    checkMissing(nrows17);
    r216 = seq_len(nrows17);
    goto L81(r216);
  L373():
    dr18 = tryDispatchBuiltin.1("[", r215);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L375() else L374(dr18);
  L374(r218):
    i15 = ld i;
    check L376() else D119();
  D48():
    deopt 175 [];
  D55():
    deopt 194 [];
  D77():
    deopt 278 [nrows10];
  D90():
    deopt 328 [nrows14];
  D112():
    deopt 411 [];
  D119():
    deopt 438 [r218, i15];
  L18(c23):
    c27 = `as.logical`(c23);
    if c27 then L174() else L19(c27);
  L52(dx7):
    st ii = dx7;
    i7 = ld i;
    check L282() else D81();
  L83(r221):
    c94 = `as.logical`(r221);
    if c94 then L381() else L84();
  L169():
    nrows6 = ld nrows;
    check L170() else D30();
  L215():
    p14 = prom<V +>{
      nc4 = ld nc;
      nc5 = force? nc4;
      checkMissing(nc5);
      return nc5;
    };
    r96 = dyn paste0("V", p14);
    check L216() else D49();
  L226():
    p15 = prom<V +>{
      sym16 = ldf names;
      base16 = ldf names in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r108):
      return r108;
    L1():
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      names4 = ldf names in base;
      r109 = dyn names4(x14);
      goto L0(r109);
    L2():
      r107 = dyn base16(<sym x>);
      goto L0(r107);
    };
    r111 = dyn make_unique(p15);
    check L227() else D56();
  L275():
    nrows11 = force? nrows10;
    checkMissing(nrows11);
    r145 = `+`(nrows11, 1);
    n2 = ld n;
    check L276() else D78();
  L278():
    dr6 = tryDispatchBuiltin.0("[<-", l12, r144);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L280() else L279(r144, dr6);
  L279(r148, l14):
    new_rows = ld `new.rows`;
    check L281() else D80();
  L304():
    nrows15 = force? nrows14;
    checkMissing(nrows15);
    r162 = `+`(nrows15, 1);
    nn = ld nn;
    check L305() else D91();
  L359():
    p17 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    p18 = prom<V +>{
      rows4 = ld rows;
      rows5 = force? rows4;
      checkMissing(rows5);
      return rows5;
    };
    p19 = prom<V +>{
      new_rows8 = ld `new.rows`;
      new_rows9 = force? new_rows8;
      checkMissing(new_rows9);
      return new_rows9;
    };
    r206 = dyn xpdrows_data_frame(p17, p18, p19);
    check L360() else D113();
  L375():
    dx29 = getTryDispatchBuiltinValue(dr18);
    goto L82(dx29);
  L376():
    i16 = force? i15;
    __6 = ldf `[` in base;
    r219 = dyn __6(r218, i16);
    goto L82(r219);
  L377():
    iseq = ld iseq;
    check L379() else D120();
  L378():
    r220 = dyn base38(<sym iseq>);
    goto L83(r220);
  D30():
    deopt 105 [c21, nrows6];
  D49():
    deopt 178 [r96];
  D56():
    deopt 196 [r111];
  D78():
    deopt 283 [n2];
  D80():
    deopt 289 [r148, l14, r144, new_rows];
  D81():
    deopt 293 [i7];
  D91():
    deopt 331 [r162, nn];
  D113():
    deopt 415 [r206];
  D120():
    deopt 444 [iseq];
  L19(c29):
    c39 = `as.logical`(c29);
    if c39 then L183() else L22();
  L84():
    goto L85();
  L85():
    sym39 = ldf `is.character`;
    base39 = ldf `is.character` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L385() else L386();
  L170():
    nrows7 = force? nrows6;
    checkMissing(nrows7);
    N10 = ld N;
    check L171() else D31();
  L174():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L175() else L176();
  L216():
    l5 = ld x;
    names3 = ldf names;
    check L217() else D50();
  L227():
    l10 = ld x;
    names__2 = ldf `names<-`;
    check L228() else D57();
  L276():
    n3 = force? n2;
    checkMissing(n3);
    seq_int = ldf `seq.int` in base;
    r146 = dyn seq_int(r145, n3);
    check L277() else D79();
  L280():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L52(dx6);
  L281():
    new_rows1 = force? new_rows;
    ___1 = ldf `[<-` in base;
    r151 = dyn ___1(l14, r144, new_rows1);
    goto L52(r151);
  L282():
    i8 = force? i7;
    checkMissing(i8);
    c59 = `is.object`(i8);
    if c59 then L283() else L284(i8);
  L305():
    nn1 = force? nn;
    checkMissing(nn1);
    r163 = `:`(r162, nn1);
    st nrr = r163;
    sym28 = ldf inherits;
    base28 = ldf inherits in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L306() else L307();
  L360():
    st x = r206;
    sym35 = ldf attr;
    base35 = ldf attr in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L361() else L362();
  L379():
    iseq1 = force? iseq;
    checkMissing(iseq1);
    anyNA = ldf anyNA in base;
    r222 = dyn anyNA(iseq1);
    check L380() else D121();
  L381():
    stop3 = ldf stop;
    check L382() else D122();
  D31():
    deopt 107 [c21, N10];
  D50():
    deopt 180 [r96, l5, r96];
  D57():
    deopt 198 [r111, l10, r111];
  D79():
    deopt 287 [r146];
  D121():
    deopt 447 [r222];
  D122():
    deopt 449 [];
  L20(c32, r60):
    r65 = `<=`(r60, 1);
    c36 = `as.logical`(r65);
    c37 = `&&`(c32, c36);
    goto L19(c37);
  L22():
    stop1 = ldf stop;
    check L187() else D36();
  L24(r69):
    goto L25(r69);
  L53(dx9):
    st `new.rows` = dx9;
    goto L54();
  L61(r165):
    c71 = `as.logical`(r165);
    if c71 then L310() else L62(c71);
  L78(r208):
    st rows = r208;
    sym36 = ldf length;
    base36 = ldf length in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L365() else L366();
  L86(r226):
    c96 = `as.logical`(r226);
    if c96 then L388() else L87();
  L171():
    N11 = force? N10;
    checkMissing(N11);
    __ = ldf `%%` in base;
    r57 = dyn __(nrows7, N11);
    check L172() else D32();
  L175():
    sym11 = ldf dim;
    base11 = ldf dim in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L177() else L178();
  L176():
    r59 = dyn base10(<lang dim(value)>);
    goto L20(c27, r59);
  L183():
    sym12 = ldf rep;
    base12 = ldf rep in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L184() else L185();
  L217():
    r97 = dyn names3(r96, NULL);
    check L218() else D51();
  L228():
    r112 = dyn names__2(l10, NULL, r111);
    check L229() else D58();
  L277():
    goto L51(r146);
  L283():
    dr8 = tryDispatchBuiltin.1("[", i8);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L285() else L284(dr8);
  L284(i10):
    new_rows2 = ld `new.rows`;
    check L286() else D82();
  L306():
    value17 = ld value;
    check L308() else D92();
  L307():
    r164 = dyn base28(<sym value>, "data.frame");
    goto L61(r164);
  L361():
    x23 = ld x;
    check L363() else D114();
  L362():
    r207 = dyn base35(<sym x>, "row.names");
    goto L78(r207);
  L380():
    goto L83(r222);
  L382():
    r223 = dyn stop3("non-existent rows not allowed");
    check L383() else D123();
  L385():
    j1 = ld j;
    check L387() else D124();
  L386():
    r225 = dyn base39(<sym j>);
    goto L86(r225);
  D32():
    deopt 110 [c21, r57];
  D36():
    deopt 132 [];
  D51():
    deopt 182 [r96, l5, r96, r97];
  D58():
    deopt 200 [r111, r112];
  D82():
    deopt 295 [i10, new_rows2];
  D92():
    deopt 337 [value17];
  D114():
    deopt 419 [x23];
  D123():
    deopt 451 [r223];
  D124():
    deopt 455 [j1];
  L21(c35, r62):
    length1 = ldf length in base;
    r64 = dyn length1(r62);
    check L181() else D35();
  L23(r67):
    st value = r67;
    goto L24(r67);
  L62(c73):
    c88 = `as.logical`(c73);
    if c88 then L323() else L66();
  L79(r211):
    st nrows = r211;
    goto L80();
  L87():
    sym44 = ldf `is.logical`;
    base44 = ldf `is.logical` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L412() else L413();
  L95():
    sym48 = ldf length;
    base48 = ldf length in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L440() else L441();
  L172():
    r58 = `==`(r57, 0);
    c24 = `as.logical`(r58);
    c25 = `&&`(c21, c24);
    goto L18(c25);
  L177():
    value9 = ld value;
    check L179() else D33();
  L178():
    r61 = dyn base11(<sym value>);
    goto L21(c27, r61);
  L184():
    rep = ldf rep in base;
    r68 = dyn rep(<sym value>, <sym nrows>);
    goto L23(r68);
  L185():
    r66 = dyn base12[, `length.out`](<sym value>, <sym nrows>);
    goto L23(r66);
  L187():
    p13 = prom<V +>{
      sprintf1 = ldf sprintf;
      p10 = prom<V +>{
        ngettext1 = ldf ngettext;
        p9 = prom<V +>{
          N12 = ld N;
          N13 = force? N12;
          checkMissing(N13);
          return N13;
        };
        r71 = dyn ngettext1(p9, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
        return r71;
      };
      p11 = prom<V +>{
        N14 = ld N;
        N15 = force? N14;
        checkMissing(N15);
        return N15;
      };
      p12 = prom<V +>{
        nrows8 = ld nrows;
        nrows9 = force? nrows8;
        checkMissing(nrows9);
        return nrows9;
      };
      r75 = dyn sprintf1(p10, p11, p12);
      return r75;
    };
    r77 = dyn stop1[, domain](p13, NA_LGL);
    check L188() else D37();
  L218():
    c44 = `is.object`(r97);
    if c44 then L219() else L220(r96, l5, r97);
  L229():
    st x = r112;
    goto L36();
  L285():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L53(dx8);
  L286():
    new_rows3 = force? new_rows2;
    __2 = ldf `[` in base;
    r152 = dyn __2(i10, new_rows3);
    goto L53(r152);
  L308():
    value18 = force? value17;
    checkMissing(value18);
    inherits = ldf inherits in base;
    r166 = dyn inherits(value18, "data.frame", FALSE);
    check L309() else D93();
  L310():
    sym29 = ldf dim;
    base29 = ldf dim in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L311() else L312();
  L363():
    x24 = force? x23;
    checkMissing(x24);
    attr2 = ldf attr in base;
    r209 = dyn attr2(x24, "row.names");
    check L364() else D115();
  L365():
    rows6 = ld rows;
    check L367() else D116();
  L366():
    r210 = dyn base36(<sym rows>);
    goto L79(r210);
  L383():
    goto L85();
  L387():
    j2 = force? j1;
    checkMissing(j2);
    c95 = `is.character`(j2);
    goto L86(c95);
  L388():
    _in_1 = ldf `%in%`;
    check L389() else D125();
  D33():
    deopt 118 [c27, value9];
  D35():
    deopt 123 [c35, r64];
  D37():
    deopt 136 [r77];
  D93():
    deopt 342 [r166];
  D115():
    deopt 423 [r209];
  D116():
    deopt 427 [rows6];
  D125():
    deopt 459 [];
  L34(r103, l9, dx5):
    names__1 = ldf `names<-`;
    check L223() else D53();
  L63(c76, r168):
    c77 = `is.object`(r168);
    if c77 then L315() else L316(c76, r168);
  L66():
    nrr8 = ld nrr;
    check L357() else D111();
  L76(dx27):
    goto L77();
  L96(r251):
    c101 = `as.logical`(r251);
    if c101 then L97(c101) else L415();
  L104(r273):
    r275 = `>`(r273, 1);
    c114 = `as.logical`(r275);
    if c114 then L105(c114) else L444();
  L179():
    value10 = force? value9;
    checkMissing(value10);
    dim = ldf dim in base;
    r63 = dyn dim(value10);
    check L180() else D34();
  L181():
    goto L20(c35, r64);
  L188():
    goto L24(r77);
  L219():
    dr4 = tryDispatchBuiltin.0("[<-", r97, r96);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L221() else L220(r96, l5, dr4);
  L220(r100, l7, r101):
    nc6 = ld nc;
    check L222() else D52();
  L309():
    goto L61(r166);
  L311():
    value19 = ld value;
    check L313() else D94();
  L312():
    r167 = dyn base29(<sym value>);
    goto L63(c71, r167);
  L323():
    sym31 = ldf attr;
    base31 = ldf attr in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L324() else L325();
  L364():
    goto L78(r209);
  L367():
    rows7 = force? rows6;
    checkMissing(rows7);
    length6 = ldf length in base;
    r212 = dyn length6(rows7);
    check L368() else D117();
  L389():
    p20 = prom<V +>{
      j3 = ld j;
      j4 = force? j3;
      checkMissing(j4);
      return j4;
    };
    r228 = dyn _in_1("", p20);
    check L390() else D126();
  L412():
    j14 = ld j;
    check L414() else D137();
  L413():
    r250 = dyn base44(<sym j>);
    goto L96(r250);
  L440():
    iseq2 = ld iseq;
    check L442() else D148();
  L441():
    r272 = dyn base48(<sym iseq>);
    goto L104(r272);
  D34():
    deopt 121 [c27, r63];
  D52():
    deopt 184 [r100, l7, r101, r96, nc6];
  D53():
    deopt 187 [r103, l9, dx5];
  D94():
    deopt 345 [c71, value19];
  D111():
    deopt 405 [nrr8];
  D117():
    deopt 430 [r212];
  D126():
    deopt 462 [r228];
  D137():
    deopt 499 [j14];
  D148():
    deopt 540 [iseq2];
  L64(c81, dx12):
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L318() else L319();
  L67(r178):
    c89 = `is.object`(r178);
    if c89 then L328() else L329(r178);
  L97(c102):
    c110 = `as.logical`(c102);
    if c110 then L421() else L99();
  L105(c115):
    c123 = `as.logical`(c115);
    if c123 then L450() else L107();
  L180():
    goto L21(c27, r63);
  L221():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L34(r96, l5, dx4);
  L222():
    nc7 = force? nc6;
    ___ = ldf `[<-` in base;
    r104 = dyn ___(r101, r96, nc7);
    goto L34(r100, l7, r104);
  L223():
    r105 = dyn names__1(l9, NULL, dx5);
    check L224() else D54();
  L313():
    value20 = force? value19;
    checkMissing(value20);
    dim1 = ldf dim in base;
    r169 = dyn dim1(value20);
    check L314() else D95();
  L315():
    dr10 = tryDispatchBuiltin.1("[", r168);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L317() else L316(c76, dr10);
  L316(c79, r171):
    __3 = ldf `[` in base;
    r172 = dyn __3(r171, 1);
    goto L64(c79, r172);
  L324():
    value21 = ld value;
    check L326() else D98();
  L325():
    r177 = dyn base31(<sym value>, "row.names");
    goto L67(r177);
  L357():
    nrr9 = force? nrr8;
    checkMissing(nrr9);
    st `new.rows` = nrr9;
    goto L76(nrr9);
  L368():
    goto L79(r212);
  L390():
    c97 = `as.logical`(r228);
    if c97 then L391() else L88();
  L414():
    j15 = force? j14;
    checkMissing(j15);
    c100 = `is.logical`(j15);
    goto L96(c100);
  L415():
    sym45 = ldf min;
    base45 = ldf min in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L416() else L417();
  L442():
    iseq3 = force? iseq2;
    checkMissing(iseq3);
    length7 = ldf length in base;
    r274 = dyn length7(iseq3);
    check L443() else D149();
  L444():
    sym49 = ldf length;
    base49 = ldf length in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L445() else L446();
  D54():
    deopt 189 [r103, r105];
  D95():
    deopt 348 [c71, r169];
  D98():
    deopt 361 [value21];
  D149():
    deopt 543 [r274];
  L65(c84, dx15, r174):
    r176 = `>=`(dx15, r174);
    c85 = `as.logical`(r176);
    c86 = `&&`(c84, c85);
    goto L62(c86);
  L68(dx17):
    st `new.rows` = dx17;
    duplicated = ldf duplicated;
    check L334() else D101();
  L88():
    goto L89();
  L89():
    sym40 = ldf match;
    base40 = ldf match in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L395() else L396();
  L98(c106, r253):
    r255 = `<`(r253, 0);
    c107 = `as.logical`(r255);
    c108 = `||`(c106, c107);
    goto L97(c108);
  L99():
    j20 = ld j;
    check L430() else D142();
  L106(c119, r277):
    r279 = `>`(r277, 1);
    c120 = `as.logical`(r279);
    c121 = `||`(c119, c120);
    goto L105(c121);
  L107():
    goto L108();
  L108():
    value23 = ld value;
    check L454() else D154();
  L224():
    st x = r105;
    goto L35();
  L314():
    goto L63(c71, r169);
  L317():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L64(c76, dx11);
  L318():
    nrr = ld nrr;
    check L320() else D96();
  L319():
    r173 = dyn base30(<sym nrr>);
    goto L65(c81, dx12, r173);
  L326():
    value22 = force? value21;
    checkMissing(value22);
    attr1 = ldf attr in base;
    r179 = dyn attr1(value22, "row.names");
    check L327() else D99();
  L328():
    dr12 = tryDispatchBuiltin.1("[", r178);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L330() else L329(dr12);
  L329(r181):
    sym32 = ldf seq_len;
    base32 = ldf seq_len in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L331() else L332();
  L391():
    stop4 = ldf stop;
    check L392() else D127();
  L416():
    j16 = ld j;
    check L418() else D138();
  L417():
    r252 = dyn base45(<sym j>);
    goto L98(c101, r252);
  L421():
    sym46 = ldf seq_along;
    base46 = ldf seq_along in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L422() else L423();
  L443():
    goto L104(r274);
  L445():
    jseq12 = ld jseq;
    check L447() else D150();
  L446():
    r276 = dyn base49(<sym jseq>);
    goto L106(c114, r276);
  L450():
    stop7 = ldf stop;
    check L451() else D152();
  D96():
    deopt 353 [c81, dx12, nrr];
  D99():
    deopt 365 [r179];
  D101():
    deopt 373 [];
  D127():
    deopt 464 [];
  D138():
    deopt 504 [c101, j16];
  D142():
    deopt 519 [j20];
  D150():
    deopt 548 [c114, jseq12];
  D152():
    deopt 556 [];
  D154():
    deopt 561 [value23];
  L69(r185, r186):
    __4 = ldf `[` in base;
    r188 = dyn __4(r185, r186);
    goto L68(r188);
  L90(r232):
    st jseq = r232;
    sym42 = ldf anyNA;
    base42 = ldf anyNA in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L403() else L404();
  L100(r257):
    c111 = `is.object`(r257);
    if c111 then L425() else L426(r257);
  L320():
    nrr1 = force? nrr;
    checkMissing(nrr1);
    length5 = ldf length in base;
    r175 = dyn length5(nrr1);
    check L321() else D97();
  L327():
    goto L67(r179);
  L330():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L68(dx16);
  L331():
    nrr2 = ld nrr;
    check L333() else D100();
  L332():
    r184 = dyn base32(<sym nrr>);
    goto L69(r181, r184);
  L334():
    p16 = prom<V +>{
      new_rows4 = ld `new.rows`;
      new_rows5 = force? new_rows4;
      checkMissing(new_rows5);
      return new_rows5;
    };
    r190 = dyn duplicated(p16);
    check L335() else D102();
  L392():
    r229 = dyn stop4("column name \"\" cannot match any column");
    check L393() else D128();
  L395():
    j5 = ld j;
    check L397() else D129();
  L396():
    r231 = dyn base40(<sym j>, <lang names(x)>);
    goto L90(r231);
  L418():
    j17 = force? j16;
    checkMissing(j17);
    min = ldf min in base;
    r254 = dyn min(j17);
    check L419() else D139();
  L422():
    x27 = ld x;
    check L424() else D140();
  L423():
    r256 = dyn base46(<sym x>);
    goto L100(r256);
  L430():
    j21 = force? j20;
    checkMissing(j21);
    st jseq = j21;
    sym47 = ldf max;
    base47 = ldf max in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L431() else L432();
  L447():
    jseq13 = force? jseq12;
    checkMissing(jseq13);
    length8 = ldf length in base;
    r278 = dyn length8(jseq13);
    check L448() else D151();
  L451():
    r280 = dyn stop7("only a single element should be replaced");
    check L452() else D153();
  L454():
    value24 = force? value23;
    checkMissing(value24);
    l18 = ld x;
    c124 = `is.object`(l18);
    if c124 then L455() else L456(value24, l18, value24, l18);
  D97():
    deopt 356 [c81, dx12, r175];
  D100():
    deopt 367 [r181, nrr2];
  D102():
    deopt 375 [r190];
  D128():
    deopt 466 [r229];
  D129():
    deopt 471 [j5];
  D139():
    deopt 507 [c101, r254];
  D140():
    deopt 512 [x27];
  D151():
    deopt 551 [c114, r278];
  D153():
    deopt 558 [r280];
  L92(r238):
    c98 = `as.logical`(r238);
    if c98 then L407() else L93();
  L101(dx34):
    st jseq = dx34;
    goto L95();
  L102(r263):
    nvars = ld nvars;
    check L435() else D145();
  L109(value31, l24, value32, dx38):
    c125 = `is.object`(dx38);
    if c125 then L459() else L460(value31, l24, dx38);
  L321():
    goto L65(c81, dx12, r175);
  L333():
    nrr3 = force? nrr2;
    checkMissing(nrr3);
    r187 = seq_len(nrr3);
    goto L69(r181, r187);
  L335():
    sym33 = ldf match;
    base33 = ldf match in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L336() else L337();
  L393():
    goto L89();
  L397():
    j6 = force? j5;
    checkMissing(j6);
    sym41 = ldf names;
    base41 = ldf names in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L398() else L399();
  L403():
    jseq = ld jseq;
    check L405() else D133();
  L404():
    r237 = dyn base42(<sym jseq>);
    goto L92(r237);
  L419():
    goto L98(c101, r254);
  L424():
    x28 = force? x27;
    checkMissing(x28);
    r258 = seq_along(x28);
    goto L100(r258);
  L425():
    dr22 = tryDispatchBuiltin.1("[", r257);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L427() else L426(dr22);
  L426(r260):
    j18 = ld j;
    check L428() else D141();
  L431():
    jseq4 = ld jseq;
    check L433() else D143();
  L432():
    r262 = dyn base47(<sym jseq>);
    goto L102(r262);
  L448():
    goto L106(c114, r278);
  L452():
    goto L108();
  L455():
    dr26 = tryDispatchBuiltin.1("[[", l18);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L457() else L456(value24, l18, value24, dr26);
  L456(value27, l21, value28, l22):
    jseq14 = ld jseq;
    check L458() else D155();
  D133():
    deopt 486 [jseq];
  D141():
    deopt 515 [r260, j18];
  D143():
    deopt 524 [jseq4];
  D145():
    deopt 527 [r263, nvars];
  D155():
    deopt 565 [value27, l21, value28, l22, jseq14];
  L70(r194, r195):
    r197 = `||`(r194, r195);
    st repl = r197;
    sym34 = ldf any;
    base34 = ldf any in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L341() else L342();
  L91(r234):
    match2 = ldf match in base;
    r236 = dyn match2(j6, r234, NA_INT, NULL);
    check L402() else D132();
  L93():
    goto L94(NULL);
  L94(r248):
    goto L95();
  L110(value36, l28, dx42):
    c126 = `is.object`(l28);
    if c126 then L463() else L464(value36, l28);
  L336():
    new_rows6 = ld `new.rows`;
    check L338() else D103();
  L337():
    r193 = dyn base33(<sym new.rows>, <sym rows>, 0);
    goto L70(r190, r193);
  L398():
    x25 = ld x;
    check L400() else D130();
  L399():
    r233 = dyn base41(<sym x>);
    goto L91(r233);
  L405():
    jseq1 = force? jseq;
    checkMissing(jseq1);
    anyNA1 = ldf anyNA in base;
    r239 = dyn anyNA1(jseq1);
    check L406() else D134();
  L407():
    stop5 = ldf stop;
    check L408() else D135();
  L427():
    dx33 = getTryDispatchBuiltinValue(dr22);
    goto L101(dx33);
  L428():
    j19 = force? j18;
    __8 = ldf `[` in base;
    r261 = dyn __8(r260, j19);
    goto L101(r261);
  L433():
    jseq5 = force? jseq4;
    checkMissing(jseq5);
    max1 = ldf max in base;
    r264 = dyn max1(jseq5);
    check L434() else D144();
  L435():
    nvars1 = force? nvars;
    checkMissing(nvars1);
    r265 = `>`(r263, nvars1);
    c112 = `as.logical`(r265);
    if c112 then L436() else L103();
  L457():
    dx37 = getTryDispatchBuiltinValue(dr26);
    goto L109(value24, l18, value24, dx37);
  L458():
    jseq15 = force? jseq14;
    __10 = ldf `[[` in base;
    r282 = dyn __10(l22, jseq15);
    goto L109(value27, l21, value28, r282);
  L459():
    dr28 = tryDispatchBuiltin.0("[[<-", dx38, value32);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L461() else L460(value31, l24, dr28);
  L460(value34, l26, dx40):
    iseq4 = ld iseq;
    check L462() else D156();
  D103():
    deopt 377 [r190, new_rows6];
  D130():
    deopt 475 [x25];
  D132():
    deopt 482 [r236];
  D134():
    deopt 489 [r239];
  D135():
    deopt 491 [];
  D144():
    deopt 527 [r264];
  D156():
    deopt 569 [value34, l26, dx40, value32, iseq4];
  L71(r199):
    c90 = `as.logical`(r199);
    if c90 then L345() else L72();
  L103():
    goto L95();
  L111(dx44):
    st x = dx44;
    cl2 = ld cl;
    check L467() else D158();
  L338():
    new_rows7 = force? new_rows6;
    checkMissing(new_rows7);
    rows2 = ld rows;
    check L339() else D104();
  L341():
    repl = ld repl;
    check L343() else D106();
  L342():
    r198 = dyn base34(<sym repl>);
    goto L71(r198);
  L400():
    x26 = force? x25;
    checkMissing(x26);
    names5 = ldf names in base;
    r235 = dyn names5(x26);
    check L401() else D131();
  L402():
    goto L90(r236);
  L406():
    goto L92(r239);
  L408():
    p22 = prom<V +>{
      gettextf = ldf gettextf;
      p21 = prom<V +>{
        j7 = ld j;
        j8 = force? j7;
        checkMissing(j8);
        c99 = `is.object`(j8);
        if c99 then L2() else L3(j8);
      L0(dx32):
        return dx32;
      L2():
        dr20 = tryDispatchBuiltin.1("[", j8);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L4() else L3(dr20);
      L3(j10):
        sym43 = ldf `is.na`;
        base43 = ldf `is.na` in base;
        guard43 = `==`.4(sym43, base43);
        if guard43 then L5() else L6();
      L1(j13, r241):
        __7 = ldf `[` in base;
        r243 = dyn __7(j13, r241);
        goto L0(r243);
      L4():
        dx31 = getTryDispatchBuiltinValue(dr20);
        goto L0(dx31);
      L5():
        jseq2 = ld jseq;
        jseq3 = force? jseq2;
        checkMissing(jseq3);
        is_na1 = ldf `is.na` in base;
        r242 = dyn is_na1(jseq3);
        goto L1(j10, r242);
      L6():
        r240 = dyn base43(<sym jseq>);
        goto L1(j10, r240);
      };
      r245 = dyn gettextf("replacing element in non-existent column: %s", p21);
      return r245;
    };
    r247 = dyn stop5[, domain](p22, NA_LGL);
    check L409() else D136();
  L434():
    goto L102(r264);
  L436():
    stop6 = ldf stop;
    check L437() else D146();
  L461():
    dx41 = getTryDispatchBuiltinValue(dr28);
    goto L110(value31, l24, dx41);
  L462():
    iseq5 = force? iseq4;
    ____1 = ldf `[[<-` in base;
    r283 = dyn ____1(dx40, value32, iseq5);
    goto L110(value34, l26, r283);
  L463():
    dr30 = tryDispatchBuiltin.0("[[<-", l28, dx42);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L465() else L464(value36, dr30);
  L464(value38, l30):
    jseq16 = ld jseq;
    check L466() else D157();
  D104():
    deopt 379 [r190, rows2];
  D106():
    deopt 389 [repl];
  D131():
    deopt 478 [r235];
  D136():
    deopt 495 [r247];
  D146():
    deopt 531 [];
  D157():
    deopt 572 [value38, l30, dx42, jseq16];
  D158():
    deopt 576 [cl2];
  L72():
    goto L75(NULL);
  L75(dx26):
    goto L76(dx26);
  L339():
    rows3 = force? rows2;
    checkMissing(rows3);
    match1 = ldf match in base;
    r196 = dyn match1(new_rows7, rows3, 0, NULL);
    check L340() else D105();
  L343():
    repl1 = force? repl;
    checkMissing(repl1);
    any = ldf any in base;
    r200 = dyn any(repl1);
    check L344() else D107();
  L345():
    nrr4 = ld nrr;
    check L346() else D108();
  L401():
    goto L91(r235);
  L409():
    goto L94(r247);
  L437():
    p24 = prom<V +>{
      gettextf1 = ldf gettextf;
      p23 = prom<V +>{
        jseq6 = ld jseq;
        jseq7 = force? jseq6;
        checkMissing(jseq7);
        c113 = `is.object`(jseq7);
        if c113 then L1() else L2(jseq7);
      L0(dx36):
        return dx36;
      L1():
        dr24 = tryDispatchBuiltin.1("[", jseq7);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L3() else L2(dr24);
      L2(jseq9):
        jseq10 = ld jseq;
        jseq11 = force? jseq10;
        checkMissing(jseq11);
        nvars2 = ld nvars;
        nvars3 = force? nvars2;
        checkMissing(nvars3);
        r266 = `>`(jseq11, nvars3);
        __9 = ldf `[` in base;
        r267 = dyn __9(jseq9, r266);
        goto L0(r267);
      L3():
        dx35 = getTryDispatchBuiltinValue(dr24);
        goto L0(dx35);
      };
      r269 = dyn gettextf1("replacing element in non-existent column: %s", p23);
      return r269;
    };
    r271 = dyn stop6[, domain](p24, NA_LGL);
    check L438() else D147();
  L465():
    dx43 = getTryDispatchBuiltinValue(dr30);
    goto L111(dx43);
  L466():
    jseq17 = force? jseq16;
    ____2 = ldf `[[<-` in base;
    r284 = dyn ____2(l30, dx42, jseq17);
    goto L111(r284);
  L467():
    cl3 = force? cl2;
    checkMissing(cl3);
    l31 = ld x;
    class__2 = ldf `class<-`;
    check L468() else D159();
  D105():
    deopt 384 [r190, r196];
  D107():
    deopt 392 [r200];
  D108():
    deopt 393 [nrr4];
  D147():
    deopt 535 [r271];
  D159():
    deopt 579 [cl3, l31, cl3];
  L340():
    goto L70(r190, r196);
  L344():
    goto L71(r200);
  L346():
    nrr5 = force? nrr4;
    checkMissing(nrr5);
    c91 = `is.object`(nrr5);
    if c91 then L347() else L348(nrr5);
  L438():
    goto L95();
  L468():
    r285 = dyn class__2(l31, NULL, cl3);
    check L469() else D160();
  D160():
    deopt 581 [cl3, r285];
  L73(dx19):
    l15 = ld `new.rows`;
    c92 = `is.object`(l15);
    if c92 then L351() else L352(dx19, l15);
  L347():
    dr14 = tryDispatchBuiltin.1("[", nrr5);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L349() else L348(dr14);
  L348(nrr7):
    repl2 = ld repl;
    check L350() else D109();
  L469():
    st x = r285;
    x29 = ld x;
    check L470() else D161();
  D109():
    deopt 395 [nrr7, repl2];
  D161():
    deopt 583 [x29];
  L74(dx24, dx25):
    st `new.rows` = dx25;
    goto L75(dx24);
  L349():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L73(dx18);
  L350():
    repl3 = force? repl2;
    __5 = ldf `[` in base;
    r201 = dyn __5(nrr7, repl3);
    goto L73(r201);
  L351():
    dr16 = tryDispatchBuiltin.0("[<-", l15, dx19);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L353() else L352(dx19, dr16);
  L352(dx21, l17):
    repl4 = ld repl;
    check L354() else D110();
  L470():
    x30 = force? x29;
    checkMissing(x30);
    popenv;
    return x30;
  D110():
    deopt 399 [dx21, l17, dx19, repl4];
  L353():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L74(dx19, dx23);
  L354():
    repl5 = force? repl4;
    ___2 = ldf `[<-` in base;
    r202 = dyn ___2(l17, dx19, repl5);
    goto L74(dx21, r202);
  }
}