fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-757692484`;
    st `sort.int` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-757692484`(x, partial, `na.last`, decreasing, method, `index.return`) {
  (reg x:*, reg partial:*, reg na_last:*, reg decreasing:*, reg method:*, reg index_return:*) -+> V { var x:*, var partial:*, reg partial_isMissing:L, reg partial_orDefault:*, var `na.last`:*, reg na_last_isMissing:L, reg na_last_orDefault:*, var decreasing:*, reg decreasing_isMissing:L, reg decreasing_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `index.return`:*, reg index_return_isMissing:L, reg index_return_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg decreasing1:*, reg decreasing2:V, reg as_logical:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg partial1:*, reg partial2:V, reg c1:V, reg c2:L, reg c4:V, reg index_return1:*, reg index_return2:V, reg r9:V, reg c5:L, reg c6:V, reg c8:L, reg c10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg c13:L, reg r11:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r12:V, reg c14:L, reg c15:V, reg c17:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg x3:*, reg x4:V, reg decreasing3:*, reg decreasing4:V, reg na_last1:*, reg na_last2:V, reg sorted_fpass:cls, reg r15:V, reg c18:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg r17:V, reg x5:*, reg x6:V, reg attributes:cls, reg r18:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg r20:V, reg attr:*, reg attr1:V, reg c19:V, reg r21:V, reg c20:L, reg c22:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r22:V, reg c25:L, reg r23:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r24:V, reg c28:L, reg r25:V, reg attr2:*, reg attr3:V, reg names:cls, reg r26:V, reg identical:cls, reg r27:V, reg r28:V, reg c29:L, reg c30:V, reg c32:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r29:V, reg r30:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r31:V, reg r32:V, reg x7:*, reg x8:V, reg names1:cls, reg r33:V, reg list:cls, reg r34:V, reg l:*, reg attributes__:cls, reg r35:V, reg x9:*, reg x10:V, reg match_arg:cls, reg method1:*, reg method2:V, reg p1:p(V +), reg r41:V, reg method3:*, reg method4:V, reg r42:V, reg c33:L, reg c35:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r43:V, reg c38:L, reg r44:V, reg partial3:*, reg partial4:V, reg c39:V, reg c40:L, reg c41:V, reg c43:L, reg c45:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r45:V, reg c48:L, reg r46:V, reg x11:*, reg x12:V, reg is_numeric1:cls, reg r47:V, reg c49:L, reg c50:L, reg c51:V, reg is_factor:cls, reg x13:*, reg x14:V, reg p2:p(V +), reg r49:V, reg c54:L, reg c55:V, reg c58:L, reg c59:L, reg c60:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r50:V, reg c67:L, reg c68:L, reg r51:V, reg x15:*, reg x16:V, reg c69:L, reg c70:L, reg c71:V, reg c74:L, reg c75:V, reg c77:L, reg c79:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r52:V, reg c82:L, reg r53:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r54:V, reg c85:L, reg r55:V, reg x17:*, reg x18:V, reg length:cls, reg r56:V, reg c86:L, reg c87:L, reg c88:V, reg c90:L, reg method5:*, reg method6:V, reg r58:V, reg c91:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r59:V, reg r60:V, reg partial5:*, reg partial6:V, reg c92:V, reg r61:V, reg c93:L, reg stop:cls, reg r62:V, reg index_return3:*, reg index_return4:V, reg c94:L, reg c96:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r64:V, reg c99:L, reg r65:V, reg na_last3:*, reg na_last4:V, reg is_na:cls, reg r66:V, reg c100:L, reg c101:V, reg c103:L, reg x19:*, reg x20:V, reg c104:L, reg x22:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r67:V, reg x25:V, reg r68:V, reg x26:*, reg x27:V, reg is_na1:cls, reg r69:V, reg r70:V, reg __:cls, reg r71:V, reg order:cls, reg x28:*, reg x29:V, reg p3:p(V +), reg na_last5:*, reg na_last6:V, reg p4:p(V +), reg decreasing5:*, reg decreasing6:V, reg p5:p(V +), reg r76:V, reg x30:*, reg x31:V, reg c105:L, reg x33:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg o:*, reg o1:V, reg __1:cls, reg r77:V, reg _doSortWrap:cls, reg y:*, reg y1:V, reg p6:p(V +), reg decreasing7:*, reg decreasing8:V, reg p7:p(V +), reg na_last7:*, reg na_last8:V, reg p8:p(V +), reg r81:V, reg index_return5:*, reg index_return6:V, reg c106:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r82:V, reg r83:V, reg y2:*, reg y3:V, reg o2:*, reg o3:V, reg list1:cls, reg r84:V, reg r85:V, reg y4:*, reg y5:V, reg method7:*, reg method8:V, reg r88:V, reg c107:L, reg c108:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r89:V, reg c112:L, reg r90:V, reg x34:*, reg x35:V, reg is_numeric2:cls, reg r91:V, reg r92:V, reg c113:L, reg c114:V, reg c116:L, reg is_factor1:cls, reg x36:*, reg x37:V, reg p9:p(V +), reg r94:V, reg c117:L, reg index_return7:*, reg index_return8:V, reg c118:L, reg stop1:cls, reg r95:V, reg levels:cls, reg x38:*, reg x39:V, reg p10:p(V +), reg r98:V, reg nlevels:cls, reg x40:*, reg x41:V, reg p11:p(V +), reg r100:V, reg is_ordered:cls, reg x42:*, reg x43:V, reg p12:p(V +), reg r102:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r103:V, reg r104:V, reg x44:*, reg x45:V, reg c119:cls, reg r105:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r107:V, reg r108:V, reg x46:*, reg x47:V, reg c120:V, reg c121:L, reg x48:*, reg x49:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r110:V, reg r111:V, reg x50:*, reg x51:V, reg is_atomic:cls, reg r112:V, reg r113:V, reg c122:L, reg stop2:cls, reg r114:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r115:V, reg r116:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r117:V, reg r118:V, reg x52:*, reg x53:V, reg is_na2:cls, reg r119:V, reg any:cls, reg r120:V, reg c123:L, reg x54:*, reg x55:V, reg c124:L, reg x57:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ina:*, reg ina1:V, reg __2:cls, reg r121:V, reg x58:*, reg x59:V, reg c125:L, reg x61:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ina2:*, reg ina3:V, reg r122:V, reg __3:cls, reg r123:V, reg index_return9:*, reg index_return10:V, reg c126:L, reg c128:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r124:V, reg c131:L, reg r125:V, reg na_last9:*, reg na_last10:V, reg is_na3:cls, reg r126:V, reg r127:V, reg c132:L, reg c133:V, reg c135:L, reg stop3:cls, reg r128:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r130:V, reg r131:V, reg partial7:*, reg partial8:V, reg c136:V, reg r132:V, reg c137:L, reg index_return11:*, reg index_return12:V, reg c138:L, reg c139:V, reg decreasing9:*, reg decreasing10:V, reg c141:L, reg c142:V, reg c144:L, reg c145:V, reg isfact:*, reg isfact1:V, reg c147:L, reg c148:V, reg c150:L, reg c151:V, reg method9:*, reg method10:V, reg r133:V, reg c153:L, reg c154:V, reg c156:L, reg stop4:cls, reg r134:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r136:V, reg r137:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r138:V, reg r139:V, reg partial9:*, reg partial10:V, reg is_finite:cls, reg r140:V, reg all:cls, reg r141:V, reg r142:V, reg c157:L, reg stop5:cls, reg r143:V, reg has_na:*, reg has_na1:V, reg c158:L, reg c160:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r145:V, reg c163:L, reg r146:V, reg na_last11:*, reg na_last12:V, reg is_na4:cls, reg r147:V, reg r148:V, reg c164:L, reg c165:V, reg c167:L, reg na_last13:*, reg na_last14:V, reg c168:L, reg partial11:*, reg partial12:V, reg c169:L, reg partial14:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg partial15:*, reg partial16:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r149:V, reg partial21:V, reg partial22:V, reg r150:V, reg x62:*, reg x63:V, reg length1:cls, reg r151:V, reg r152:V, reg __4:cls, reg r153:V, reg dx11:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r154:V, reg r155:V, reg ina4:*, reg ina5:V, reg sum:cls, reg r156:V, reg partial23:*, reg partial24:V, reg c170:L, reg partial26:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg partial27:*, reg partial28:V, reg k:*, reg k1:V, reg r157:V, reg __5:cls, reg r158:V, reg k2:*, reg k3:V, reg r159:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r160:V, reg r161:V, reg partial29:*, reg partial30:V, reg length2:cls, reg r162:V, reg r163:V, reg c171:L, reg sym34:cls, reg base34:cls, reg guard34:L, reg r164:V, reg r165:V, reg partial31:*, reg partial32:V, reg qsort:cls, reg r166:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r167:V, reg r168:V, reg x64:*, reg x65:V, reg partial33:*, reg partial34:V, reg psort:cls, reg r169:V, reg r170:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r171:V, reg r172:V, reg x66:*, reg x67:V, reg c172:L, reg c173:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r173:V, reg r174:V, reg x68:*, reg x69:V, reg qsort1:cls, reg r175:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r176:V, reg x70:*, reg x71:V, reg sort:cls, reg r177:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r179:V, reg r180:V, reg x72:*, reg x73:V, reg names2:cls, reg r181:V, reg method11:*, reg method12:V, reg c174:L, reg c175:L, reg c176:L, reg c177:L, reg c178:L, reg i_ddd:dots, reg i:V, reg c179:L, reg c180:L, reg sym40:cls, reg base40:cls, reg guard40:L, reg r182:V, reg r183:V, reg nms:*, reg nms1:V, reg c181:V, reg r184:V, reg c182:L, reg decreasing11:*, reg decreasing12:V, reg c183:L, reg x74:*, reg x75:V, reg r185:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r187:V, reg r188:V, reg x76:*, reg x77:V, reg qsort2:cls, reg r189:V, reg decreasing13:*, reg decreasing14:V, reg c184:L, reg y6:*, reg y7:V, reg c185:L, reg y9:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg r190:V, reg r191:V, reg l1:*, reg c186:L, reg r193:V, reg l3:*, reg dr14:V, reg dc7:L, reg dx17:V, reg r195:V, reg dx18:V, reg r196:V, reg nms2:*, reg nms3:V, reg c187:L, reg nms5:V, reg dr16:V, reg dc8:L, reg dx19:V, reg dx20:V, reg y10:*, reg y11:V, reg c188:L, reg nms7:V, reg y13:V, reg dr18:V, reg dc9:L, reg dx21:V, reg nms9:V, reg dx22:V, reg r198:V, reg __6:cls, reg r199:V, reg l4:*, reg c189:L, reg dx25:V, reg l7:*, reg dx26:V, reg l8:*, reg dr20:V, reg dc10:L, reg dx29:V, reg dx30:V, reg l10:*, reg dx31:V, reg dx32:V, reg r200:V, reg names__:cls, reg r201:V, reg c190:L, reg dx34:V, reg l12:*, reg dr22:V, reg dc11:L, reg dx36:V, reg dx38:V, reg r202:V, reg index_return13:*, reg index_return14:V, reg r203:V, reg c191:L, reg y14:*, reg y15:V, reg c192:L, reg y17:V, reg dr24:V, reg dc12:L, reg dx39:V, reg dx40:V, reg r204:V, reg dx41:V, reg dx42:V, reg decreasing15:*, reg decreasing16:V, reg c193:L, reg x78:*, reg x79:V, reg r205:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r207:V, reg r208:V, reg x80:*, reg x81:V, reg index_return15:*, reg index_return16:V, reg qsort3:cls, reg r209:V, reg decreasing17:*, reg decreasing18:V, reg c194:L, reg index_return17:*, reg index_return18:V, reg c195:L, reg y18:*, reg y19:V, reg c196:L, reg y21:V, reg dr26:V, reg dc13:L, reg dx43:V, reg dx44:V, reg r210:V, reg r211:V, reg l13:*, reg c197:L, reg r213:V, reg l15:*, reg dr28:V, reg dc14:L, reg dx45:V, reg r215:V, reg dx46:V, reg r216:V, reg r217:V, reg y22:*, reg y23:V, reg r218:V, reg index_return19:*, reg index_return20:V, reg c198:L, reg c199:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r219:V, reg c203:L, reg r220:V, reg nms10:*, reg nms11:V, reg c204:V, reg r221:V, reg c205:L, reg c206:V, reg c208:L, reg sort_list:cls, reg x82:*, reg x83:V, reg p13:p(V +), reg decreasing19:*, reg decreasing20:V, reg p14:p(V +), reg r224:V, reg index_return21:*, reg index_return22:V, reg c209:L, reg sym44:cls, reg base44:cls, reg guard44:L, reg r225:V, reg r226:V, reg x84:*, reg x85:V, reg c210:L, reg x87:V, reg dr30:V, reg dc15:L, reg dx47:V, reg dx48:V, reg o4:*, reg o5:V, reg __7:cls, reg r227:V, reg o6:*, reg o7:V, reg list2:cls, reg r228:V, reg r229:V, reg x88:*, reg x89:V, reg c211:L, reg x91:V, reg dr32:V, reg dc16:L, reg dx49:V, reg o8:*, reg o9:V, reg __8:cls, reg r230:V, reg r231:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r232:V, reg r233:V, reg x92:*, reg x93:V, reg decreasing21:*, reg decreasing22:V, reg sort1:cls, reg r234:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r235:V, reg r236:V, reg na_last15:*, reg na_last16:V, reg is_na5:cls, reg r237:V, reg r238:V, reg c212:L, reg c214:V, reg has_na2:*, reg has_na3:V, reg c215:L, reg c216:V, reg c218:L, reg na_last17:*, reg na_last18:V, reg r239:V, reg c219:L, reg sym47:cls, reg base47:cls, reg guard47:L, reg r240:V, reg r241:V, reg nas:*, reg nas1:V, reg y24:*, reg y25:V, reg c220:cls, reg r242:V, reg r243:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r244:V, reg y26:*, reg y27:V, reg nas2:*, reg nas3:V, reg c221:cls, reg r245:V, reg isfact2:*, reg isfact3:V, reg c222:L, reg isord:*, reg isord1:V, reg c223:L, reg ordered:*, reg ordered1:V, reg ordered2:V, reg factor:*, reg factor1:V, reg ordered3:cls, reg y28:*, reg y29:V, reg p15:p(V +), reg sym49:cls, reg base49:cls, reg guard49:L, reg r248:V, reg r249:V, reg nlev:*, reg nlev1:V, reg r250:I, reg p16:p(V +), reg lev:*, reg lev1:V, reg p17:p(V +), reg r253:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r255:V, reg r256:V, reg partial35:*, reg partial36:V, reg c224:V, reg c225:L, reg _doSortWrap1:cls, reg y30:*, reg y31:V, reg p18:p(V +), reg decreasing23:*, reg decreasing24:V, reg p19:p(V +), reg na_last19:*, reg na_last20:V, reg p20:p(V +), reg r260:V, reg y32:*, reg y33:V |
    mkenv;
    st x = x;
    partial_isMissing = missing.0(partial);
    if partial_isMissing then L0(NULL) else L0(partial);
  L0(partial_orDefault):
    st partial = partial_orDefault;
    na_last_isMissing = missing.0(na_last);
    if na_last_isMissing then L1(NA_LGL) else L1(na_last);
  L1(na_last_orDefault):
    st `na.last` = na_last_orDefault;
    decreasing_isMissing = missing.0(decreasing);
    if decreasing_isMissing then L2(FALSE) else L2(decreasing);
  L2(decreasing_orDefault):
    st decreasing = decreasing_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L3() else L4(method);
  L3():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("auto", "shell", "quick", "radix");
      goto L0(r2);
    L2():
      r = dyn base("auto", "shell", "quick", "radix");
      goto L0(r);
    };
    goto L4(p);
  L4(method_orDefault):
    st method = method_orDefault;
    index_return_isMissing = missing.0(index_return);
    if index_return_isMissing then L5(FALSE) else L5(index_return);
  L5(index_return_orDefault):
    st `index.return` = index_return_orDefault;
    sym1 = ldf `as.logical`;
    base1 = ldf `as.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L147() else L148();
  L6(r5):
    st decreasing = r5;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L151() else L152();
  L147():
    decreasing1 = ld decreasing;
    check L149() else D0();
  L148():
    r4 = dyn base1(<sym decreasing>);
    goto L6(r4);
  D0():
    deopt 2 [decreasing1];
  L7(r8):
    c2 = `as.logical`(r8);
    if c2 then L154() else L8(c2);
  L149():
    decreasing2 = force? decreasing1;
    checkMissing(decreasing2);
    as_logical = ldf `as.logical` in base;
    r6 = dyn as_logical(decreasing2);
    check L150() else D1();
  L151():
    partial1 = ld partial;
    check L153() else D2();
  L152():
    r7 = dyn base2(<sym partial>);
    goto L7(r7);
  D1():
    deopt 5 [r6];
  D2():
    deopt 8 [partial1];
  L8(c4):
    c8 = `as.logical`(c4);
    if c8 then L157() else L9(c8);
  L150():
    goto L6(r6);
  L153():
    partial2 = force? partial1;
    checkMissing(partial2);
    c1 = `==`(partial2, NULL);
    goto L7(c1);
  L154():
    index_return1 = ld `index.return`;
    check L155() else D3();
  D3():
    deopt 11 [c2, index_return1];
  L9(c10):
    c17 = `as.logical`(c10);
    if c17 then L163() else L11();
  L155():
    index_return2 = force? index_return1;
    checkMissing(index_return2);
    r9 = `!`(index_return2);
    c5 = `as.logical`(r9);
    c6 = `&&`(c2, c5);
    goto L8(c6);
  L157():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L158() else L159();
  L10(c13, r11):
    c14 = `as.logical`(r11);
    c15 = `&&`(c13, c14);
    goto L9(c15);
  L11():
    goto L24();
  L24():
    match_arg = ldf `match.arg`;
    check L202() else D22();
  L158():
    x1 = ld x;
    check L160() else D4();
  L159():
    r10 = dyn base3(<sym x>);
    goto L10(c8, r10);
  L163():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L164() else L165();
  D4():
    deopt 17 [c8, x1];
  D22():
    deopt 90 [];
  L12(r14):
    c18 = `as.logical`(r14);
    if c18 then L170() else L13();
  L160():
    x2 = force? x1;
    checkMissing(x2);
    is_numeric = ldf `is.numeric` in base;
    r12 = dyn is_numeric(x2);
    check L161() else D5();
  L164():
    x3 = ld x;
    check L166() else D6();
  L165():
    r13 = dyn base4(<lang sorted_fpass(x, decreasing, na.last)>);
    goto L12(r13);
  L202():
    p1 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r41 = dyn match_arg(p1);
    check L203() else D23();
  D5():
    deopt 20 [c8, r12];
  D6():
    deopt 24 [x3];
  D23():
    deopt 92 [r41];
  L13():
    goto L24();
  L161():
    goto L10(c8, r12);
  L166():
    x4 = force? x3;
    checkMissing(x4);
    decreasing3 = ld decreasing;
    check L167() else D7();
  L170():
    sym5 = ldf attributes;
    base5 = ldf attributes in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L171() else L172();
  L203():
    st method = r41;
    method3 = ld method;
    check L204() else D24();
  D7():
    deopt 26 [decreasing3];
  D24():
    deopt 94 [method3];
  L14(r17):
    st attr = r17;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L175() else L176();
  L167():
    decreasing4 = force? decreasing3;
    checkMissing(decreasing4);
    na_last1 = ld `na.last`;
    check L168() else D8();
  L171():
    x5 = ld x;
    check L173() else D10();
  L172():
    r16 = dyn base5(<sym x>);
    goto L14(r16);
  L204():
    method4 = force? method3;
    checkMissing(method4);
    r42 = `==`(method4, "auto");
    c33 = `as.logical`(r42);
    if c33 then L205() else L25(c33);
  D8():
    deopt 28 [na_last1];
  D10():
    deopt 34 [x5];
  L15(r20):
    r21 = `!`(r20);
    c20 = `as.logical`(r21);
    if c20 then L178() else L16(c20);
  L25(c35):
    c43 = `as.logical`(c35);
    if c43 then L210() else L27(c43);
  L168():
    na_last2 = force? na_last1;
    checkMissing(na_last2);
    sorted_fpass = ldf sorted_fpass in base;
    r15 = dyn sorted_fpass(x4, decreasing4, na_last2);
    check L169() else D9();
  L173():
    x6 = force? x5;
    checkMissing(x6);
    attributes = ldf attributes in base;
    r18 = dyn attributes(x6);
    check L174() else D11();
  L175():
    attr = ld attr;
    check L177() else D12();
  L176():
    r19 = dyn base6(<sym attr>);
    goto L15(r19);
  L205():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L206() else L207();
  D9():
    deopt 31 [r15];
  D11():
    deopt 37 [r18];
  D12():
    deopt 40 [attr];
  L16(c22):
    c32 = `as.logical`(c22);
    if c32 then L187() else L19();
  L26(c38, r44):
    c40 = `as.logical`(r44);
    c41 = `&&`(c38, c40);
    goto L25(c41);
  L27(c45):
    c77 = `as.logical`(c45);
    if c77 then L225() else L32(c77);
  L169():
    goto L12(r15);
  L174():
    goto L14(r18);
  L177():
    attr1 = force? attr;
    checkMissing(attr1);
    c19 = `==`(attr1, NULL);
    goto L15(c19);
  L178():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L179() else L180();
  L206():
    partial3 = ld partial;
    check L208() else D25();
  L207():
    r43 = dyn base11(<sym partial>);
    goto L26(c33, r43);
  L210():
    sym12 = ldf `is.numeric`;
    base12 = ldf `is.numeric` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L211() else L212();
  D25():
    deopt 99 [c33, partial3];
  L17(c25, r23):
    r28 = `!`(r23);
    c29 = `as.logical`(r28);
    c30 = `&&`(c25, c29);
    goto L16(c30);
  L19():
    goto L22();
  L22():
    x9 = ld x;
    check L198() else D21();
  L28(c48, r46):
    c49 = `as.logical`(r46);
    if c49 then L29(c48, c49) else L215();
  L32(c79):
    c90 = `as.logical`(c79);
    if c90 then L233() else L35();
  L179():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L181() else L182();
  L180():
    r22 = dyn base7(<lang names(attr)>, "names");
    goto L17(c20, r22);
  L187():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L188() else L189();
  L208():
    partial4 = force? partial3;
    checkMissing(partial4);
    c39 = `==`(partial4, NULL);
    goto L26(c33, c39);
  L211():
    x11 = ld x;
    check L213() else D26();
  L212():
    r45 = dyn base12(<sym x>);
    goto L28(c43, r45);
  L225():
    sym14 = ldf `is.integer`;
    base14 = ldf `is.integer` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L226() else L227();
  D21():
    deopt 82 [x9];
  D26():
    deopt 105 [c43, x11];
  L18(c28, r25):
    identical = ldf identical in base;
    r27 = dyn identical(r25, "names", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L185() else D15();
  L20(r30):
    l = ld x;
    attributes__ = ldf `attributes<-`;
    check L195() else D19();
  L29(c50, c51):
    c58 = `as.logical`(c51);
    if c58 then L30(c50, c58) else L219();
  L33(c82, r53):
    c87 = `as.logical`(r53);
    c88 = `&&`(c82, c87);
    goto L32(c88);
  L35():
    goto L36();
  L36():
    method5 = ld method;
    check L235() else D33();
  L181():
    attr2 = ld attr;
    check L183() else D13();
  L182():
    r24 = dyn base8(<sym attr>);
    goto L18(c20, r24);
  L188():
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L190() else L191();
  L189():
    r29 = dyn base9[names](<lang names(x)>);
    goto L20(r29);
  L198():
    x10 = force? x9;
    checkMissing(x10);
    popenv;
    return x10;
  L213():
    x12 = force? x11;
    checkMissing(x12);
    is_numeric1 = ldf `is.numeric` in base;
    r47 = dyn is_numeric1(x12);
    check L214() else D27();
  L215():
    is_factor = ldf `is.factor`;
    check L216() else D28();
  L226():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L228() else L229();
  L227():
    r52 = dyn base14(<lang length(x)>);
    goto L33(c77, r52);
  L233():
    st method = "radix";
    goto L36();
  D13():
    deopt 48 [c20, attr2];
  D15():
    deopt 61 [c28, r27];
  D19():
    deopt 76 [r30, l, r30];
  D27():
    deopt 108 [c43, r47];
  D28():
    deopt 110 [c48, c49];
  D33():
    deopt 134 [method5];
  L21(r32):
    list = ldf list in base;
    r34 = dyn list(r32);
    check L194() else D18();
  L30(c59, c60):
    c74 = `as.logical`(c60);
    c75 = `&&`(c59, c74);
    goto L27(c75);
  L34(c85, r55):
    c86 = `is.integer`(r55);
    goto L33(c85, c86);
  L183():
    attr3 = force? attr2;
    checkMissing(attr3);
    names = ldf names in base;
    r26 = dyn names(attr3);
    check L184() else D14();
  L185():
    goto L17(c28, r27);
  L190():
    x7 = ld x;
    check L192() else D16();
  L191():
    r31 = dyn base10(<sym x>);
    goto L21(r31);
  L195():
    r35 = dyn attributes__(l, NULL, r30);
    check L196() else D20();
  L214():
    goto L28(c43, r47);
  L216():
    p2 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r49 = dyn is_factor(p2);
    check L217() else D29();
  L219():
    sym13 = ldf `is.logical`;
    base13 = ldf `is.logical` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L220() else L221();
  L228():
    x17 = ld x;
    check L230() else D31();
  L229():
    r54 = dyn base15(<sym x>);
    goto L34(c77, r54);
  L235():
    method6 = force? method5;
    checkMissing(method6);
    r58 = `==`(method6, "radix");
    c91 = `as.logical`(r58);
    if c91 then L236() else L37();
  D14():
    deopt 51 [c20, r26];
  D16():
    deopt 68 [x7];
  D18():
    deopt 74 [r34];
  D20():
    deopt 78 [r30, r35];
  D29():
    deopt 112 [c48, c49, r49];
  D31():
    deopt 123 [c77, x17];
  L31(c67, c68, r51):
    c70 = `as.logical`(r51);
    c71 = `||`(c68, c70);
    goto L30(c67, c71);
  L37():
    method7 = ld method;
    check L281() else D54();
  L184():
    goto L18(c20, r26);
  L192():
    x8 = force? x7;
    checkMissing(x8);
    names1 = ldf names in base;
    r33 = dyn names1(x8);
    check L193() else D17();
  L194():
    goto L20(r34);
  L196():
    st x = r35;
    goto L22();
  L217():
    c54 = `as.logical`(r49);
    c55 = `||`(c49, c54);
    goto L29(c48, c55);
  L220():
    x15 = ld x;
    check L222() else D30();
  L221():
    r50 = dyn base13(<sym x>);
    goto L31(c50, c58, r50);
  L230():
    x18 = force? x17;
    checkMissing(x18);
    length = ldf length in base;
    r56 = dyn length(x18);
    check L231() else D32();
  L236():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L237() else L238();
  D17():
    deopt 71 [r33];
  D30():
    deopt 115 [c50, c58, x15];
  D32():
    deopt 126 [c77, r56];
  D54():
    deopt 213 [method7];
  L38(r60):
    r61 = `!`(r60);
    c93 = `as.logical`(r61);
    if c93 then L240() else L39();
  L193():
    goto L21(r33);
  L222():
    x16 = force? x15;
    checkMissing(x16);
    c69 = `is.logical`(x16);
    goto L31(c50, c58, c69);
  L231():
    goto L34(c77, r56);
  L237():
    partial5 = ld partial;
    check L239() else D34();
  L238():
    r59 = dyn base16(<sym partial>);
    goto L38(r59);
  L281():
    method8 = force? method7;
    checkMissing(method8);
    r88 = `==`(method8, "auto");
    c107 = `as.logical`(r88);
    if c107 then L52(c107) else L282();
  D34():
    deopt 139 [partial5];
  L39():
    goto L40();
  L40():
    index_return3 = ld `index.return`;
    check L244() else D37();
  L52(c108):
    c116 = `as.logical`(c108);
    if c116 then L288() else L54();
  L239():
    partial6 = force? partial5;
    checkMissing(partial6);
    c92 = `==`(partial6, NULL);
    goto L38(c92);
  L240():
    stop = ldf stop;
    check L241() else D35();
  L282():
    sym20 = ldf `is.numeric`;
    base20 = ldf `is.numeric` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L283() else L284();
  D35():
    deopt 144 [];
  D37():
    deopt 149 [index_return3];
  L51():
    is_factor1 = ldf `is.factor`;
    check L290() else D57();
  L53(c112, r90):
    r92 = `!`(r90);
    c113 = `as.logical`(r92);
    c114 = `||`(c112, c113);
    goto L52(c114);
  L54():
    goto L51();
  L241():
    r62 = dyn stop("'partial' sorting not supported by radix method");
    check L242() else D36();
  L244():
    index_return4 = force? index_return3;
    checkMissing(index_return4);
    c94 = `as.logical`(index_return4);
    if c94 then L245() else L41(c94);
  L283():
    x34 = ld x;
    check L285() else D55();
  L284():
    r89 = dyn base20(<sym x>);
    goto L53(c107, r89);
  L288():
    st method = "shell";
    goto L51();
  D36():
    deopt 146 [r62];
  D55():
    deopt 219 [c107, x34];
  D57():
    deopt 231 [];
  L41(c96):
    c103 = `as.logical`(c96);
    if c103 then L251() else L43();
  L242():
    goto L40();
  L245():
    sym17 = ldf `is.na`;
    base17 = ldf `is.na` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L246() else L247();
  L285():
    x35 = force? x34;
    checkMissing(x35);
    is_numeric2 = ldf `is.numeric` in base;
    r91 = dyn is_numeric2(x35);
    check L286() else D56();
  L290():
    p9 = prom<V +>{
      x36 = ld x;
      x37 = force? x36;
      checkMissing(x37);
      return x37;
    };
    r94 = dyn is_factor1(p9);
    check L291() else D58();
  D56():
    deopt 222 [c107, r91];
  D58():
    deopt 233 [r94];
  L42(c99, r65):
    c100 = `as.logical`(r65);
    c101 = `&&`(c99, c100);
    goto L41(c101);
  L43():
    goto L46();
  L46():
    order = ldf order;
    check L261() else D43();
  L246():
    na_last3 = ld `na.last`;
    check L248() else D38();
  L247():
    r64 = dyn base17(<sym na.last>);
    goto L42(c94, r64);
  L251():
    x19 = ld x;
    check L252() else D40();
  L286():
    goto L53(c107, r91);
  L291():
    st isfact = r94;
    c117 = `as.logical`(r94);
    if c117 then L292() else L55();
  D38():
    deopt 153 [c94, na_last3];
  D40():
    deopt 158 [x19];
  D43():
    deopt 175 [];
  L55():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L309() else L310();
  L59():
    sym24 = ldf any;
    base24 = ldf any in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L324() else L325();
  L248():
    na_last4 = force? na_last3;
    checkMissing(na_last4);
    is_na = ldf `is.na` in base;
    r66 = dyn is_na(na_last4);
    check L249() else D39();
  L252():
    x20 = force? x19;
    checkMissing(x20);
    c104 = `is.object`(x20);
    if c104 then L253() else L254(x20);
  L261():
    p3 = prom<V +>{
      x28 = ld x;
      x29 = force? x28;
      checkMissing(x29);
      return x29;
    };
    p4 = prom<V +>{
      na_last5 = ld `na.last`;
      na_last6 = force? na_last5;
      checkMissing(na_last6);
      return na_last6;
    };
    p5 = prom<V +>{
      decreasing5 = ld decreasing;
      decreasing6 = force? decreasing5;
      checkMissing(decreasing6);
      return decreasing6;
    };
    r76 = dyn order[, `na.last`, decreasing, method](p3, p4, p5, "radix");
    check L262() else D44();
  L292():
    index_return7 = ld `index.return`;
    check L293() else D59();
  D39():
    deopt 156 [c94, r66];
  D44():
    deopt 183 [r76];
  D59():
    deopt 235 [index_return7];
  L44(dx1):
    st x = dx1;
    st `na.last` = TRUE;
    goto L46();
  L60(r108):
    c121 = `as.logical`(r108);
    if c121 then L312() else L61();
  L64(r116):
    st `has.na` = r116;
    c123 = `as.logical`(r116);
    if c123 then L331() else L66();
  L249():
    goto L42(c94, r66);
  L253():
    dr = tryDispatchBuiltin.1("[", x20);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L255() else L254(dr);
  L254(x22):
    sym18 = ldf `is.na`;
    base18 = ldf `is.na` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L256() else L257();
  L262():
    st o = r76;
    x30 = ld x;
    check L263() else D45();
  L293():
    index_return8 = force? index_return7;
    checkMissing(index_return8);
    c118 = `as.logical`(index_return8);
    if c118 then L294() else L56();
  L309():
    x46 = ld x;
    check L311() else D70();
  L310():
    r107 = dyn base22(<sym x>);
    goto L60(r107);
  L324():
    sym25 = ldf `is.na`;
    base25 = ldf `is.na` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L326() else L327();
  L325():
    r115 = dyn base24(<lang `<-`(ina, is.na(x))>);
    goto L64(r115);
  D45():
    deopt 185 [x30];
  D70():
    deopt 266 [x46];
  L45(x25, r68):
    r70 = `!`(r68);
    __ = ldf `[` in base;
    r71 = dyn __(x25, r70);
    goto L44(r71);
  L56():
    goto L57();
  L57():
    levels = ldf levels;
    check L298() else D62();
  L61():
    sym23 = ldf `is.atomic`;
    base23 = ldf `is.atomic` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L316() else L317();
  L65(r118):
    st ina = r118;
    any = ldf any in base;
    r120 = dyn any(r118);
    check L330() else D78();
  L66():
    goto L69();
  L69():
    index_return9 = ld `index.return`;
    check L343() else D83();
  L255():
    dx = getTryDispatchBuiltinValue(dr);
    goto L44(dx);
  L256():
    x26 = ld x;
    check L258() else D41();
  L257():
    r67 = dyn base18(<sym x>);
    goto L45(x22, r67);
  L263():
    x31 = force? x30;
    checkMissing(x31);
    c105 = `is.object`(x31);
    if c105 then L264() else L265(x31);
  L294():
    stop1 = ldf stop;
    check L295() else D60();
  L311():
    x47 = force? x46;
    checkMissing(x47);
    c120 = `==`(x47, NULL);
    goto L60(c120);
  L312():
    x48 = ld x;
    check L313() else D71();
  L326():
    x52 = ld x;
    check L328() else D76();
  L327():
    r117 = dyn base25(<sym x>);
    goto L65(r117);
  L331():
    x54 = ld x;
    check L332() else D79();
  D41():
    deopt 162 [x22, x26];
  D60():
    deopt 238 [];
  D62():
    deopt 244 [];
  D71():
    deopt 269 [x48];
  D76():
    deopt 289 [x52];
  D78():
    deopt 295 [r120];
  D79():
    deopt 297 [x54];
  D83():
    deopt 312 [index_return9];
  L47(dx3):
    st y = dx3;
    _doSortWrap = ldf `.doSortWrap`;
    check L268() else D47();
  L62(r111):
    r113 = `!`(r111);
    c122 = `as.logical`(r113);
    if c122 then L320() else L63();
  L258():
    x27 = force? x26;
    checkMissing(x27);
    is_na1 = ldf `is.na` in base;
    r69 = dyn is_na1(x27);
    check L259() else D42();
  L264():
    dr2 = tryDispatchBuiltin.1("[", x31);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L266() else L265(dr2);
  L265(x33):
    o = ld o;
    check L267() else D46();
  L295():
    r95 = dyn stop1("'index.return' only for non-factors");
    check L296() else D61();
  L298():
    p10 = prom<V +>{
      x38 = ld x;
      x39 = force? x38;
      checkMissing(x39);
      return x39;
    };
    r98 = dyn levels(p10);
    check L299() else D63();
  L313():
    x49 = force? x48;
    checkMissing(x49);
    popenv;
    return x49;
  L316():
    x50 = ld x;
    check L318() else D72();
  L317():
    r110 = dyn base23(<sym x>);
    goto L62(r110);
  L328():
    x53 = force? x52;
    checkMissing(x53);
    is_na2 = ldf `is.na` in base;
    r119 = dyn is_na2(x53);
    check L329() else D77();
  L330():
    goto L64(r120);
  L332():
    x55 = force? x54;
    checkMissing(x55);
    c124 = `is.object`(x55);
    if c124 then L333() else L334(x55);
  L343():
    index_return10 = force? index_return9;
    checkMissing(index_return10);
    c126 = `as.logical`(index_return10);
    if c126 then L344() else L70(c126);
  D42():
    deopt 165 [x22, r69];
  D46():
    deopt 187 [x33, o];
  D47():
    deopt 192 [];
  D61():
    deopt 240 [r95];
  D63():
    deopt 246 [r98];
  D72():
    deopt 274 [x50];
  D77():
    deopt 292 [r119];
  L63():
    goto L59();
  L67(dx5):
    st nas = dx5;
    x58 = ld x;
    check L337() else D81();
  L70(c128):
    c135 = `as.logical`(c128);
    if c135 then L350() else L72();
  L259():
    goto L45(x22, r69);
  L266():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L47(dx2);
  L267():
    o1 = force? o;
    __1 = ldf `[` in base;
    r77 = dyn __1(x33, o1);
    goto L47(r77);
  L268():
    p6 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p7 = prom<V +>{
      decreasing7 = ld decreasing;
      decreasing8 = force? decreasing7;
      checkMissing(decreasing8);
      return decreasing8;
    };
    p8 = prom<V +>{
      na_last7 = ld `na.last`;
      na_last8 = force? na_last7;
      checkMissing(na_last8);
      return na_last8;
    };
    r81 = dyn _doSortWrap(p6, p7, p8);
    check L269() else D48();
  L296():
    goto L57();
  L299():
    st lev = r98;
    nlevels = ldf nlevels;
    check L300() else D64();
  L318():
    x51 = force? x50;
    checkMissing(x51);
    is_atomic = ldf `is.atomic` in base;
    r112 = dyn is_atomic(x51);
    check L319() else D73();
  L320():
    stop2 = ldf stop;
    check L321() else D74();
  L329():
    goto L65(r119);
  L333():
    dr4 = tryDispatchBuiltin.1("[", x55);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L335() else L334(dr4);
  L334(x57):
    ina = ld ina;
    check L336() else D80();
  L344():
    sym26 = ldf `is.na`;
    base26 = ldf `is.na` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L345() else L346();
  D48():
    deopt 196 [r81];
  D64():
    deopt 249 [];
  D73():
    deopt 277 [r112];
  D74():
    deopt 280 [];
  D80():
    deopt 299 [x57, ina];
  D81():
    deopt 303 [x58];
  L71(c131, r125):
    r127 = `!`(r125);
    c132 = `as.logical`(r127);
    c133 = `&&`(c131, c132);
    goto L70(c133);
  L72():
    goto L73();
  L73():
    sym27 = ldf `is.null`;
    base27 = ldf `is.null` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L354() else L355();
  L269():
    st y = r81;
    index_return5 = ld `index.return`;
    check L270() else D49();
  L300():
    p11 = prom<V +>{
      x40 = ld x;
      x41 = force? x40;
      checkMissing(x41);
      return x41;
    };
    r100 = dyn nlevels(p11);
    check L301() else D65();
  L319():
    goto L62(r112);
  L321():
    r114 = dyn stop2("'x' must be atomic");
    check L322() else D75();
  L335():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L67(dx4);
  L336():
    ina1 = force? ina;
    __2 = ldf `[` in base;
    r121 = dyn __2(x57, ina1);
    goto L67(r121);
  L337():
    x59 = force? x58;
    checkMissing(x59);
    c125 = `is.object`(x59);
    if c125 then L338() else L339(x59);
  L345():
    na_last9 = ld `na.last`;
    check L347() else D84();
  L346():
    r124 = dyn base26(<sym na.last>);
    goto L71(c126, r124);
  L350():
    stop3 = ldf stop;
    check L351() else D86();
  D49():
    deopt 198 [index_return5];
  D65():
    deopt 251 [r100];
  D75():
    deopt 282 [r114];
  D84():
    deopt 316 [c126, na_last9];
  D86():
    deopt 323 [];
  L68(dx7):
    st x = dx7;
    goto L69();
  L74(r131):
    r132 = `!`(r131);
    c137 = `as.logical`(r132);
    if c137 then L357() else L75();
  L270():
    index_return6 = force? index_return5;
    checkMissing(index_return6);
    c106 = `as.logical`(index_return6);
    if c106 then L271() else L48();
  L301():
    st nlev = r100;
    is_ordered = ldf `is.ordered`;
    check L302() else D66();
  L322():
    goto L59();
  L338():
    dr6 = tryDispatchBuiltin.1("[", x59);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L340() else L339(dr6);
  L339(x61):
    ina2 = ld ina;
    check L341() else D82();
  L347():
    na_last10 = force? na_last9;
    checkMissing(na_last10);
    is_na3 = ldf `is.na` in base;
    r126 = dyn is_na3(na_last10);
    check L348() else D85();
  L351():
    r128 = dyn stop3("'index.return' only for 'na.last = NA'");
    check L352() else D87();
  L354():
    partial7 = ld partial;
    check L356() else D88();
  L355():
    r130 = dyn base27(<sym partial>);
    goto L74(r130);
  D66():
    deopt 254 [];
  D82():
    deopt 305 [x61, ina2];
  D85():
    deopt 319 [c126, r126];
  D87():
    deopt 325 [r128];
  D88():
    deopt 329 [partial7];
  L48():
    y4 = ld y;
    check L278() else D53();
  L50(r85):
    popenv;
    return r85;
  L75():
    sym39 = ldf names;
    base39 = ldf names in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L444() else L445();
  L103():
    sym46 = ldf `is.na`;
    base46 = ldf `is.na` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L571() else L572();
  L271():
    sym19 = ldf list;
    base19 = ldf list in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L272() else L273();
  L302():
    p12 = prom<V +>{
      x42 = ld x;
      x43 = force? x42;
      checkMissing(x43);
      return x43;
    };
    r102 = dyn is_ordered(p12);
    check L303() else D67();
  L340():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L68(dx6);
  L341():
    ina3 = force? ina2;
    checkMissing(ina3);
    r122 = `!`(ina3);
    __3 = ldf `[` in base;
    r123 = dyn __3(x61, r122);
    goto L68(r123);
  L348():
    goto L71(c126, r126);
  L352():
    goto L73();
  L356():
    partial8 = force? partial7;
    checkMissing(partial8);
    c136 = `==`(partial8, NULL);
    goto L74(c136);
  L357():
    index_return11 = ld `index.return`;
    check L358() else D89();
  D53():
    deopt 210 [y4];
  D67():
    deopt 256 [r102];
  D89():
    deopt 333 [index_return11];
  L49(r83):
    goto L50(r83);
  L104(r180):
    st nms = r180;
    method11 = ld method;
    check L448() else D128();
  L134(r236):
    r238 = `!`(r236);
    c212 = `as.logical`(r238);
    if c212 then L575() else L135(c212);
  L272():
    y2 = ld y;
    check L274() else D50();
  L273():
    r82 = dyn base19[x, ix](<sym y>, <sym o>);
    goto L49(r82);
  L278():
    y5 = force? y4;
    checkMissing(y5);
    goto L50(y5);
  L303():
    st isord = r102;
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L304() else L305();
  L358():
    index_return12 = force? index_return11;
    checkMissing(index_return12);
    c138 = `as.logical`(index_return12);
    if c138 then L76(c138) else L359();
  L444():
    x72 = ld x;
    check L446() else D126();
  L445():
    r179 = dyn base39(<sym x>);
    goto L104(r179);
  L571():
    na_last15 = ld `na.last`;
    check L573() else D165();
  L572():
    r235 = dyn base46(<sym na.last>);
    goto L134(r235);
  D50():
    deopt 202 [y2];
  D126():
    deopt 456 [x72];
  D128():
    deopt 461 [method11];
  D165():
    deopt 603 [na_last15];
  L58(r104):
    st x = r104;
    goto L59();
  L76(c139):
    c144 = `as.logical`(c139);
    if c144 then L77(c144) else L362();
  L135(c214):
    c218 = `as.logical`(c214);
    if c218 then L578() else L136();
  L274():
    y3 = force? y2;
    checkMissing(y3);
    o2 = ld o;
    check L275() else D51();
  L304():
    x44 = ld x;
    check L306() else D68();
  L305():
    r103 = dyn base21(<sym x>);
    goto L58(r103);
  L359():
    decreasing9 = ld decreasing;
    check L360() else D90();
  L446():
    x73 = force? x72;
    checkMissing(x73);
    names2 = ldf names in base;
    r181 = dyn names2(x73);
    check L447() else D127();
  L448():
    method12 = force? method11;
    checkMissing(method12);
    c174 = `is.vector`(method12, "any");
    if c174 then L449() else L450();
  L573():
    na_last16 = force? na_last15;
    checkMissing(na_last16);
    is_na5 = ldf `is.na` in base;
    r237 = dyn is_na5(na_last16);
    check L574() else D166();
  L575():
    has_na2 = ld `has.na`;
    check L576() else D167();
  D51():
    deopt 205 [o2];
  D68():
    deopt 260 [x44];
  D90():
    deopt 335 [c138, decreasing9];
  D127():
    deopt 459 [r181];
  D166():
    deopt 606 [r237];
  D167():
    deopt 608 [c212, has_na2];
  L77(c145):
    c150 = `as.logical`(c145);
    if c150 then L78(c150) else L365();
  L136():
    goto L140();
  L140():
    isfact2 = ld isfact;
    check L593() else D175();
  L275():
    o3 = force? o2;
    checkMissing(o3);
    list1 = ldf list in base;
    r84 = dyn list1(y3, o3);
    check L276() else D52();
  L306():
    x45 = force? x44;
    checkMissing(x45);
    c119 = ldf c in base;
    r105 = dyn c119(x45);
    check L307() else D69();
  L360():
    decreasing10 = force? decreasing9;
    checkMissing(decreasing10);
    c141 = `as.logical`(decreasing10);
    c142 = `||`(c138, c141);
    goto L76(c142);
  L362():
    isfact = ld isfact;
    check L363() else D91();
  L447():
    goto L104(r181);
  L449():
    c175 = inherits(method12, "factor", FALSE);
    if c175 then L451() else L452();
  L450():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L574():
    goto L134(r237);
  L576():
    has_na3 = force? has_na2;
    checkMissing(has_na3);
    c215 = `as.logical`(has_na3);
    c216 = `&&`(c212, c215);
    goto L135(c216);
  L578():
    na_last17 = ld `na.last`;
    check L579() else D168();
  D52():
    deopt 209 [r84];
  D69():
    deopt 263 [r105];
  D91():
    deopt 338 [c144, isfact];
  D168():
    deopt 611 [na_last17];
  D175():
    deopt 633 [isfact2];
  L78(c151):
    c156 = `as.logical`(c151);
    if c156 then L368() else L79();
  L276():
    goto L49(r84);
  L307():
    goto L58(r105);
  L363():
    isfact1 = force? isfact;
    checkMissing(isfact1);
    c147 = `as.logical`(isfact1);
    c148 = `||`(c144, c147);
    goto L77(c148);
  L365():
    method9 = ld method;
    check L366() else D92();
  L451():
    c176 = `is.character`(method12);
    if c176 then L453() else L454();
  L452():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L451();
  L579():
    na_last18 = force? na_last17;
    checkMissing(na_last18);
    r239 = `!`(na_last18);
    c219 = `as.logical`(r239);
    if c219 then L580() else L137();
  L593():
    isfact3 = force? isfact2;
    checkMissing(isfact3);
    c222 = `as.logical`(isfact3);
    if c222 then L594() else L141();
  D92():
    deopt 341 [c150, method9];
  L79():
    goto L80();
  L80():
    sym28 = ldf all;
    base28 = ldf all in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L372() else L373();
  L105():
    sym40 = ldf `is.null`;
    base40 = ldf `is.null` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L460() else L461();
  L106():
    index_return19 = ld `index.return`;
    check L538() else D151();
  L107():
    goto L103();
  L137():
    sym48 = ldf c;
    base48 = ldf c in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L587() else L588();
  L139(r243):
    st y = r243;
    goto L140();
  L141():
    goto L144();
  L144():
    sym50 = ldf `is.null`;
    base50 = ldf `is.null` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L602() else L603();
  L366():
    method10 = force? method9;
    checkMissing(method10);
    r133 = `!=`(method10, "shell");
    c153 = `as.logical`(r133);
    c154 = `||`(c150, c153);
    goto L78(c154);
  L368():
    stop4 = ldf stop;
    check L369() else D93();
  L453():
    c177 = `==`.6(method12, "quick");
    if c177 then L105() else L455();
  L454():
    i_ddd = dots[method12];
    i = `as.integer`(i_ddd);
    c179 = `==`.5(i, 1);
    if c179 then L105() else L457();
  L580():
    sym47 = ldf c;
    base47 = ldf c in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L581() else L582();
  L594():
    isord = ld isord;
    check L595() else D176();
  D93():
    deopt 347 [];
  D151():
    deopt 555 [index_return19];
  D176():
    deopt 635 [isord];
  L81(r137):
    r142 = `!`(r137);
    c157 = `as.logical`(r142);
    if c157 then L379() else L83();
  L108(r183):
    r184 = `!`(r183);
    c182 = `as.logical`(r184);
    if c182 then L463() else L109();
  L138(r241):
    goto L139(r241);
  L145(r256):
    c225 = `as.logical`(r256);
    if c225 then L605() else L146();
  L369():
    r134 = dyn stop4("unsupported options for partial sorting");
    check L370() else D94();
  L372():
    sym29 = ldf `is.finite`;
    base29 = ldf `is.finite` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L374() else L375();
  L373():
    r136 = dyn base28(<lang is.finite(partial)>);
    goto L81(r136);
  L455():
    c178 = `==`.6(method12, "shell");
    if c178 then L106() else L456();
  L457():
    c180 = `==`.5(i, 2);
    if c180 then L106() else L458();
  L460():
    nms = ld nms;
    check L462() else D129();
  L461():
    r182 = dyn base40(<sym nms>);
    goto L108(r182);
  L538():
    index_return20 = force? index_return19;
    checkMissing(index_return20);
    c198 = `as.logical`(index_return20);
    if c198 then L125(c198) else L539();
  L581():
    nas = ld nas;
    check L583() else D169();
  L582():
    r240 = dyn base47(<sym nas>, <sym y>);
    goto L138(r240);
  L587():
    y26 = ld y;
    check L589() else D172();
  L588():
    r244 = dyn base48(<sym y>, <sym nas>);
    goto L139(r244);
  L595():
    isord1 = force? isord;
    checkMissing(isord1);
    c223 = `as.logical`(isord1);
    if c223 then L596() else L142();
  L602():
    partial35 = ld partial;
    check L604() else D180();
  L603():
    r255 = dyn base50(<sym partial>);
    goto L145(r255);
  D94():
    deopt 349 [r134];
  D129():
    deopt 466 [nms];
  D169():
    deopt 616 [nas];
  D172():
    deopt 624 [y26];
  D180():
    deopt 652 [partial35];
  L82(r139):
    all = ldf all in base;
    r141 = dyn all(r139);
    check L378() else D97();
  L83():
    goto L84();
  L84():
    has_na = ld `has.na`;
    check L383() else D100();
  L109():
    decreasing15 = ld decreasing;
    check L512() else D142();
  L118(dx42):
    goto L103();
  L125(c199):
    c208 = `as.logical`(c199);
    if c208 then L544() else L127();
  L142():
    factor = ld factor;
    check L599() else D178();
  L143(ordered2):
    checkFun.0(ordered2);
    ordered3 = ordered2 as cls;
    p15 = prom<V +>{
      y28 = ld y;
      y29 = force? y28;
      checkMissing(y29);
      return y29;
    };
    p16 = prom<V +>{
      sym49 = ldf seq_len;
      base49 = ldf seq_len in base;
      guard49 = `==`.4(sym49, base49);
      if guard49 then L1() else L2();
    L0(r249):
      return r249;
    L1():
      nlev = ld nlev;
      nlev1 = force? nlev;
      checkMissing(nlev1);
      r250 = seq_len(nlev1);
      goto L0(r250);
    L2():
      r248 = dyn base49(<sym nlev>);
      goto L0(r248);
    };
    p17 = prom<V +>{
      lev = ld lev;
      lev1 = force? lev;
      checkMissing(lev1);
      return lev1;
    };
    r253 = dyn ordered3[, levels, labels](p15, p16, p17);
    check L600() else D179();
  L146():
    y32 = ld y;
    check L609() else D183();
  L370():
    goto L80();
  L374():
    partial9 = ld partial;
    check L376() else D95();
  L375():
    r138 = dyn base29(<sym partial>);
    goto L82(r138);
  L379():
    stop5 = ldf stop;
    check L380() else D98();
  L456():
    goto L107();
  L458():
    goto L107();
  L462():
    nms1 = force? nms;
    checkMissing(nms1);
    c181 = `==`(nms1, NULL);
    goto L108(c181);
  L463():
    decreasing11 = ld decreasing;
    check L464() else D130();
  L539():
    sym43 = ldf `is.null`;
    base43 = ldf `is.null` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L540() else L541();
  L583():
    nas1 = force? nas;
    checkMissing(nas1);
    y24 = ld y;
    check L584() else D170();
  L589():
    y27 = force? y26;
    checkMissing(y27);
    nas2 = ld nas;
    check L590() else D173();
  L596():
    ordered = ld ordered;
    check L597() else D177();
  L604():
    partial36 = force? partial35;
    checkMissing(partial36);
    c224 = `==`(partial36, NULL);
    goto L145(c224);
  L605():
    _doSortWrap1 = ldf `.doSortWrap`;
    check L606() else D181();
  D95():
    deopt 356 [partial9];
  D97():
    deopt 361 [r141];
  D98():
    deopt 364 [];
  D100():
    deopt 369 [has_na];
  D130():
    deopt 470 [decreasing11];
  D142():
    deopt 521 [decreasing15];
  D170():
    deopt 618 [y24];
  D173():
    deopt 626 [nas2];
  D177():
    deopt 637 [ordered];
  D178():
    deopt 639 [factor];
  D179():
    deopt 647 [r253];
  D181():
    deopt 656 [];
  D183():
    deopt 661 [y32];
  L126(c203, r220):
    r221 = `!`(r220);
    c205 = `as.logical`(r221);
    c206 = `||`(c203, c205);
    goto L125(c206);
  L127():
    sym45 = ldf `.Internal`;
    base45 = ldf `.Internal` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L565() else L566();
  L132(r231):
    goto L103();
  L376():
    partial10 = force? partial9;
    checkMissing(partial10);
    is_finite = ldf `is.finite` in base;
    r140 = dyn is_finite(partial10);
    check L377() else D96();
  L378():
    goto L81(r141);
  L380():
    r143 = dyn stop5("non-finite 'partial'");
    check L381() else D99();
  L383():
    has_na1 = force? has_na;
    checkMissing(has_na1);
    c158 = `as.logical`(has_na1);
    if c158 then L384() else L85(c158);
  L464():
    decreasing12 = force? decreasing11;
    checkMissing(decreasing12);
    c183 = `as.logical`(decreasing12);
    if c183 then L465() else L110();
  L512():
    decreasing16 = force? decreasing15;
    checkMissing(decreasing16);
    c193 = `as.logical`(decreasing16);
    if c193 then L513() else L119();
  L540():
    nms10 = ld nms;
    check L542() else D152();
  L541():
    r219 = dyn base43(<sym nms>);
    goto L126(c198, r219);
  L544():
    sort_list = ldf `sort.list`;
    check L545() else D153();
  L584():
    y25 = force? y24;
    checkMissing(y25);
    c220 = ldf c in base;
    r242 = dyn c220(nas1, y25);
    check L585() else D171();
  L590():
    nas3 = force? nas2;
    checkMissing(nas3);
    c221 = ldf c in base;
    r245 = dyn c221(y27, nas3);
    check L591() else D174();
  L597():
    ordered1 = force? ordered;
    checkMissing(ordered1);
    goto L143(ordered1);
  L599():
    factor1 = force? factor;
    checkMissing(factor1);
    goto L143(factor1);
  L600():
    st y = r253;
    goto L144();
  L606():
    p18 = prom<V +>{
      y30 = ld y;
      y31 = force? y30;
      checkMissing(y31);
      return y31;
    };
    p19 = prom<V +>{
      decreasing23 = ld decreasing;
      decreasing24 = force? decreasing23;
      checkMissing(decreasing24);
      return decreasing24;
    };
    p20 = prom<V +>{
      na_last19 = ld `na.last`;
      na_last20 = force? na_last19;
      checkMissing(na_last20);
      return na_last20;
    };
    r260 = dyn _doSortWrap1(p18, p19, p20);
    check L607() else D182();
  L609():
    y33 = force? y32;
    checkMissing(y33);
    popenv;
    return y33;
  D96():
    deopt 359 [r140];
  D99():
    deopt 366 [r143];
  D152():
    deopt 558 [c198, nms10];
  D153():
    deopt 564 [];
  D171():
    deopt 621 [r242];
  D174():
    deopt 629 [r245];
  D182():
    deopt 660 [r260];
  L85(c160):
    c167 = `as.logical`(c160);
    if c167 then L390() else L87();
  L110():
    goto L111();
  L111():
    sym41 = ldf `.Internal`;
    base41 = ldf `.Internal` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L468() else L469();
  L119():
    goto L120();
  L120():
    sym42 = ldf `.Internal`;
    base42 = ldf `.Internal` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L516() else L517();
  L133(r233):
    st y = r233;
    goto L132(r233);
  L377():
    goto L82(r140);
  L381():
    goto L84();
  L384():
    sym30 = ldf `is.na`;
    base30 = ldf `is.na` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L385() else L386();
  L465():
    x74 = ld x;
    check L466() else D131();
  L513():
    x78 = ld x;
    check L514() else D143();
  L542():
    nms11 = force? nms10;
    checkMissing(nms11);
    c204 = `==`(nms11, NULL);
    goto L126(c198, c204);
  L545():
    p13 = prom<V +>{
      x82 = ld x;
      x83 = force? x82;
      checkMissing(x83);
      return x83;
    };
    p14 = prom<V +>{
      decreasing19 = ld decreasing;
      decreasing20 = force? decreasing19;
      checkMissing(decreasing20);
      return decreasing20;
    };
    r224 = dyn sort_list[, decreasing](p13, p14);
    check L546() else D154();
  L565():
    x92 = ld x;
    check L567() else D162();
  L566():
    r232 = dyn base45(<lang sort(x, decreasing)>);
    goto L133(r232);
  L585():
    goto L138(r242);
  L591():
    goto L139(r245);
  L607():
    popenv;
    return r260;
  D131():
    deopt 472 [x74];
  D143():
    deopt 523 [x78];
  D154():
    deopt 568 [r224];
  D162():
    deopt 593 [x92];
  L86(c163, r146):
    r148 = `!`(r146);
    c164 = `as.logical`(r148);
    c165 = `&&`(c163, c164);
    goto L85(c165);
  L87():
    goto L94();
  L94():
    sym33 = ldf length;
    base33 = ldf length in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L415() else L416();
  L112(r188):
    st y = r188;
    decreasing13 = ld decreasing;
    check L472() else D134();
  L121(r208):
    st y = r208;
    decreasing17 = ld decreasing;
    check L521() else D147();
  L385():
    na_last11 = ld `na.last`;
    check L387() else D101();
  L386():
    r145 = dyn base30(<sym na.last>);
    goto L86(c158, r145);
  L390():
    na_last13 = ld `na.last`;
    check L391() else D103();
  L466():
    x75 = force? x74;
    checkMissing(x75);
    r185 = `-`(<missing>, x75);
    st x = r185;
    goto L111();
  L468():
    x76 = ld x;
    check L470() else D132();
  L469():
    r187 = dyn base41(<lang qsort(x, TRUE)>);
    goto L112(r187);
  L514():
    x79 = force? x78;
    checkMissing(x79);
    r205 = `-`(<missing>, x79);
    st x = r205;
    goto L120();
  L516():
    x80 = ld x;
    check L518() else D144();
  L517():
    r207 = dyn base42(<lang qsort(x, index.return)>);
    goto L121(r207);
  L546():
    st o = r224;
    index_return21 = ld `index.return`;
    check L547() else D155();
  L567():
    x93 = force? x92;
    checkMissing(x93);
    decreasing21 = ld decreasing;
    check L568() else D163();
  D101():
    deopt 373 [c158, na_last11];
  D103():
    deopt 379 [na_last13];
  D132():
    deopt 480 [x76];
  D134():
    deopt 486 [decreasing13];
  D144():
    deopt 531 [x80];
  D147():
    deopt 538 [decreasing17];
  D155():
    deopt 570 [index_return21];
  D163():
    deopt 595 [decreasing21];
  L95(r161):
    r163 = `<=`(r161, 10);
    c171 = `as.logical`(r163);
    if c171 then L419() else L96();
  L387():
    na_last12 = force? na_last11;
    checkMissing(na_last12);
    is_na4 = ldf `is.na` in base;
    r147 = dyn is_na4(na_last12);
    check L388() else D102();
  L391():
    na_last14 = force? na_last13;
    checkMissing(na_last14);
    c168 = `as.logical`(na_last14);
    if c168 then L392() else L88();
  L415():
    partial29 = ld partial;
    check L417() else D114();
  L416():
    r160 = dyn base33(<sym partial>);
    goto L95(r160);
  L470():
    x77 = force? x76;
    checkMissing(x77);
    qsort2 = ldf qsort in base;
    r189 = dyn qsort2(x77, TRUE);
    check L471() else D133();
  L472():
    decreasing14 = force? decreasing13;
    checkMissing(decreasing14);
    c184 = `as.logical`(decreasing14);
    if c184 then L473() else L113();
  L518():
    x81 = force? x80;
    checkMissing(x81);
    index_return15 = ld `index.return`;
    check L519() else D145();
  L521():
    decreasing18 = force? decreasing17;
    checkMissing(decreasing18);
    c194 = `as.logical`(decreasing18);
    if c194 then L522() else L122();
  L547():
    index_return22 = force? index_return21;
    checkMissing(index_return22);
    c209 = `as.logical`(index_return22);
    if c209 then L548() else L128();
  L568():
    decreasing22 = force? decreasing21;
    checkMissing(decreasing22);
    sort1 = ldf sort in base;
    r234 = dyn sort1(x93, decreasing22);
    check L569() else D164();
  D102():
    deopt 376 [c158, r147];
  D114():
    deopt 413 [partial29];
  D133():
    deopt 484 [r189];
  D145():
    deopt 533 [index_return15];
  D164():
    deopt 598 [r234];
  L88():
    sym32 = ldf sum;
    base32 = ldf sum in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L403() else L404();
  L91(dx11):
    st partial = dx11;
    goto L94();
  L96():
    sym36 = ldf `is.double`;
    base36 = ldf `is.double` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L430() else L431();
  L99(r170):
    st y = r170;
    goto L103();
  L113():
    goto L114();
  L114():
    nms2 = ld nms;
    check L484() else D136();
  L122():
    goto L118(NULL);
  L128():
    x88 = ld x;
    check L559() else D160();
  L131(r229):
    st y = r229;
    goto L132(r229);
  L388():
    goto L86(c158, r147);
  L392():
    partial11 = ld partial;
    check L393() else D104();
  L417():
    partial30 = force? partial29;
    checkMissing(partial30);
    length2 = ldf length in base;
    r162 = dyn length2(partial30);
    check L418() else D115();
  L419():
    sym34 = ldf `.Internal`;
    base34 = ldf `.Internal` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L420() else L421();
  L471():
    goto L112(r189);
  L473():
    y6 = ld y;
    check L474() else D135();
  L519():
    index_return16 = force? index_return15;
    checkMissing(index_return16);
    qsort3 = ldf qsort in base;
    r209 = dyn qsort3(x81, index_return16);
    check L520() else D146();
  L522():
    index_return17 = ld `index.return`;
    check L523() else D148();
  L548():
    sym44 = ldf list;
    base44 = ldf list in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L549() else L550();
  L569():
    goto L133(r234);
  D104():
    deopt 381 [partial11];
  D115():
    deopt 416 [r162];
  D135():
    deopt 488 [y6];
  D136():
    deopt 497 [nms2];
  D146():
    deopt 536 [r209];
  D148():
    deopt 540 [index_return17];
  D160():
    deopt 585 [x88];
  L92(r155):
    st k = r155;
    partial23 = ld partial;
    check L407() else D110();
  L97(r165):
    st partial = r165;
    sym35 = ldf `.Internal`;
    base35 = ldf `.Internal` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L424() else L425();
  L100(r172):
    c173 = `as.logical`(r172);
    if c173 then L433() else L101();
  L129(r226):
    goto L131(r226);
  L393():
    partial12 = force? partial11;
    checkMissing(partial12);
    c169 = `is.object`(partial12);
    if c169 then L394() else L395(partial12);
  L403():
    ina4 = ld ina;
    check L405() else D108();
  L404():
    r154 = dyn base32(<sym ina>);
    goto L92(r154);
  L418():
    goto L95(r162);
  L420():
    partial31 = ld partial;
    check L422() else D116();
  L421():
    r164 = dyn base34(<lang qsort(partial, FALSE)>);
    goto L97(r164);
  L430():
    x66 = ld x;
    check L432() else D121();
  L431():
    r171 = dyn base36(<sym x>);
    goto L100(r171);
  L474():
    y7 = force? y6;
    checkMissing(y7);
    c185 = `is.object`(y7);
    if c185 then L476() else L477(y7);
  L484():
    nms3 = force? nms2;
    checkMissing(nms3);
    c187 = `is.object`(nms3);
    if c187 then L485() else L486(nms3);
  L520():
    goto L121(r209);
  L523():
    index_return18 = force? index_return17;
    checkMissing(index_return18);
    c195 = `as.logical`(index_return18);
    if c195 then L524() else L123();
  L549():
    x84 = ld x;
    check L551() else D156();
  L550():
    r225 = dyn base44[x, ix](<lang `[`(x, o)>, <sym o>);
    goto L129(r225);
  L559():
    x89 = force? x88;
    checkMissing(x89);
    c211 = `is.object`(x89);
    if c211 then L560() else L561(x89);
  D108():
    deopt 394 [ina4];
  D110():
    deopt 399 [partial23];
  D116():
    deopt 421 [partial31];
  D121():
    deopt 436 [x66];
  D156():
    deopt 574 [x84];
  L89(dx10):
    goto L91(dx10);
  L98(r168):
    goto L99(r168);
  L101():
    sym38 = ldf `.Internal`;
    base38 = ldf `.Internal` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L439() else L440();
  L115(dx20):
    l4 = ld y;
    c189 = `is.object`(l4);
    if c189 then L494() else L495(dx20, l4, dx20, l4);
  L123():
    y22 = ld y;
    check L535() else D150();
  L124(r217):
    goto L118(r217);
  L394():
    dr8 = tryDispatchBuiltin.1("[", partial12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L396() else L395(dr8);
  L395(partial14):
    partial15 = ld partial;
    check L397() else D105();
  L405():
    ina5 = force? ina4;
    checkMissing(ina5);
    sum = ldf sum in base;
    r156 = dyn sum(ina5);
    check L406() else D109();
  L407():
    partial24 = force? partial23;
    checkMissing(partial24);
    c170 = `is.object`(partial24);
    if c170 then L408() else L409(partial24);
  L422():
    partial32 = force? partial31;
    checkMissing(partial32);
    qsort = ldf qsort in base;
    r166 = dyn qsort(partial32, FALSE);
    check L423() else D117();
  L424():
    x64 = ld x;
    check L426() else D118();
  L425():
    r167 = dyn base35(<lang psort(x, partial)>);
    goto L98(r167);
  L432():
    x67 = force? x66;
    checkMissing(x67);
    c172 = `is.double`(x67);
    goto L100(c172);
  L433():
    sym37 = ldf `.Internal`;
    base37 = ldf `.Internal` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L434() else L435();
  L475(dx16):
    r191 = `-`(<missing>, dx16);
    l1 = ld y;
    c186 = `is.object`(l1);
    if c186 then L480() else L481(r191, l1);
  L476():
    dr12 = tryDispatchBuiltin.1("$", y7);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L478() else L477(dr12);
  L477(y9):
    r190 = `$`(y9, <sym x>);
    goto L475(r190);
  L485():
    dr16 = tryDispatchBuiltin.1("[", nms3);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L487() else L486(dr16);
  L486(nms5):
    y10 = ld y;
    check L488() else D137();
  L524():
    y18 = ld y;
    check L525() else D149();
  L551():
    x85 = force? x84;
    checkMissing(x85);
    c210 = `is.object`(x85);
    if c210 then L552() else L553(x85);
  L560():
    dr32 = tryDispatchBuiltin.1("[", x89);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L562() else L561(dr32);
  L561(x91):
    o8 = ld o;
    check L563() else D161();
  D105():
    deopt 383 [partial14, partial15];
  D109():
    deopt 397 [r156];
  D117():
    deopt 425 [r166];
  D118():
    deopt 429 [x64];
  D137():
    deopt 499 [nms5, y10];
  D149():
    deopt 542 [y18];
  D150():
    deopt 549 [y22];
  D161():
    deopt 587 [x91, o8];
  L93(dx13):
    k2 = ld k;
    check L413() else D113();
  L102(r174):
    goto L99(r174);
  L130(dx48):
    o6 = ld o;
    check L556() else D158();
  L396():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L89(dx9);
  L397():
    partial16 = force? partial15;
    checkMissing(partial16);
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L398() else L399();
  L406():
    goto L92(r156);
  L408():
    dr10 = tryDispatchBuiltin.1("[", partial24);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L410() else L409(dr10);
  L409(partial26):
    partial27 = ld partial;
    check L411() else D111();
  L423():
    goto L97(r166);
  L426():
    x65 = force? x64;
    checkMissing(x65);
    partial33 = ld partial;
    check L427() else D119();
  L434():
    x68 = ld x;
    check L436() else D122();
  L435():
    r173 = dyn base37(<lang qsort(x, FALSE)>);
    goto L102(r173);
  L439():
    x70 = ld x;
    check L441() else D124();
  L440():
    r176 = dyn base38(<lang sort(x, FALSE)>);
    goto L99(r176);
  L478():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L475(dx15);
  L479(r195, dx18):
    st y = dx18;
    goto L114();
  L480():
    dr14 = tryDispatchBuiltin.0("$<-", l1, r191);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L482() else L481(r191, dr14);
  L481(r193, l3):
    r196 = `$<-`(l3, <sym x>, r191);
    goto L479(r193, r196);
  L487():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L115(dx19);
  L488():
    y11 = force? y10;
    checkMissing(y11);
    c188 = `is.object`(y11);
    if c188 then L490() else L491(nms5, y11);
  L493(dx30, l10, dx31, dx32):
    names__ = ldf `names<-`;
    check L497() else D138();
  L494():
    dr20 = tryDispatchBuiltin.1("$", l4);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L496() else L495(dx20, l4, dx20, dr20);
  L495(dx25, l7, dx26, l8):
    r200 = `$`(l8, <sym x>);
    goto L493(dx25, l7, dx26, r200);
  L525():
    y19 = force? y18;
    checkMissing(y19);
    c196 = `is.object`(y19);
    if c196 then L527() else L528(y19);
  L535():
    y23 = force? y22;
    checkMissing(y23);
    r218 = `-`(<missing>, y23);
    st y = r218;
    goto L124(r218);
  L552():
    dr30 = tryDispatchBuiltin.1("[", x85);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L554() else L553(dr30);
  L553(x87):
    o4 = ld o;
    check L555() else D157();
  L562():
    dx49 = getTryDispatchBuiltinValue(dr32);
    goto L131(dx49);
  L563():
    o9 = force? o8;
    __8 = ldf `[` in base;
    r230 = dyn __8(x91, o9);
    goto L131(r230);
  D111():
    deopt 401 [partial26, partial27];
  D113():
    deopt 405 [dx13, k2];
  D119():
    deopt 431 [partial33];
  D122():
    deopt 441 [x68];
  D124():
    deopt 448 [x70];
  D138():
    deopt 507 [dx30, l10, dx32, dx31];
  D157():
    deopt 576 [x87, o4];
  D158():
    deopt 580 [o6];
  L90(partial21, partial22, r150):
    r152 = `<=`(partial22, r150);
    __4 = ldf `[` in base;
    r153 = dyn __4(partial21, r152);
    goto L89(r153);
  L398():
    x62 = ld x;
    check L400() else D106();
  L399():
    r149 = dyn base31(<sym x>);
    goto L90(partial14, partial16, r149);
  L410():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L93(dx12);
  L411():
    partial28 = force? partial27;
    checkMissing(partial28);
    k = ld k;
    check L412() else D112();
  L413():
    k3 = force? k2;
    checkMissing(k3);
    r159 = `-`(dx13, k3);
    goto L91(r159);
  L427():
    partial34 = force? partial33;
    checkMissing(partial34);
    psort = ldf psort in base;
    r169 = dyn psort(x65, partial34);
    check L428() else D120();
  L436():
    x69 = force? x68;
    checkMissing(x69);
    qsort1 = ldf qsort in base;
    r175 = dyn qsort1(x69, FALSE);
    check L437() else D123();
  L441():
    x71 = force? x70;
    checkMissing(x71);
    sort = ldf sort in base;
    r177 = dyn sort(x71, FALSE);
    check L442() else D125();
  L482():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L479(r191, dx17);
  L489(nms9, dx22):
    __6 = ldf `[` in base;
    r199 = dyn __6(nms9, dx22);
    goto L115(r199);
  L490():
    dr18 = tryDispatchBuiltin.1("$", y11);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L492() else L491(nms5, dr18);
  L491(nms7, y13):
    r198 = `$`(y13, <sym ix>);
    goto L489(nms7, r198);
  L496():
    dx29 = getTryDispatchBuiltinValue(dr20);
    goto L493(dx20, l4, dx20, dx29);
  L497():
    r201 = dyn names__(dx32, NULL, dx31);
    check L498() else D139();
  L526(dx44):
    r211 = `-`(<missing>, dx44);
    l13 = ld y;
    c197 = `is.object`(l13);
    if c197 then L531() else L532(r211, l13);
  L527():
    dr26 = tryDispatchBuiltin.1("$", y19);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L529() else L528(dr26);
  L528(y21):
    r210 = `$`(y21, <sym x>);
    goto L526(r210);
  L554():
    dx47 = getTryDispatchBuiltinValue(dr30);
    goto L130(dx47);
  L555():
    o5 = force? o4;
    __7 = ldf `[` in base;
    r227 = dyn __7(x87, o5);
    goto L130(r227);
  L556():
    o7 = force? o6;
    checkMissing(o7);
    list2 = ldf list in base;
    r228 = dyn list2(dx48, o7);
    check L557() else D159();
  D106():
    deopt 386 [partial14, partial16, x62];
  D112():
    deopt 402 [partial26, partial28, k];
  D120():
    deopt 434 [r169];
  D123():
    deopt 445 [r175];
  D125():
    deopt 452 [r177];
  D139():
    deopt 509 [dx30, l10, r201];
  D159():
    deopt 584 [r228];
  L400():
    x63 = force? x62;
    checkMissing(x63);
    length1 = ldf length in base;
    r151 = dyn length1(x63);
    check L401() else D107();
  L412():
    k1 = force? k;
    checkMissing(k1);
    r157 = `>`(partial28, k1);
    __5 = ldf `[` in base;
    r158 = dyn __5(partial26, r157);
    goto L93(r158);
  L428():
    goto L98(r169);
  L437():
    goto L102(r175);
  L442():
    goto L99(r177);
  L492():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L489(nms5, dx21);
  L498():
    c190 = `is.object`(l10);
    if c190 then L500() else L501(dx30, l10);
  L529():
    dx43 = getTryDispatchBuiltinValue(dr26);
    goto L526(dx43);
  L530(r215, dx46):
    st y = dx46;
    goto L124(r215);
  L531():
    dr28 = tryDispatchBuiltin.0("$<-", l13, r211);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L533() else L532(r211, dr28);
  L532(r213, l15):
    r216 = `$<-`(l15, <sym x>, r211);
    goto L530(r213, r216);
  L557():
    goto L129(r228);
  D107():
    deopt 389 [partial14, partial16, r151];
  L401():
    goto L90(partial14, partial16, r151);
  L499(dx38):
    st y = dx38;
    index_return13 = ld `index.return`;
    check L503() else D140();
  L500():
    dr22 = tryDispatchBuiltin.0("$<-", l10, r201);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L502() else L501(dx30, dr22);
  L501(dx34, l12):
    r202 = `$<-`(l12, <sym x>, r201);
    goto L499(r202);
  L533():
    dx45 = getTryDispatchBuiltinValue(dr28);
    goto L530(r211, dx45);
  D140():
    deopt 512 [index_return13];
  L502():
    dx36 = getTryDispatchBuiltinValue(dr22);
    goto L499(dx36);
  L503():
    index_return14 = force? index_return13;
    checkMissing(index_return14);
    r203 = `!`(index_return14);
    c191 = `as.logical`(r203);
    if c191 then L504() else L116();
  L116():
    goto L117(NULL);
  L117(dx41):
    goto L118(dx41);
  L504():
    y14 = ld y;
    check L505() else D141();
  D141():
    deopt 515 [y14];
  L505():
    y15 = force? y14;
    checkMissing(y15);
    c192 = `is.object`(y15);
    if c192 then L507() else L508(y15);
  L506(dx40):
    st y = dx40;
    goto L117(dx40);
  L507():
    dr24 = tryDispatchBuiltin.1("$", y15);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L509() else L508(dr24);
  L508(y17):
    r204 = `$`(y17, <sym x>);
    goto L506(r204);
  L509():
    dx39 = getTryDispatchBuiltinValue(dr24);
    goto L506(dx39);
  }
}