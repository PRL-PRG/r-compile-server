fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3835221827;
    st `dummy.coef.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3835221827(object, `use.na`, `...`) {
  (reg object:*, reg use_na:*, reg ddd:dots) -+> V { var object:*, var `use.na`:*, reg use_na_isMissing:L, reg use_na_orDefault:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg xl:*, reg xl1:V, reg length:cls, reg r3:V, reg r4:V, reg c1:L, reg as_list:cls, reg coef:cls, reg object5:*, reg object6:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg terms:cls, reg object7:*, reg object8:V, reg p2:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg Terms:*, reg Terms1:V, reg attr:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg Terms2:*, reg Terms3:V, reg attr1:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg Terms4:*, reg Terms5:V, reg attr2:cls, reg r21:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r24:V, reg delete_response:cls, reg Terms6:*, reg Terms7:V, reg p3:p(V +), reg r26:V, reg ____:cls, reg object9:*, reg object10:V, reg c3:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r27:V, reg p4:p(V +), reg model_frame:cls, reg object13:*, reg object14:V, reg p5:p(V +), reg r30:V, reg p6:p(V +), reg r32:V, reg setNames:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg facs:*, reg facs1:V, reg dimnames:cls, reg r35:V, reg c4:L, reg r37:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r38:V, reg p7:p(V +), reg r40:V, reg lapply:cls, reg nvars:*, reg nvars1:V, reg p8:p(V +), reg r42:cls, reg p9:p(V +), reg r44:V, reg pmax:cls, reg lengths:cls, reg xtlv:*, reg xtlv1:V, reg p10:p(V +), reg r46:V, reg p11:p(V +), reg r48:V, reg apply:cls, reg facs2:*, reg facs3:V, reg p12:p(V +), reg r50:cls, reg p13:p(V +), reg r52:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r53:V, reg r54:V, reg lterms:*, reg lterms1:V, reg sum:cls, reg r55:V, reg lapply1:cls, reg nvars2:*, reg nvars3:V, reg p14:p(V +), reg r57:cls, reg p15:p(V +), reg r59:V, reg do_call:cls, reg data_frame:*, reg data_frame1:V, reg p16:p(V +), reg args:*, reg args1:V, reg p17:p(V +), reg r62:V, reg vars:*, reg vars1:V, reg l:*, reg names__:cls, reg r63:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r64:V, reg r65:V, reg tl:*, reg tl1:V, reg lterms2:*, reg lterms3:V, reg rep_int:cls, reg r66:V, reg character:cls, reg nl:*, reg nl1:V, reg p18:p(V +), reg r68:V, reg tl2:*, reg tl3:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg vars2:*, reg vars3:V, reg c6:L, reg i6:I, reg vars5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i8:I, reg dx9:V, reg facs4:*, reg facs5:V, reg c7:L, reg i10:I, reg vars7:V, reg facs7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i12:I, reg vars9:V, reg dx11:V, reg j:*, reg j1:V, reg __2:cls, reg r69:V, reg r70:V, reg __3:cls, reg r71:V, reg i13:*, reg i14:V, reg c8:L, reg i17:I, reg i18:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i20:I, reg dx13:V, reg nxl:*, reg nxl1:V, reg c9:L, reg i23:I, reg i24:V, reg nxl3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i27:I, reg i28:V, reg dx15:V, reg i29:*, reg i30:V, reg __4:cls, reg r72:V, reg r73:V, reg __5:cls, reg r74:V, reg lterms4:*, reg lterms5:V, reg c10:L, reg i32:I, reg lterms7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i34:I, reg dx17:V, reg j2:*, reg j3:V, reg __6:cls, reg r75:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r76:V, reg i37:I, reg r77:V, reg ifac:*, reg ifac1:V, reg length1:cls, reg r78:V, reg r79:V, reg c11:L, reg j4:*, reg j5:V, reg l2:*, reg c12:L, reg i41:I, reg j7:V, reg l4:*, reg dr18:V, reg dc9:L, reg dx18:V, reg i43:I, reg j9:V, reg dx19:V, reg pos:*, reg pos1:V, reg r80:V, reg ___:cls, reg r81:V, reg i44:I, reg pos2:*, reg pos3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r82:V, reg i47:I, reg pos6:V, reg r83:V, reg lt_j:*, reg lt_j1:V, reg r84:I, reg r85:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r86:V, reg i50:I, reg r87:V, reg ifac2:*, reg ifac3:V, reg length2:cls, reg r88:V, reg r89:V, reg c13:L, reg xtlv2:*, reg xtlv3:V, reg c14:L, reg i54:I, reg xtlv5:V, reg dr20:V, reg dc10:L, reg dx20:V, reg i56:I, reg dx21:V, reg ifac4:*, reg ifac5:V, reg __7:cls, reg r90:V, reg l5:*, reg c15:L, reg i58:I, reg dx23:V, reg l7:*, reg dr22:V, reg dc11:L, reg dx25:V, reg i60:I, reg dx27:V, reg p_j:*, reg p_j1:V, reg ifac6:*, reg ifac7:V, reg ___1:cls, reg r91:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r92:V, reg i63:I, reg r93:V, reg x_i:*, reg x_i1:V, reg as_character:cls, reg r94:V, reg l8:*, reg c16:L, reg i65:I, reg r96:V, reg l10:*, reg dr24:V, reg dc12:L, reg dx28:V, reg i67:I, reg r98:V, reg dx29:V, reg p_j2:*, reg p_j3:V, reg ___2:cls, reg r99:V, reg expand_grid:cls, reg xtlv6:*, reg xtlv7:V, reg c17:L, reg xtlv9:V, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg ifac8:*, reg ifac9:V, reg __8:cls, reg r100:V, reg p19:p(V +), reg r102:V, reg tmp:*, reg tmp1:V, reg l11:*, reg c18:L, reg i69:I, reg tmp3:V, reg l13:*, reg dr28:V, reg dc14:L, reg dx32:V, reg i71:I, reg dx33:V, reg p_j4:*, reg p_j5:V, reg ifac10:*, reg ifac11:V, reg ___3:cls, reg r103:V, reg apply1:cls, reg as_matrix:cls, reg tmp6:*, reg tmp7:V, reg p20:p(V +), reg r105:V, reg p21:p(V +), reg paste:*, reg paste1:V, reg p22:p(V +), reg r108:V, reg l14:*, reg c19:L, reg i73:I, reg r110:V, reg l16:*, reg dr30:V, reg dc15:L, reg dx34:V, reg i75:I, reg r112:V, reg dx35:V, reg p_j6:*, reg p_j7:V, reg ___4:cls, reg r113:V, reg pos7:*, reg pos8:V, reg lt_j2:*, reg lt_j3:V, reg r114:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r115:V, reg r116:V, reg mf:*, reg mf1:V, reg attr3:cls, reg r117:V, reg l17:*, reg attr__:cls, reg r118:V, reg object15:*, reg object16:V, reg c20:L, reg object18:V, reg dr32:V, reg dc16:L, reg dx36:V, reg dx37:V, reg r119:V, reg vapply:cls, reg dummy:*, reg dummy1:V, reg p23:p(V +), reg is_factor:*, reg is_factor1:V, reg p24:p(V +), reg r122:V, reg lcontr:*, reg lcontr1:V, reg c21:L, reg lcontr3:V, reg dr34:V, reg dc17:L, reg dx38:V, reg dx39:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r123:V, reg lcontr6:V, reg r124:V, reg lci:*, reg lci1:V, reg names:cls, reg r125:V, reg c22:L, reg lcontr8:V, reg r127:V, reg dr36:V, reg dc18:L, reg dx40:V, reg lcontr10:V, reg dx41:V, reg lci2:*, reg lci3:V, reg __9:cls, reg r128:V, reg __10:cls, reg r129:V, reg model_matrix:cls, reg Terms8:*, reg Terms9:V, reg p25:p(V +), reg dummy2:*, reg dummy3:V, reg p26:p(V +), reg lcontr11:*, reg lcontr12:V, reg p27:p(V +), reg xl2:*, reg xl3:V, reg p28:p(V +), reg r134:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r135:V, reg r136:V, reg mm:*, reg mm1:V, reg anyNA:cls, reg r137:V, reg c23:L, reg warning:cls, reg r138:V, reg l18:*, reg c24:L, reg r140:L, reg l20:*, reg dr38:V, reg dc19:L, reg dx42:V, reg r142:L, reg dx43:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r147:V, reg r148:L, reg l23:*, reg r149:L, reg r150:V, reg mm2:*, reg mm3:V, reg is_na:cls, reg r151:V, reg ___5:cls, reg r152:V, reg object19:*, reg object20:V, reg c25:L, reg object22:V, reg dr40:V, reg dc20:L, reg dx44:V, reg dx45:V, reg r154:V, reg use_na1:*, reg use_na2:V, reg r155:V, reg c26:L, reg l24:*, reg c27:L, reg r157:R, reg l26:*, reg dr42:V, reg dc21:L, reg dx46:V, reg r159:R, reg dx47:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r164:V, reg r165:R, reg l29:*, reg r166:R, reg r167:V, reg coef1:*, reg coef2:V, reg is_na1:cls, reg r168:V, reg ___6:cls, reg r169:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r171:V, reg r172:V, reg mm4:*, reg mm5:V, reg attr4:cls, reg r173:V, reg setNames1:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r174:V, reg r175:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r176:V, reg r177:V, reg tl4:*, reg tl5:V, reg length3:cls, reg r178:V, reg vector:cls, reg r179:V, reg p29:p(V +), reg tl6:*, reg tl7:V, reg p30:p(V +), reg r182:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r183:V, reg r184:V, reg coef3:*, reg coef4:V, reg is_matrix:cls, reg r185:V, reg c28:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r186:V, reg r187:V, reg tl8:*, reg tl9:V, reg r188:I, reg s1:V, reg l30:I, reg i76:I, reg i77:I, reg i78:I, reg c29:L, reg x1:V, reg which:cls, reg asgn:*, reg asgn1:V, reg j11:*, reg j12:V, reg r189:V, reg p31:p(V +), reg r191:V, reg coef5:*, reg coef6:V, reg c30:L, reg i82:I, reg coef8:V, reg dr44:V, reg dc22:L, reg dx48:V, reg i84:I, reg dx49:V, reg keep:*, reg keep1:V, reg __11:cls, reg r192:V, reg rn:*, reg rn1:V, reg tl10:*, reg tl11:V, reg c31:L, reg i86:I, reg rn3:V, reg tl13:V, reg dr46:V, reg dc23:L, reg dx50:V, reg i88:I, reg rn5:V, reg dx51:V, reg j13:*, reg j14:V, reg __12:cls, reg r193:V, reg r194:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r195:V, reg i91:I, reg r196:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r197:V, reg i94:I, reg r198:V, reg cf:*, reg cf1:V, reg is_na2:cls, reg r199:V, reg any:cls, reg r200:V, reg c32:L, reg ncol:cls, reg cf2:*, reg cf3:V, reg p32:p(V +), reg r202:V, reg r203:V, reg c33:L, reg stop:cls, reg r204:V, reg i99:I, reg t:cls, reg mm6:*, reg mm7:V, reg c34:L, reg mm9:V, reg dr48:V, reg dc24:L, reg dx52:V, reg dx53:V, reg ij:*, reg ij1:V, reg keep2:*, reg keep3:V, reg c35:L, reg mm11:V, reg keep5:V, reg dr50:V, reg dc25:L, reg dx54:V, reg dx55:V, reg na:*, reg na1:V, reg r206:V, reg __13:cls, reg r207:V, reg __14:cls, reg r208:V, reg cf4:*, reg cf5:V, reg c36:L, reg cf7:V, reg dr52:V, reg dc26:L, reg dx56:V, reg dx57:V, reg na2:*, reg na3:V, reg r209:V, reg __15:cls, reg r210:V, reg ___7:cls, reg r211:V, reg p33:p(V +), reg r213:V, reg l31:*, reg c37:L, reg i101:I, reg r215:L, reg l33:*, reg dr54:V, reg dc27:L, reg dx58:V, reg i103:I, reg dx59:V, reg apply2:cls, reg mm14:*, reg mm15:V, reg c38:L, reg mm17:V, reg dr56:V, reg dc28:L, reg dx60:V, reg dx61:V, reg ij2:*, reg ij3:V, reg keep6:*, reg keep7:V, reg c39:L, reg mm19:V, reg keep9:V, reg dr58:V, reg dc29:L, reg dx62:V, reg dx63:V, reg na4:*, reg na5:V, reg __16:cls, reg r218:V, reg __17:cls, reg r219:V, reg r220:V, reg p34:p(V +), reg any1:*, reg any2:V, reg p35:p(V +), reg r223:V, reg ___8:cls, reg r224:V, reg rj:*, reg rj1:V, reg i104:I, reg rj2:V, reg t1:cls, reg mm22:*, reg mm23:V, reg c40:L, reg dr60:V, reg dc30:L, reg dx64:V, reg dx65:V, reg ij4:*, reg ij5:V, reg keep10:*, reg keep11:V, reg __18:cls, reg r225:V, reg cf8:*, reg cf9:V, reg ___9:cls, reg r226:V, reg p36:p(V +), reg r228:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r229:V, reg i107:I, reg r230:V, reg colnames:cls, reg coef9:*, reg coef10:V, reg p37:p(V +), reg r232:V, reg rnn:*, reg rnn1:V, reg c41:L, reg i109:I, reg rnn3:V, reg dr62:V, reg dc31:L, reg dx66:V, reg i111:I, reg dx67:V, reg ij6:*, reg ij7:V, reg __19:cls, reg r233:V, reg list:cls, reg r234:V, reg l34:*, reg dimnames__:cls, reg r235:V, reg cf10:*, reg cf11:V, reg l35:*, reg c42:L, reg i113:I, reg cf13:V, reg l37:*, reg dr64:V, reg dc32:L, reg dx68:V, reg i115:I, reg dx69:V, reg j15:*, reg j16:V, reg ____1:cls, reg r236:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r237:V, reg r238:V, reg tl14:*, reg tl15:V, reg r239:I, reg s2:V, reg l38:I, reg i117:I, reg i118:I, reg i119:I, reg c43:L, reg x2:V, reg which1:cls, reg asgn2:*, reg asgn3:V, reg j17:*, reg j18:V, reg r240:V, reg p38:p(V +), reg r242:V, reg coef11:*, reg coef12:V, reg c44:L, reg i123:I, reg coef14:V, reg dr66:V, reg dc33:L, reg dx70:V, reg i125:I, reg dx71:V, reg keep12:*, reg keep13:V, reg __20:cls, reg r243:V, reg rn6:*, reg rn7:V, reg tl16:*, reg tl17:V, reg c45:L, reg i127:I, reg rn9:V, reg tl19:V, reg dr68:V, reg dc34:L, reg dx72:V, reg i129:I, reg rn11:V, reg dx73:V, reg j19:*, reg j20:V, reg __21:cls, reg r244:V, reg r245:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r246:V, reg i132:I, reg r247:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r248:V, reg i135:I, reg r249:V, reg cf16:*, reg cf17:V, reg is_na3:cls, reg r250:V, reg any3:cls, reg r251:V, reg c46:L, reg setNames2:cls, reg sym27:cls, reg base27:cls, reg guard27:L, reg r252:V, reg r253:V, reg mm26:*, reg mm27:V, reg c47:L, reg mm29:V, reg dr70:V, reg dc35:L, reg dx74:V, reg dx75:V, reg ij8:*, reg ij9:V, reg keep14:*, reg keep15:V, reg c48:L, reg mm31:V, reg keep17:V, reg dr72:V, reg dc36:L, reg dx76:V, reg dx77:V, reg na6:*, reg na7:V, reg r254:V, reg __22:cls, reg r255:V, reg __23:cls, reg r256:V, reg cf18:*, reg cf19:V, reg c49:L, reg cf21:V, reg dr74:V, reg dc37:L, reg dx78:V, reg dx79:V, reg na8:*, reg na9:V, reg r257:V, reg __24:cls, reg r258:V, reg ___10:cls, reg r259:V, reg drop:cls, reg r260:V, reg p39:p(V +), reg rnn4:*, reg rnn5:V, reg c50:L, reg rnn7:V, reg dr76:V, reg dc38:L, reg dx80:V, reg dx81:V, reg ij10:*, reg ij11:V, reg __25:cls, reg r262:V, reg p40:p(V +), reg r264:V, reg l39:*, reg c51:L, reg i139:I, reg r266:L, reg l41:*, reg dr78:V, reg dc39:L, reg dx82:V, reg i141:I, reg dx83:V, reg apply3:cls, reg mm34:*, reg mm35:V, reg c52:L, reg mm37:V, reg dr80:V, reg dc40:L, reg dx84:V, reg dx85:V, reg ij12:*, reg ij13:V, reg keep18:*, reg keep19:V, reg c53:L, reg mm39:V, reg keep21:V, reg dr82:V, reg dc41:L, reg dx86:V, reg dx87:V, reg na10:*, reg na11:V, reg __26:cls, reg r269:V, reg __27:cls, reg r270:V, reg r271:V, reg p41:p(V +), reg any4:*, reg any5:V, reg p42:p(V +), reg r274:V, reg ___11:cls, reg r275:V, reg rj3:*, reg rj4:V, reg i142:I, reg rj5:V, reg setNames3:cls, reg sym28:cls, reg base28:cls, reg guard28:L, reg r276:V, reg r277:V, reg mm42:*, reg mm43:V, reg c54:L, reg dr84:V, reg dc42:L, reg dx88:V, reg dx89:V, reg ij14:*, reg ij15:V, reg keep22:*, reg keep23:V, reg __28:cls, reg r278:V, reg cf22:*, reg cf23:V, reg ___12:cls, reg r279:V, reg drop1:cls, reg r280:V, reg p43:p(V +), reg rnn8:*, reg rnn9:V, reg c55:L, reg rnn11:V, reg dr86:V, reg dc43:L, reg dx90:V, reg dx91:V, reg ij16:*, reg ij17:V, reg __29:cls, reg r282:V, reg p44:p(V +), reg r284:V, reg l42:*, reg c56:L, reg i144:I, reg rj7:V, reg l44:*, reg dr88:V, reg dc44:L, reg dx92:V, reg i146:I, reg dx93:V, reg j21:*, reg j22:V, reg ____2:cls, reg r285:V, reg int:*, reg int1:V, reg r286:V, reg c57:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r287:V, reg r288:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r289:V, reg r290:V, reg isM:*, reg isM1:V, reg c58:L, reg coef15:*, reg coef16:V, reg c59:L, reg coef18:V, reg dr90:V, reg dc45:L, reg dx94:V, reg dx95:V, reg int2:*, reg int3:V, reg __30:cls, reg r291:V, reg dx96:V, reg coef19:*, reg coef20:V, reg c60:L, reg coef22:V, reg dr92:V, reg dc46:L, reg dx97:V, reg int4:*, reg int5:V, reg __31:cls, reg r292:V, reg list1:cls, reg r293:V, reg res:*, reg res1:V, reg c61:cls, reg r294:V, reg structure:cls, reg res2:*, reg res3:V, reg p45:p(V +), reg isM2:*, reg isM3:V, reg p46:p(V +), reg r298:V |
    mkenv;
    st object = object;
    use_na_isMissing = missing.0(use_na);
    if use_na_isMissing then L0(FALSE) else L0(use_na);
  L0(use_na_orDefault):
    st `use.na` = use_na_orDefault;
    st `...` = ddd;
    object1 = ld object;
    check L80() else D0();
  D0():
    deopt 0 [object1];
  L80():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L82() else L83(object2);
  L81(dx1):
    st xl = dx1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L85() else L86();
  L82():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L84() else L83(dr);
  L83(object4):
    r = `$`(object4, <sym xlevels>);
    goto L81(r);
  L1(r2):
    r4 = `!`(r2);
    c1 = `as.logical`(r4);
    if c1 then L89() else L2();
  L84():
    dx = getTryDispatchBuiltinValue(dr);
    goto L81(dx);
  L85():
    xl = ld xl;
    check L87() else D1();
  L86():
    r1 = dyn base(<sym xl>);
    goto L1(r1);
  D1():
    deopt 6 [xl];
  L2():
    terms = ldf terms;
    check L94() else D5();
  L87():
    xl1 = force? xl;
    checkMissing(xl1);
    length = ldf length in base;
    r3 = dyn length(xl1);
    check L88() else D2();
  L89():
    as_list = ldf `as.list`;
    check L90() else D3();
  D2():
    deopt 9 [r3];
  D3():
    deopt 12 [];
  D5():
    deopt 19 [];
  L88():
    goto L1(r3);
  L90():
    p1 = prom<V +>{
      coef = ldf coef;
      p = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        return object6;
      };
      r6 = dyn coef(p);
      return r6;
    };
    r8 = dyn as_list(p1);
    check L91() else D4();
  L94():
    p2 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    r12 = dyn terms(p2);
    check L95() else D6();
  D4():
    deopt 14 [r8];
  D6():
    deopt 21 [r12];
  L91():
    popenv;
    return r8;
  L95():
    st Terms = r12;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L96() else L97();
  L4(r14):
    st tl = r14;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L100() else L101();
  L96():
    Terms = ld Terms;
    check L98() else D7();
  L97():
    r13 = dyn base1(<sym Terms>, "term.labels");
    goto L4(r13);
  D7():
    deopt 25 [Terms];
  L5(r17):
    st int = r17;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L104() else L105();
  L98():
    Terms1 = force? Terms;
    checkMissing(Terms1);
    attr = ldf attr in base;
    r15 = dyn attr(Terms1, "term.labels");
    check L99() else D8();
  L100():
    Terms2 = ld Terms;
    check L102() else D9();
  L101():
    r16 = dyn base2(<sym Terms>, "intercept");
    goto L5(r16);
  D8():
    deopt 29 [r15];
  D9():
    deopt 33 [Terms2];
  L6(r20):
    c2 = `is.object`(r20);
    if c2 then L108() else L109();
  L99():
    goto L4(r15);
  L102():
    Terms3 = force? Terms2;
    checkMissing(Terms3);
    attr1 = ldf attr in base;
    r18 = dyn attr1(Terms3, "intercept");
    check L103() else D10();
  L104():
    Terms4 = ld Terms;
    check L106() else D11();
  L105():
    r19 = dyn base3(<sym Terms>, "factors");
    goto L6(r19);
  D10():
    deopt 37 [r18];
  D11():
    deopt 41 [Terms4];
  L7(dx3):
    st facs = dx3;
    delete_response = ldf `delete.response`;
    check L111() else D13();
  L103():
    goto L5(r18);
  L106():
    Terms5 = force? Terms4;
    checkMissing(Terms5);
    attr2 = ldf attr in base;
    r21 = dyn attr2(Terms5, "factors");
    check L107() else D12();
  L108():
    dr2 = tryDispatchBuiltin.1("[", r20);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L110() else L109();
  L109():
    __ = ldf `[` in base;
    r24 = dyn __(r20, -1.0, <missing>, FALSE);
    goto L7(r24);
  D12():
    deopt 45 [r21];
  D13():
    deopt 55 [];
  L107():
    goto L6(r21);
  L110():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L111():
    p3 = prom<V +>{
      Terms6 = ld Terms;
      Terms7 = force? Terms6;
      checkMissing(Terms7);
      return Terms7;
    };
    r26 = dyn delete_response(p3);
    check L112() else D14();
  D14():
    deopt 57 [r26];
  L112():
    st Terms = r26;
    ____ = ldf `%||%`;
    check L113() else D15();
  D15():
    deopt 60 [];
  L113():
    p4 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c3 = `is.object`(object10);
      if c3 then L1() else L2(object10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object12):
      r27 = `$`(object12, <sym model>);
      goto L0(r27);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      model_frame = ldf `model.frame`;
      p5 = prom<V +>{
        object13 = ld object;
        object14 = force? object13;
        checkMissing(object14);
        return object14;
      };
      r30 = dyn model_frame(p5);
      return r30;
    };
    r32 = dyn ____(p4, p6);
    check L114() else D16();
  D16():
    deopt 63 [r32];
  L114():
    st mf = r32;
    setNames = ldf setNames;
    check L115() else D17();
  D17():
    deopt 66 [];
  L115():
    p7 = prom<V +>{
      sym4 = ldf dimnames;
      base4 = ldf dimnames in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r34):
      c4 = `is.object`(r34);
      if c4 then L4() else L5(r34);
    L2():
      facs = ld facs;
      facs1 = force? facs;
      checkMissing(facs1);
      dimnames = ldf dimnames in base;
      r35 = dyn dimnames(facs1);
      goto L0(r35);
    L3():
      r33 = dyn base4(<sym facs>);
      goto L0(r33);
    L1(dx7):
      st vars = dx7;
      invisible.0();
      return dx7;
    L4():
      dr6 = tryDispatchBuiltin.1("[[", r34);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L6() else L5(dr6);
    L5(r37):
      __1 = ldf `[[` in base;
      r38 = dyn __1(r37, 1.0);
      goto L1(r38);
    L6():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    };
    r40 = dyn setNames(<missing>, p7);
    check L116() else D18();
  D18():
    deopt 69 [r40];
  L116():
    st nvars = r40;
    lapply = ldf lapply;
    check L117() else D19();
  D19():
    deopt 72 [];
  L117():
    p8 = prom<V +>{
      nvars = ld nvars;
      nvars1 = force? nvars;
      checkMissing(nvars1);
      return nvars1;
    };
    p9 = prom<V +>{
      r42 = clos inner3002224933;
      return r42;
    };
    r44 = dyn lapply(p8, p9);
    check L118() else D20();
  D20():
    deopt 75 [r44];
  L118():
    st xtlv = r44;
    pmax = ldf pmax;
    check L119() else D21();
  D21():
    deopt 78 [];
  L119():
    p11 = prom<V +>{
      lengths = ldf lengths;
      p10 = prom<V +>{
        xtlv = ld xtlv;
        xtlv1 = force? xtlv;
        checkMissing(xtlv1);
        return xtlv1;
      };
      r46 = dyn lengths(p10);
      return r46;
    };
    r48 = dyn pmax(p11, 1);
    check L120() else D22();
  D22():
    deopt 81 [r48];
  L120():
    st nxl = r48;
    apply = ldf apply;
    check L121() else D23();
  D23():
    deopt 84 [];
  L121():
    p12 = prom<V +>{
      facs2 = ld facs;
      facs3 = force? facs2;
      checkMissing(facs3);
      return facs3;
    };
    p13 = prom<V +>{
      r50 = clos inner2501545716;
      return r50;
    };
    r52 = dyn apply(p12, 2, p13);
    check L122() else D24();
  D24():
    deopt 88 [r52];
  L122():
    st lterms = r52;
    sym5 = ldf sum;
    base5 = ldf sum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L123() else L124();
  L8(r54):
    st nl = r54;
    lapply1 = ldf lapply;
    check L127() else D27();
  L123():
    lterms = ld lterms;
    check L125() else D25();
  L124():
    r53 = dyn base5(<sym lterms>);
    goto L8(r53);
  D25():
    deopt 92 [lterms];
  D27():
    deopt 98 [];
  L125():
    lterms1 = force? lterms;
    checkMissing(lterms1);
    sum = ldf sum in base;
    r55 = dyn sum(lterms1);
    check L126() else D26();
  L127():
    p14 = prom<V +>{
      nvars2 = ld nvars;
      nvars3 = force? nvars2;
      checkMissing(nvars3);
      return nvars3;
    };
    p15 = prom<V +>{
      r57 = clos inner3002224933;
      return r57;
    };
    r59 = dyn lapply1(p14, p15);
    check L128() else D28();
  D26():
    deopt 95 [r55];
  D28():
    deopt 101 [r59];
  L126():
    goto L8(r55);
  L128():
    st args = r59;
    do_call = ldf `do.call`;
    check L129() else D29();
  D29():
    deopt 104 [];
  L129():
    p16 = prom<V +>{
      data_frame = ld `data.frame`;
      data_frame1 = force? data_frame;
      checkMissing(data_frame1);
      return data_frame1;
    };
    p17 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    r62 = dyn do_call(p16, p17);
    check L130() else D30();
  D30():
    deopt 107 [r62];
  L130():
    st dummy = r62;
    vars = ld vars;
    check L131() else D31();
  D31():
    deopt 109 [vars];
  L131():
    vars1 = force? vars;
    checkMissing(vars1);
    l = ld dummy;
    names__ = ldf `names<-`;
    check L132() else D32();
  D32():
    deopt 112 [vars1, l, vars1];
  L132():
    r63 = dyn names__(l, NULL, vars1);
    check L133() else D33();
  D33():
    deopt 114 [vars1, r63];
  L133():
    st dummy = r63;
    st pos = 0;
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L134() else L135();
  L9(r65):
    st rn = r65;
    character = ldf character;
    check L139() else D37();
  L134():
    tl = ld tl;
    check L136() else D34();
  L135():
    r64 = dyn base6(<sym tl>, <sym lterms>);
    goto L9(r64);
  D34():
    deopt 121 [tl];
  D37():
    deopt 129 [];
  L136():
    tl1 = force? tl;
    checkMissing(tl1);
    lterms2 = ld lterms;
    check L137() else D35();
  L139():
    p18 = prom<V +>{
      nl = ld nl;
      nl1 = force? nl;
      checkMissing(nl1);
      return nl1;
    };
    r68 = dyn character(p18);
    check L140() else D38();
  D35():
    deopt 123 [lterms2];
  D38():
    deopt 131 [r68];
  L137():
    lterms3 = force? lterms2;
    checkMissing(lterms3);
    rep_int = ldf `rep.int` in base;
    r66 = dyn rep_int(tl1, lterms3);
    check L138() else D36();
  L140():
    st rnn = r68;
    tl2 = ld tl;
    check L141() else D39();
  D36():
    deopt 126 [r66];
  D39():
    deopt 133 [tl2];
  L138():
    goto L9(r66);
  L141():
    tl3 = force? tl2;
    checkMissing(tl3);
    s = toForSeq(tl3);
    l1 = length(s);
    i = 0;
    goto L10(i);
  L10(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l1, i2);
    if c5 then L142() else L29();
  L29():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    vars2 = ld vars;
    check L143() else D40();
  L142():
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L221() else L222();
  D40():
    deopt 135 [i2, vars2];
  L30(r116):
    l17 = ld dummy;
    attr__ = ldf `attr<-`;
    check L225() else D75();
  L143():
    vars3 = force? vars2;
    checkMissing(vars3);
    c6 = `is.object`(vars3);
    if c6 then L144() else L145(i2, vars3);
  L221():
    mf = ld mf;
    check L223() else D73();
  L222():
    r115 = dyn base11(<sym mf>, "terms");
    goto L30(r115);
  D73():
    deopt 258 [mf];
  D75():
    deopt 264 [r116, l17, r116];
  L11(i8, dx9):
    st i = dx9;
    i13 = ld i;
    check L152() else D43();
  L144():
    dr8 = tryDispatchBuiltin.1("[", vars3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L146() else L145(i2, dr8);
  L145(i6, vars5):
    facs4 = ld facs;
    check L147() else D41();
  L223():
    mf1 = force? mf;
    checkMissing(mf1);
    attr3 = ldf attr in base;
    r117 = dyn attr3(mf1, "terms");
    check L224() else D74();
  L225():
    r118 = dyn attr__(l17, NULL, "terms", r116);
    check L226() else D76();
  D41():
    deopt 137 [i6, vars5, facs4];
  D43():
    deopt 148 [i8, i13];
  D74():
    deopt 262 [r117];
  D76():
    deopt 267 [r116, r118];
  L146():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L11(i2, dx8);
  L147():
    facs5 = force? facs4;
    checkMissing(facs5);
    c7 = `is.object`(facs5);
    if c7 then L148() else L149(i6, vars5, facs5);
  L152():
    i14 = force? i13;
    checkMissing(i14);
    c8 = `is.object`(i14);
    if c8 then L153() else L154(i8, i14);
  L224():
    goto L30(r117);
  L226():
    st dummy = r118;
    object15 = ld object;
    check L227() else D77();
  D77():
    deopt 269 [object15];
  L12(i12, vars9, dx11):
    r70 = `>`(dx11, 0.0);
    __3 = ldf `[` in base;
    r71 = dyn __3(vars9, r70);
    goto L11(i12, r71);
  L13(i20, dx13):
    st ifac = dx13;
    lterms4 = ld lterms;
    check L161() else D46();
  L148():
    dr10 = tryDispatchBuiltin.1("[", facs5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L150() else L149(i6, vars5, dr10);
  L149(i10, vars7, facs7):
    j = ld j;
    check L151() else D42();
  L153():
    dr12 = tryDispatchBuiltin.1("[", i14);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L155() else L154(i8, dr12);
  L154(i17, i18):
    nxl = ld nxl;
    check L156() else D44();
  L227():
    object16 = force? object15;
    checkMissing(object16);
    c20 = `is.object`(object16);
    if c20 then L229() else L230(object16);
  D42():
    deopt 140 [i10, vars7, facs7, j];
  D44():
    deopt 150 [i17, i18, nxl];
  D46():
    deopt 159 [i20, lterms4];
  L150():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L12(i6, vars5, dx10);
  L151():
    j1 = force? j;
    __2 = ldf `[` in base;
    r69 = dyn __2(facs5, <missing>, j1);
    goto L12(i10, vars7, r69);
  L155():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L13(i8, dx12);
  L156():
    nxl1 = force? nxl;
    checkMissing(nxl1);
    c9 = `is.object`(nxl1);
    if c9 then L157() else L158(i17, i18, nxl1);
  L161():
    lterms5 = force? lterms4;
    checkMissing(lterms5);
    c10 = `is.object`(lterms5);
    if c10 then L162() else L163(i20, lterms5);
  L228(dx37):
    st lcontr = dx37;
    vapply = ldf vapply;
    check L232() else D78();
  L229():
    dr32 = tryDispatchBuiltin.1("$", object16);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L231() else L230(dr32);
  L230(object18):
    r119 = `$`(object18, <sym contrasts>);
    goto L228(r119);
  D78():
    deopt 274 [];
  L14(i27, i28, dx15):
    r73 = `>`(dx15, 1.0);
    __5 = ldf `[` in base;
    r74 = dyn __5(i28, r73);
    goto L13(i27, r74);
  L15(i34, dx17):
    st `lt.j` = dx17;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L166() else L167();
  L157():
    dr14 = tryDispatchBuiltin.1("[", nxl1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L159() else L158(i17, i18, dr14);
  L158(i23, i24, nxl3):
    i29 = ld i;
    check L160() else D45();
  L162():
    dr16 = tryDispatchBuiltin.1("[[", lterms5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L164() else L163(i20, dr16);
  L163(i32, lterms7):
    j2 = ld j;
    check L165() else D47();
  L231():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L228(dx36);
  L232():
    p23 = prom<V +>{
      dummy = ld dummy;
      dummy1 = force? dummy;
      checkMissing(dummy1);
      return dummy1;
    };
    p24 = prom<V +>{
      is_factor = ld `is.factor`;
      is_factor1 = force? is_factor;
      checkMissing(is_factor1);
      return is_factor1;
    };
    r122 = dyn vapply(p23, p24, NA_LGL);
    check L233() else D79();
  D45():
    deopt 152 [i23, i24, nxl3, i29];
  D47():
    deopt 161 [i32, lterms7, j2];
  D79():
    deopt 278 [r122];
  L16(i37, r77):
    r79 = `==`(r77, 0);
    c11 = `as.logical`(r79);
    if c11 then L170() else L17();
  L159():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L14(i17, i18, dx14);
  L160():
    i30 = force? i29;
    __4 = ldf `[` in base;
    r72 = dyn __4(nxl3, i30);
    goto L14(i23, i24, r72);
  L164():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L15(i20, dx16);
  L165():
    j3 = force? j2;
    __6 = ldf `[[` in base;
    r75 = dyn __6(lterms7, j3);
    goto L15(i32, r75);
  L166():
    ifac = ld ifac;
    check L168() else D48();
  L167():
    r76 = dyn base7(<sym ifac>);
    goto L16(i34, r76);
  L233():
    st lci = r122;
    lcontr = ld lcontr;
    check L234() else D80();
  D48():
    deopt 167 [i34, ifac];
  D80():
    deopt 280 [lcontr];
  L17():
    pos2 = ld pos;
    check L177() else D52();
  L19(i44):
    pos7 = ld pos;
    check L219() else D71();
  L168():
    ifac1 = force? ifac;
    checkMissing(ifac1);
    length1 = ldf length in base;
    r78 = dyn length1(ifac1);
    check L169() else D49();
  L170():
    j4 = ld j;
    check L171() else D50();
  L234():
    lcontr1 = force? lcontr;
    checkMissing(lcontr1);
    c21 = `is.object`(lcontr1);
    if c21 then L235() else L236(lcontr1);
  D49():
    deopt 170 [i34, r78];
  D50():
    deopt 173 [i37, j4];
  D52():
    deopt 182 [i37, pos2];
  D71():
    deopt 248 [i44, pos7];
  L31(dx39):
    st lcontr = dx39;
    model_matrix = ldf `model.matrix`;
    check L246() else D84();
  L169():
    goto L16(i34, r78);
  L171():
    j5 = force? j4;
    checkMissing(j5);
    l2 = ld rnn;
    c12 = `is.object`(l2);
    if c12 then L172() else L173(i37, j5, l2);
  L177():
    pos3 = force? pos2;
    checkMissing(pos3);
    sym8 = ldf seq_len;
    base8 = ldf seq_len in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L178() else L179();
  L219():
    pos8 = force? pos7;
    checkMissing(pos8);
    lt_j2 = ld `lt.j`;
    check L220() else D72();
  L235():
    dr34 = tryDispatchBuiltin.1("[", lcontr1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L237() else L236(dr34);
  L236(lcontr3):
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L238() else L239();
  D72():
    deopt 249 [i44, pos8, lt_j2];
  D84():
    deopt 294 [];
  L18(i43, j9, dx19):
    st rnn = dx19;
    goto L19(i43);
  L20(i47, pos6, r83):
    r85 = `+`(pos6, r83);
    st `p.j` = r85;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L181() else L182();
  L32(lcontr6, r124):
    c22 = `is.object`(r124);
    if c22 then L242() else L243(lcontr6, r124);
  L172():
    dr18 = tryDispatchBuiltin.0("[<-", l2, j5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L174() else L173(i37, j5, dr18);
  L173(i41, j7, l4):
    pos = ld pos;
    check L175() else D51();
  L178():
    lt_j = ld `lt.j`;
    check L180() else D53();
  L179():
    r82 = dyn base8(<sym lt.j>);
    goto L20(i37, pos3, r82);
  L220():
    lt_j3 = force? lt_j2;
    checkMissing(lt_j3);
    r114 = `+`(pos8, lt_j3);
    st pos = r114;
    goto L10(i44);
  L237():
    dx38 = getTryDispatchBuiltinValue(dr34);
    goto L31(dx38);
  L238():
    lci = ld lci;
    check L240() else D81();
  L239():
    r123 = dyn base12(<sym lci>);
    goto L32(lcontr3, r123);
  L246():
    p25 = prom<V +>{
      Terms8 = ld Terms;
      Terms9 = force? Terms8;
      checkMissing(Terms9);
      return Terms9;
    };
    p26 = prom<V +>{
      dummy2 = ld dummy;
      dummy3 = force? dummy2;
      checkMissing(dummy3);
      return dummy3;
    };
    p27 = prom<V +>{
      lcontr11 = ld lcontr;
      lcontr12 = force? lcontr11;
      checkMissing(lcontr12);
      return lcontr12;
    };
    p28 = prom<V +>{
      xl2 = ld xl;
      xl3 = force? xl2;
      checkMissing(xl3);
      return xl3;
    };
    r134 = dyn model_matrix(p25, p26, p27, p28);
    check L247() else D85();
  D51():
    deopt 176 [i41, j7, l4, j5, pos];
  D53():
    deopt 184 [i37, pos3, lt_j];
  D81():
    deopt 284 [lcontr3, lci];
  D85():
    deopt 299 [r134];
  L21(i50, r87):
    r89 = `==`(r87, 1);
    c13 = `as.logical`(r89);
    if c13 then L185() else L22();
  L33(lcontr10, dx41):
    __10 = ldf `[` in base;
    r129 = dyn __10(lcontr10, dx41);
    goto L31(r129);
  L174():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L18(i37, j5, dx18);
  L175():
    pos1 = force? pos;
    checkMissing(pos1);
    r80 = `+`(pos1, 1);
    ___ = ldf `[<-` in base;
    r81 = dyn ___(l4, j5, r80);
    goto L18(i41, j7, r81);
  L180():
    lt_j1 = force? lt_j;
    checkMissing(lt_j1);
    r84 = seq_len(lt_j1);
    goto L20(i37, pos3, r84);
  L181():
    ifac2 = ld ifac;
    check L183() else D54();
  L182():
    r86 = dyn base9(<sym ifac>);
    goto L21(i47, r86);
  L240():
    lci1 = force? lci;
    checkMissing(lci1);
    names = ldf names in base;
    r125 = dyn names(lci1);
    check L241() else D82();
  L242():
    dr36 = tryDispatchBuiltin.1("[", r124);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L244() else L243(lcontr6, dr36);
  L243(lcontr8, r127):
    lci2 = ld lci;
    check L245() else D83();
  L247():
    st mm = r134;
    sym13 = ldf anyNA;
    base13 = ldf anyNA in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L248() else L249();
  D54():
    deopt 191 [i47, ifac2];
  D82():
    deopt 287 [lcontr3, r125];
  D83():
    deopt 288 [lcontr8, r127, lci2];
  L22():
    expand_grid = ldf `expand.grid`;
    check L205() else D63();
  L34(r136):
    c23 = `as.logical`(r136);
    if c23 then L252() else L35();
  L183():
    ifac3 = force? ifac2;
    checkMissing(ifac3);
    length2 = ldf length in base;
    r88 = dyn length2(ifac3);
    check L184() else D55();
  L185():
    xtlv2 = ld xtlv;
    check L186() else D56();
  L241():
    goto L32(lcontr3, r125);
  L244():
    dx40 = getTryDispatchBuiltinValue(dr36);
    goto L33(lcontr6, dx40);
  L245():
    lci3 = force? lci2;
    __9 = ldf `[` in base;
    r128 = dyn __9(r127, lci3);
    goto L33(lcontr8, r128);
  L248():
    mm = ld mm;
    check L250() else D86();
  L249():
    r135 = dyn base13(<sym mm>);
    goto L34(r135);
  D55():
    deopt 194 [i47, r88];
  D56():
    deopt 197 [i50, xtlv2];
  D63():
    deopt 221 [i50];
  D86():
    deopt 303 [mm];
  L35():
    goto L38();
  L38():
    object19 = ld object;
    check L263() else D92();
  L184():
    goto L21(i47, r88);
  L186():
    xtlv3 = force? xtlv2;
    checkMissing(xtlv3);
    c14 = `is.object`(xtlv3);
    if c14 then L187() else L188(i50, xtlv3);
  L205():
    p19 = prom<V +>{
      xtlv6 = ld xtlv;
      xtlv7 = force? xtlv6;
      checkMissing(xtlv7);
      c17 = `is.object`(xtlv7);
      if c17 then L1() else L2(xtlv7);
    L0(dx31):
      return dx31;
    L1():
      dr26 = tryDispatchBuiltin.1("[", xtlv7);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(xtlv9):
      ifac8 = ld ifac;
      ifac9 = force? ifac8;
      __8 = ldf `[` in base;
      r100 = dyn __8(xtlv9, ifac9);
      goto L0(r100);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx30);
    };
    r102 = dyn expand_grid[, `KEEP.OUT.ATTRS`](p19, FALSE);
    check L206() else D64();
  L250():
    mm1 = force? mm;
    checkMissing(mm1);
    anyNA = ldf anyNA in base;
    r137 = dyn anyNA(mm1);
    check L251() else D87();
  L252():
    warning = ldf warning;
    check L253() else D88();
  D64():
    deopt 225 [i50, r102];
  D87():
    deopt 306 [r137];
  D88():
    deopt 308 [];
  D92():
    deopt 324 [object19];
  L23(i56, dx21):
    st `x.i` = dx21;
    l5 = ld dummy;
    c15 = `is.object`(l5);
    if c15 then L191() else L192(i56, dx21, l5);
  L187():
    dr20 = tryDispatchBuiltin.1("[[", xtlv3);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L189() else L188(i50, dr20);
  L188(i54, xtlv5):
    ifac4 = ld ifac;
    check L190() else D57();
  L206():
    st tmp = r102;
    tmp = ld tmp;
    check L207() else D65();
  L251():
    goto L34(r137);
  L253():
    r138 = dyn warning("some terms will have NAs due to the limits of the method");
    check L254() else D89();
  L263():
    object20 = force? object19;
    checkMissing(object20);
    c25 = `is.object`(object20);
    if c25 then L265() else L266(object20);
  D57():
    deopt 199 [i54, xtlv5, ifac4];
  D65():
    deopt 227 [i50, tmp];
  D89():
    deopt 310 [r138];
  L24(i60, dx27):
    st dummy = dx27;
    sym10 = ldf `as.character`;
    base10 = ldf `as.character` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L196() else L197();
  L189():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L23(i50, dx20);
  L190():
    ifac5 = force? ifac4;
    __7 = ldf `[[` in base;
    r90 = dyn __7(xtlv5, ifac5);
    goto L23(i54, r90);
  L191():
    dr22 = tryDispatchBuiltin.0("[<-", l5, dx21);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L193() else L192(i56, dx21, dr22);
  L192(i58, dx23, l7):
    p_j = ld `p.j`;
    check L194() else D58();
  L207():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    l11 = ld dummy;
    c18 = `is.object`(l11);
    if c18 then L208() else L209(i50, tmp1, l11);
  L254():
    l18 = ld mm;
    c24 = `is.object`(l18);
    if c24 then L255() else L256(NA_LGL, l18);
  L264(dx45):
    st coef = dx45;
    use_na1 = ld `use.na`;
    check L268() else D93();
  L265():
    dr40 = tryDispatchBuiltin.1("$", object20);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L267() else L266(dr40);
  L266(object22):
    r154 = `$`(object22, <sym coefficients>);
    goto L264(r154);
  D58():
    deopt 204 [i58, dx23, l7, dx21, p_j];
  D93():
    deopt 328 [use_na1];
  L25(i63, r93):
    l8 = ld rnn;
    c16 = `is.object`(l8);
    if c16 then L200() else L201(i63, r93, l8);
  L27(i71, dx33):
    st dummy = dx33;
    apply1 = ldf apply;
    check L213() else D68();
  L36(r142, dx43):
    st mm = dx43;
    goto L38();
  L193():
    dx25 = getTryDispatchBuiltinValue(dr22);
    goto L24(i56, dx25);
  L194():
    p_j1 = force? p_j;
    ifac6 = ld ifac;
    check L195() else D59();
  L196():
    x_i = ld `x.i`;
    check L198() else D60();
  L197():
    r92 = dyn base10(<sym x.i>);
    goto L25(i60, r92);
  L208():
    dr28 = tryDispatchBuiltin.0("[<-", l11, tmp1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L210() else L209(i50, tmp1, dr28);
  L209(i69, tmp3, l13):
    p_j4 = ld `p.j`;
    check L211() else D66();
  L255():
    dr38 = tryDispatchBuiltin.0("[<-", l18, NA_LGL);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L257() else L256(NA_LGL, dr38);
  L256(r140, l20):
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L258() else L259();
  L267():
    dx44 = getTryDispatchBuiltinValue(dr40);
    goto L264(dx44);
  L268():
    use_na2 = force? use_na1;
    checkMissing(use_na2);
    r155 = `!`(use_na2);
    c26 = `as.logical`(r155);
    if c26 then L269() else L39();
  D59():
    deopt 205 [i58, dx23, l7, dx21, p_j1, ifac6];
  D60():
    deopt 211 [i60, x_i];
  D66():
    deopt 230 [i69, tmp3, l13, tmp1, p_j4];
  D68():
    deopt 236 [i71];
  L26(i67, r98, dx29):
    st rnn = dx29;
    goto L19(i67);
  L37(r148, l23, r149, r150):
    ___5 = ldf `[<-` in base;
    r152 = dyn ___5(l23, r149, r150);
    goto L36(r148, r152);
  L39():
    goto L42();
  L42():
    sym16 = ldf attr;
    base16 = ldf attr in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L278() else L279();
  L195():
    ifac7 = force? ifac6;
    ___1 = ldf `[<-` in base;
    r91 = dyn ___1(l7, dx21, p_j1, ifac7);
    goto L24(i58, r91);
  L198():
    x_i1 = force? x_i;
    checkMissing(x_i1);
    as_character = ldf `as.character` in base;
    r94 = dyn as_character(x_i1);
    check L199() else D61();
  L200():
    dr24 = tryDispatchBuiltin.0("[<-", l8, r93);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L202() else L201(i63, r93, dr24);
  L201(i65, r96, l10):
    p_j2 = ld `p.j`;
    check L203() else D62();
  L210():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L27(i50, dx32);
  L211():
    p_j5 = force? p_j4;
    ifac10 = ld ifac;
    check L212() else D67();
  L213():
    p21 = prom<V +>{
      as_matrix = ldf `as.matrix`;
      p20 = prom<V +>{
        tmp6 = ld tmp;
        tmp7 = force? tmp6;
        checkMissing(tmp7);
        return tmp7;
      };
      r105 = dyn as_matrix(p20);
      return r105;
    };
    p22 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r108 = dyn apply1[, , , collapse](p21, 1, p22, ":");
    check L214() else D69();
  L257():
    dx42 = getTryDispatchBuiltinValue(dr38);
    goto L36(NA_LGL, dx42);
  L258():
    mm2 = ld mm;
    check L260() else D90();
  L259():
    r147 = dyn base14(<sym mm>);
    goto L37(r140, l20, NA_LGL, r147);
  L269():
    l24 = ld coef;
    c27 = `is.object`(l24);
    if c27 then L270() else L271(0.0, l24);
  D61():
    deopt 214 [i60, r94];
  D62():
    deopt 216 [i65, r96, l10, r93, p_j2];
  D67():
    deopt 231 [i69, tmp3, l13, tmp1, p_j5, ifac10];
  D69():
    deopt 242 [i71, r108];
  D90():
    deopt 316 [r140, l20, NA_LGL, mm2];
  L40(r159, dx47):
    st coef = dx47;
    goto L42();
  L43(r172):
    st asgn = r172;
    setNames1 = ldf setNames;
    check L282() else D98();
  L199():
    goto L25(i60, r94);
  L202():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L26(i63, r93, dx28);
  L203():
    p_j3 = force? p_j2;
    ___2 = ldf `[<-` in base;
    r99 = dyn ___2(l10, r93, p_j3);
    goto L26(i65, r96, r99);
  L212():
    ifac11 = force? ifac10;
    ___3 = ldf `[<-` in base;
    r103 = dyn ___3(l13, tmp1, p_j5, ifac11);
    goto L27(i69, r103);
  L214():
    l14 = ld rnn;
    c19 = `is.object`(l14);
    if c19 then L215() else L216(i71, r108, l14);
  L260():
    mm3 = force? mm2;
    checkMissing(mm3);
    is_na = ldf `is.na` in base;
    r151 = dyn is_na(mm3);
    check L261() else D91();
  L270():
    dr42 = tryDispatchBuiltin.0("[<-", l24, 0.0);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L272() else L271(0.0, dr42);
  L271(r157, l26):
    sym15 = ldf `is.na`;
    base15 = ldf `is.na` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L273() else L274();
  L278():
    mm4 = ld mm;
    check L280() else D96();
  L279():
    r171 = dyn base16(<sym mm>, "assign");
    goto L43(r171);
  D91():
    deopt 319 [r140, l20, NA_LGL, r151];
  D96():
    deopt 346 [mm4];
  D98():
    deopt 353 [];
  L28(i75, r112, dx35):
    st rnn = dx35;
    goto L19(i75);
  L41(r165, l29, r166, r167):
    ___6 = ldf `[<-` in base;
    r169 = dyn ___6(l29, r166, r167);
    goto L40(r165, r169);
  L215():
    dr30 = tryDispatchBuiltin.0("[<-", l14, r108);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L217() else L216(i71, r108, dr30);
  L216(i73, r110, l16):
    p_j6 = ld `p.j`;
    check L218() else D70();
  L261():
    goto L37(r140, l20, NA_LGL, r151);
  L272():
    dx46 = getTryDispatchBuiltinValue(dr42);
    goto L40(0.0, dx46);
  L273():
    coef1 = ld coef;
    check L275() else D94();
  L274():
    r164 = dyn base15(<sym coef>);
    goto L41(r157, l26, 0.0, r164);
  L280():
    mm5 = force? mm4;
    checkMissing(mm5);
    attr4 = ldf attr in base;
    r173 = dyn attr4(mm5, "assign");
    check L281() else D97();
  L282():
    p29 = prom<V +>{
      sym17 = ldf vector;
      base17 = ldf vector in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L2() else L3();
    L0(r175):
      return r175;
    L2():
      sym18 = ldf length;
      base18 = ldf length in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L4() else L5();
    L3():
      r174 = dyn base17("list", <lang length(tl)>);
      goto L0(r174);
    L1(r177):
      vector = ldf vector in base;
      r179 = dyn vector("list", r177);
      goto L0(r179);
    L4():
      tl4 = ld tl;
      tl5 = force? tl4;
      checkMissing(tl5);
      length3 = ldf length in base;
      r178 = dyn length3(tl5);
      goto L1(r178);
    L5():
      r176 = dyn base18(<sym tl>);
      goto L1(r176);
    };
    p30 = prom<V +>{
      tl6 = ld tl;
      tl7 = force? tl6;
      checkMissing(tl7);
      return tl7;
    };
    r182 = dyn setNames1(p29, p30);
    check L283() else D99();
  D70():
    deopt 244 [i73, r110, l16, r108, p_j6];
  D94():
    deopt 336 [r157, l26, 0.0, coef1];
  D97():
    deopt 350 [r173];
  D99():
    deopt 356 [r182];
  L217():
    dx34 = getTryDispatchBuiltinValue(dr30);
    goto L28(i71, r108, dx34);
  L218():
    p_j7 = force? p_j6;
    ___4 = ldf `[<-` in base;
    r113 = dyn ___4(l16, r108, p_j7);
    goto L28(i73, r110, r113);
  L275():
    coef2 = force? coef1;
    checkMissing(coef2);
    is_na1 = ldf `is.na` in base;
    r168 = dyn is_na1(coef2);
    check L276() else D95();
  L281():
    goto L43(r173);
  L283():
    st res = r182;
    sym19 = ldf `is.matrix`;
    base19 = ldf `is.matrix` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L284() else L285();
  D95():
    deopt 339 [r157, l26, 0.0, r168];
  L44(r184):
    st isM = r184;
    c28 = `as.logical`(r184);
    if c28 then L288() else L45();
  L276():
    goto L41(r157, l26, 0.0, r168);
  L284():
    coef3 = ld coef;
    check L286() else D100();
  L285():
    r183 = dyn base19(<sym coef>);
    goto L44(r183);
  D100():
    deopt 360 [coef3];
  L45():
    sym24 = ldf seq_along;
    base24 = ldf seq_along in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L349() else L350();
  L61():
    int = ld int;
    check L389() else D152();
  L286():
    coef4 = force? coef3;
    checkMissing(coef4);
    is_matrix = ldf `is.matrix` in base;
    r185 = dyn is_matrix(coef4);
    check L287() else D101();
  L288():
    sym20 = ldf seq_along;
    base20 = ldf seq_along in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L289() else L290();
  D101():
    deopt 363 [r185];
  D152():
    deopt 532 [int];
  L46(r187):
    s1 = toForSeq(r187);
    l30 = length(s1);
    i76 = 0;
    goto L47(i76);
  L62(r238):
    s2 = toForSeq(r238);
    l38 = length(s2);
    i117 = 0;
    goto L63(i117);
  L287():
    goto L44(r185);
  L289():
    tl8 = ld tl;
    check L291() else D102();
  L290():
    r186 = dyn base20(<sym tl>);
    goto L46(r186);
  L349():
    tl14 = ld tl;
    check L351() else D133();
  L350():
    r237 = dyn base24(<sym tl>);
    goto L62(r237);
  L389():
    int1 = force? int;
    checkMissing(int1);
    r286 = `>`(int1, 0.0);
    c57 = `as.logical`(r286);
    if c57 then L390() else L73();
  D102():
    deopt 366 [tl8];
  D133():
    deopt 467 [tl14];
  L47(i77):
    i78 = `+`.1(i77, 1);
    c29 = `<`.1(l30, i78);
    if c29 then L292() else L60();
  L63(i118):
    i119 = `+`.1(i118, 1);
    c43 = `<`.1(l38, i119);
    if c43 then L352() else L72();
  L73():
    goto L79();
  L79():
    structure = ldf structure;
    check L412() else D161();
  L291():
    tl9 = force? tl8;
    checkMissing(tl9);
    r188 = seq_along(tl9);
    goto L46(r188);
  L351():
    tl15 = force? tl14;
    checkMissing(tl15);
    r239 = seq_along(tl15);
    goto L62(r239);
  L390():
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L391() else L392();
  D161():
    deopt 565 [];
  L60():
    x1 = `[[`(s1, i78, NULL, TRUE);
    st j = x1;
    which = ldf which;
    check L293() else D103();
  L72():
    x2 = `[[`(s2, i119, NULL, TRUE);
    st j = x2;
    which1 = ldf which;
    check L353() else D134();
  L74(r288):
    st res = r288;
    goto L79();
  L292():
    goto L61();
  L352():
    goto L61();
  L391():
    sym30 = ldf list;
    base30 = ldf list in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L393() else L394();
  L392():
    r287 = dyn base29(<lang list(`(Intercept)`=if(isM, `[`(coef, int, ), `[`(coef, int)))>, <sym res>);
    goto L74(r287);
  L412():
    p45 = prom<V +>{
      res2 = ld res;
      res3 = force? res2;
      checkMissing(res3);
      return res3;
    };
    p46 = prom<V +>{
      isM2 = ld isM;
      isM3 = force? isM2;
      checkMissing(isM3);
      return isM3;
    };
    r298 = dyn structure[, class, matrix](p45, "dummy_coef", p46);
    check L413() else D162();
  D103():
    deopt 370 [i78];
  D134():
    deopt 471 [i119];
  D162():
    deopt 571 [r298];
  L75(r290):
    res = ld res;
    check L409() else D159();
  L293():
    p31 = prom<V +>{
      asgn = ld asgn;
      asgn1 = force? asgn;
      checkMissing(asgn1);
      j11 = ld j;
      j12 = force? j11;
      checkMissing(j12);
      r189 = `==`(asgn1, j12);
      return r189;
    };
    r191 = dyn which(p31);
    check L294() else D104();
  L353():
    p38 = prom<V +>{
      asgn2 = ld asgn;
      asgn3 = force? asgn2;
      checkMissing(asgn3);
      j17 = ld j;
      j18 = force? j17;
      checkMissing(j18);
      r240 = `==`(asgn3, j18);
      return r240;
    };
    r242 = dyn which1(p38);
    check L354() else D135();
  L393():
    isM = ld isM;
    check L395() else D153();
  L394():
    r289 = dyn base30[`(Intercept)`](<lang if(isM, `[`(coef, int, ), `[`(coef, int))>);
    goto L75(r289);
  L413():
    popenv;
    return r298;
  D104():
    deopt 372 [i78, r191];
  D135():
    deopt 473 [i119, r242];
  D153():
    deopt 540 [isM];
  D159():
    deopt 557 [res];
  L294():
    st keep = r191;
    coef5 = ld coef;
    check L295() else D105();
  L354():
    st keep = r242;
    coef11 = ld coef;
    check L355() else D136();
  L395():
    isM1 = force? isM;
    checkMissing(isM1);
    c58 = `as.logical`(isM1);
    if c58 then L396() else L76();
  L409():
    res1 = force? res;
    checkMissing(res1);
    c61 = ldf c in base;
    r294 = dyn c61(r290, res1);
    check L410() else D160();
  D105():
    deopt 374 [i78, coef5];
  D136():
    deopt 475 [i119, coef11];
  D160():
    deopt 560 [r294];
  L76():
    coef19 = ld coef;
    check L403() else D156();
  L78(dx96):
    list1 = ldf list in base;
    r293 = dyn list1(dx96);
    check L408() else D158();
  L295():
    coef6 = force? coef5;
    checkMissing(coef6);
    c30 = `is.object`(coef6);
    if c30 then L296() else L297(i78, coef6);
  L355():
    coef12 = force? coef11;
    checkMissing(coef12);
    c44 = `is.object`(coef12);
    if c44 then L356() else L357(i119, coef12);
  L396():
    coef15 = ld coef;
    check L397() else D154();
  L410():
    goto L74(r294);
  D154():
    deopt 542 [coef15];
  D156():
    deopt 549 [coef19];
  D158():
    deopt 556 [r293];
  L48(i84, dx49):
    st cf = dx49;
    rn = ld rn;
    check L300() else D107();
  L64(i125, dx71):
    st cf = dx71;
    rn6 = ld rn;
    check L360() else D138();
  L296():
    dr44 = tryDispatchBuiltin.1("[", coef6);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L298() else L297(i78, dr44);
  L297(i82, coef8):
    keep = ld keep;
    check L299() else D106();
  L356():
    dr66 = tryDispatchBuiltin.1("[", coef12);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L358() else L357(i119, dr66);
  L357(i123, coef14):
    keep12 = ld keep;
    check L359() else D137();
  L397():
    coef16 = force? coef15;
    checkMissing(coef16);
    c59 = `is.object`(coef16);
    if c59 then L398() else L399(coef16);
  L403():
    coef20 = force? coef19;
    checkMissing(coef20);
    c60 = `is.object`(coef20);
    if c60 then L404() else L405(coef20);
  L408():
    goto L75(r293);
  D106():
    deopt 376 [i82, coef8, keep];
  D107():
    deopt 384 [i84, rn];
  D137():
    deopt 477 [i123, coef14, keep12];
  D138():
    deopt 481 [i125, rn6];
  L77(dx95):
    goto L78(dx95);
  L298():
    dx48 = getTryDispatchBuiltinValue(dr44);
    goto L48(i78, dx48);
  L299():
    keep1 = force? keep;
    __11 = ldf `[` in base;
    r192 = dyn __11(coef6, keep1, <missing>, FALSE);
    goto L48(i82, r192);
  L300():
    rn1 = force? rn;
    checkMissing(rn1);
    tl10 = ld tl;
    check L301() else D108();
  L358():
    dx70 = getTryDispatchBuiltinValue(dr66);
    goto L64(i119, dx70);
  L359():
    keep13 = force? keep12;
    __20 = ldf `[` in base;
    r243 = dyn __20(coef14, keep13);
    goto L64(i123, r243);
  L360():
    rn7 = force? rn6;
    checkMissing(rn7);
    tl16 = ld tl;
    check L361() else D139();
  L398():
    dr90 = tryDispatchBuiltin.1("[", coef16);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L400() else L399(dr90);
  L399(coef18):
    int2 = ld int;
    check L401() else D155();
  L404():
    dr92 = tryDispatchBuiltin.1("[", coef20);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L406() else L405(dr92);
  L405(coef22):
    int4 = ld int;
    check L407() else D157();
  D108():
    deopt 385 [i84, rn1, tl10];
  D139():
    deopt 482 [i125, rn7, tl16];
  D155():
    deopt 544 [coef18, int2];
  D157():
    deopt 551 [coef22, int4];
  L301():
    tl11 = force? tl10;
    checkMissing(tl11);
    c31 = `is.object`(tl11);
    if c31 then L302() else L303(i84, rn1, tl11);
  L361():
    tl17 = force? tl16;
    checkMissing(tl17);
    c45 = `is.object`(tl17);
    if c45 then L362() else L363(i125, rn7, tl17);
  L400():
    dx94 = getTryDispatchBuiltinValue(dr90);
    goto L77(dx94);
  L401():
    int3 = force? int2;
    __30 = ldf `[` in base;
    r291 = dyn __30(coef16, int3, <missing>);
    goto L77(r291);
  L406():
    dx97 = getTryDispatchBuiltinValue(dr92);
    goto L78(dx97);
  L407():
    int5 = force? int4;
    __31 = ldf `[` in base;
    r292 = dyn __31(coef22, int5);
    goto L78(r292);
  L49(i88, rn5, dx51):
    r194 = `==`(rn5, dx51);
    st ij = r194;
    sym21 = ldf any;
    base21 = ldf any in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L306() else L307();
  L65(i129, rn11, dx73):
    r245 = `==`(rn11, dx73);
    st ij = r245;
    sym25 = ldf any;
    base25 = ldf any in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L366() else L367();
  L302():
    dr46 = tryDispatchBuiltin.1("[", tl11);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L304() else L303(i84, rn1, dr46);
  L303(i86, rn3, tl13):
    j13 = ld j;
    check L305() else D109();
  L362():
    dr68 = tryDispatchBuiltin.1("[", tl17);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L364() else L363(i125, rn7, dr68);
  L363(i127, rn9, tl19):
    j19 = ld j;
    check L365() else D140();
  D109():
    deopt 387 [i86, rn3, tl13, j13];
  D140():
    deopt 484 [i127, rn9, tl19, j19];
  L50(i91, r196):
    c32 = `as.logical`(r196);
    if c32 then L313() else L52();
  L66(i132, r247):
    c46 = `as.logical`(r247);
    if c46 then L373() else L68();
  L304():
    dx50 = getTryDispatchBuiltinValue(dr46);
    goto L49(i84, rn1, dx50);
  L305():
    j14 = force? j13;
    __12 = ldf `[` in base;
    r193 = dyn __12(tl13, j14);
    goto L49(i86, rn3, r193);
  L306():
    sym22 = ldf `is.na`;
    base22 = ldf `is.na` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L308() else L309();
  L307():
    r195 = dyn base21(<lang `<-`(na, is.na(cf))>);
    goto L50(i88, r195);
  L364():
    dx72 = getTryDispatchBuiltinValue(dr68);
    goto L65(i125, rn7, dx72);
  L365():
    j20 = force? j19;
    __21 = ldf `[` in base;
    r244 = dyn __21(tl19, j20);
    goto L65(i127, rn9, r244);
  L366():
    sym26 = ldf `is.na`;
    base26 = ldf `is.na` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L368() else L369();
  L367():
    r246 = dyn base25(<lang `<-`(na, is.na(cf))>);
    goto L66(i129, r246);
  L51(i94, r198):
    st na = r198;
    any = ldf any in base;
    r200 = dyn any(r198);
    check L312() else D112();
  L52():
    t1 = ldf t;
    check L329() else D122();
  L56(i104, rj2):
    st cf = rj2;
    sym23 = ldf list;
    base23 = ldf list in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L331() else L332();
  L67(i135, r249):
    st na = r249;
    any3 = ldf any in base;
    r251 = dyn any3(r249);
    check L372() else D143();
  L68():
    setNames3 = ldf setNames;
    check L383() else D149();
  L70(i142, rj5):
    l42 = ld res;
    c56 = `is.object`(l42);
    if c56 then L385() else L386(i142, rj5, l42);
  L308():
    cf = ld cf;
    check L310() else D110();
  L309():
    r197 = dyn base22(<sym cf>);
    goto L51(i88, r197);
  L313():
    ncol = ldf ncol;
    check L314() else D113();
  L368():
    cf16 = ld cf;
    check L370() else D141();
  L369():
    r248 = dyn base26(<sym cf>);
    goto L67(i129, r248);
  L373():
    setNames2 = ldf setNames;
    check L374() else D144();
  D110():
    deopt 396 [i88, cf];
  D112():
    deopt 402 [i94, r200];
  D113():
    deopt 404 [i91];
  D122():
    deopt 434 [i91];
  D141():
    deopt 493 [i129, cf16];
  D143():
    deopt 499 [i135, r251];
  D144():
    deopt 501 [i132];
  D149():
    deopt 520 [i132];
  L57(i107, r230):
    l34 = ld cf;
    dimnames__ = ldf `dimnames<-`;
    check L341() else D129();
  L71(i146, dx93):
    st res = dx93;
    goto L63(i146);
  L310():
    cf1 = force? cf;
    checkMissing(cf1);
    is_na2 = ldf `is.na` in base;
    r199 = dyn is_na2(cf1);
    check L311() else D111();
  L312():
    goto L50(i94, r200);
  L314():
    p32 = prom<V +>{
      cf2 = ld cf;
      cf3 = force? cf2;
      checkMissing(cf3);
      return cf3;
    };
    r202 = dyn ncol(p32);
    check L315() else D114();
  L329():
    p36 = prom<V +>{
      mm22 = ld mm;
      mm23 = force? mm22;
      checkMissing(mm23);
      c40 = `is.object`(mm23);
      if c40 then L1() else L2();
    L0(dx65):
      cf8 = ld cf;
      cf9 = force? cf8;
      checkMissing(cf9);
      ___9 = ldf `%*%` in base;
      r226 = dyn ___9(dx65, cf9);
      return r226;
    L1():
      dr60 = tryDispatchBuiltin.1("[", mm23);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2();
    L2():
      ij4 = ld ij;
      ij5 = force? ij4;
      keep10 = ld keep;
      keep11 = force? keep10;
      __18 = ldf `[` in base;
      r225 = dyn __18(mm23, ij5, keep11, FALSE);
      goto L0(r225);
    L3():
      dx64 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx64);
    };
    r228 = dyn t1(p36);
    check L330() else D123();
  L331():
    colnames = ldf colnames;
    check L333() else D124();
  L332():
    r229 = dyn base23(<lang colnames(coef)>, <lang `[`(rnn, ij)>);
    goto L57(i104, r229);
  L370():
    cf17 = force? cf16;
    checkMissing(cf17);
    is_na3 = ldf `is.na` in base;
    r250 = dyn is_na3(cf17);
    check L371() else D142();
  L372():
    goto L66(i135, r251);
  L374():
    p39 = prom<V +>{
      sym27 = ldf drop;
      base27 = ldf drop in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L4() else L5();
    L0(r253):
      return r253;
    L4():
      mm26 = ld mm;
      mm27 = force? mm26;
      checkMissing(mm27);
      c47 = `is.object`(mm27);
      if c47 then L6() else L7(mm27);
    L5():
      r252 = dyn base27(<lang `%*%`(`[`(mm, ij, `[`(keep, `!`(na)), drop=FALSE), `[`(cf, `!`(na)))>);
      goto L0(r252);
    L1(dx75):
      cf18 = ld cf;
      cf19 = force? cf18;
      checkMissing(cf19);
      c49 = `is.object`(cf19);
      if c49 then L12() else L13(cf19);
    L6():
      dr70 = tryDispatchBuiltin.1("[", mm27);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L8() else L7(dr70);
    L7(mm29):
      ij8 = ld ij;
      ij9 = force? ij8;
      keep14 = ld keep;
      keep15 = force? keep14;
      checkMissing(keep15);
      c48 = `is.object`(keep15);
      if c48 then L9() else L10(mm29, keep15);
    L2(dx77):
      __23 = ldf `[` in base;
      r256 = dyn __23(mm27, ij9, dx77, FALSE);
      goto L1(r256);
    L3(dx79):
      ___10 = ldf `%*%` in base;
      r259 = dyn ___10(dx75, dx79);
      drop = ldf drop in base;
      r260 = dyn drop(r259);
      goto L0(r260);
    L8():
      dx74 = getTryDispatchBuiltinValue(dr70);
      goto L1(dx74);
    L9():
      dr72 = tryDispatchBuiltin.1("[", keep15);
      dc36 = getTryDispatchBuiltinDispatched(dr72);
      if dc36 then L11() else L10(mm29, dr72);
    L10(mm31, keep17):
      na6 = ld na;
      na7 = force? na6;
      checkMissing(na7);
      r254 = `!`(na7);
      __22 = ldf `[` in base;
      r255 = dyn __22(keep17, r254);
      goto L2(r255);
    L12():
      dr74 = tryDispatchBuiltin.1("[", cf19);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L14() else L13(dr74);
    L13(cf21):
      na8 = ld na;
      na9 = force? na8;
      checkMissing(na9);
      r257 = `!`(na9);
      __24 = ldf `[` in base;
      r258 = dyn __24(cf21, r257);
      goto L3(r258);
    L11():
      dx76 = getTryDispatchBuiltinValue(dr72);
      goto L2(dx76);
    L14():
      dx78 = getTryDispatchBuiltinValue(dr74);
      goto L3(dx78);
    };
    p40 = prom<V +>{
      rnn4 = ld rnn;
      rnn5 = force? rnn4;
      checkMissing(rnn5);
      c50 = `is.object`(rnn5);
      if c50 then L1() else L2(rnn5);
    L0(dx81):
      return dx81;
    L1():
      dr76 = tryDispatchBuiltin.1("[", rnn5);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(rnn7):
      ij10 = ld ij;
      ij11 = force? ij10;
      __25 = ldf `[` in base;
      r262 = dyn __25(rnn7, ij11);
      goto L0(r262);
    L3():
      dx80 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx80);
    };
    r264 = dyn setNames2(p39, p40);
    check L375() else D145();
  L383():
    p43 = prom<V +>{
      sym28 = ldf drop;
      base28 = ldf drop in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L2() else L3();
    L0(r277):
      return r277;
    L2():
      mm42 = ld mm;
      mm43 = force? mm42;
      checkMissing(mm43);
      c54 = `is.object`(mm43);
      if c54 then L4() else L5();
    L3():
      r276 = dyn base28(<lang `%*%`(`[`(mm, ij, keep, drop=FALSE), cf)>);
      goto L0(r276);
    L1(dx89):
      cf22 = ld cf;
      cf23 = force? cf22;
      checkMissing(cf23);
      ___12 = ldf `%*%` in base;
      r279 = dyn ___12(dx89, cf23);
      drop1 = ldf drop in base;
      r280 = dyn drop1(r279);
      goto L0(r280);
    L4():
      dr84 = tryDispatchBuiltin.1("[", mm43);
      dc42 = getTryDispatchBuiltinDispatched(dr84);
      if dc42 then L6() else L5();
    L5():
      ij14 = ld ij;
      ij15 = force? ij14;
      keep22 = ld keep;
      keep23 = force? keep22;
      __28 = ldf `[` in base;
      r278 = dyn __28(mm43, ij15, keep23, FALSE);
      goto L1(r278);
    L6():
      dx88 = getTryDispatchBuiltinValue(dr84);
      goto L1(dx88);
    };
    p44 = prom<V +>{
      rnn8 = ld rnn;
      rnn9 = force? rnn8;
      checkMissing(rnn9);
      c55 = `is.object`(rnn9);
      if c55 then L1() else L2(rnn9);
    L0(dx91):
      return dx91;
    L1():
      dr86 = tryDispatchBuiltin.1("[", rnn9);
      dc43 = getTryDispatchBuiltinDispatched(dr86);
      if dc43 then L3() else L2(dr86);
    L2(rnn11):
      ij16 = ld ij;
      ij17 = force? ij16;
      __29 = ldf `[` in base;
      r282 = dyn __29(rnn11, ij17);
      goto L0(r282);
    L3():
      dx90 = getTryDispatchBuiltinValue(dr86);
      goto L0(dx90);
    };
    r284 = dyn setNames3(p43, p44);
    check L384() else D150();
  L385():
    dr88 = tryDispatchBuiltin.0("[[<-", l42, rj5);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L387() else L386(i142, rj5, dr88);
  L386(i144, rj7, l44):
    j21 = ld j;
    check L388() else D151();
  D111():
    deopt 399 [i88, r199];
  D114():
    deopt 406 [i91, r202];
  D123():
    deopt 436 [i91, r228];
  D124():
    deopt 441 [i104];
  D129():
    deopt 452 [i107, r230, l34, r230];
  D142():
    deopt 496 [i129, r250];
  D145():
    deopt 504 [i132, r264];
  D150():
    deopt 523 [i132, r284];
  D151():
    deopt 525 [i144, rj7, l44, rj5, j21];
  L311():
    goto L51(i88, r199);
  L315():
    r203 = `>=`(r202, 2.0);
    c33 = `as.logical`(r203);
    if c33 then L316() else L53();
  L330():
    goto L56(i91, r228);
  L333():
    p37 = prom<V +>{
      coef9 = ld coef;
      coef10 = force? coef9;
      checkMissing(coef10);
      return coef10;
    };
    r232 = dyn colnames(p37);
    check L334() else D125();
  L341():
    r235 = dyn dimnames__(l34, NULL, r230);
    check L342() else D130();
  L371():
    goto L67(i129, r250);
  L375():
    st rj = r264;
    l39 = ld rj;
    c51 = `is.object`(l39);
    if c51 then L376() else L377(i132, NA_LGL, l39);
  L384():
    goto L70(i132, r284);
  L387():
    dx92 = getTryDispatchBuiltinValue(dr88);
    goto L71(i142, dx92);
  L388():
    j22 = force? j21;
    ____2 = ldf `[[<-` in base;
    r285 = dyn ____2(l44, rj5, j22);
    goto L71(i144, r285);
  D125():
    deopt 443 [i104, r232];
  D130():
    deopt 454 [i107, r230, r235];
  L53():
    goto L54(i91);
  L54(i99):
    t = ldf t;
    check L320() else D117();
  L69(i141, dx83):
    st rj = dx83;
    rj3 = ld rj;
    check L381() else D148();
  L316():
    stop = ldf stop;
    check L317() else D115();
  L334():
    rnn = ld rnn;
    check L335() else D126();
  L342():
    st cf = r235;
    cf10 = ld cf;
    check L343() else D131();
  L376():
    dr78 = tryDispatchBuiltin.0("[<-", l39, NA_LGL);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L378() else L377(i132, NA_LGL, dr78);
  L377(i139, r266, l41):
    apply3 = ldf apply;
    check L379() else D146();
  D115():
    deopt 410 [i91];
  D117():
    deopt 416 [i99];
  D126():
    deopt 444 [i104, rnn];
  D131():
    deopt 456 [i107, cf10];
  D146():
    deopt 510 [i139, r266, l41, NA_LGL];
  D148():
    deopt 517 [i141, rj3];
  L317():
    r204 = dyn stop("multivariate case with missing coefficients is not yet implemented");
    check L318() else D116();
  L320():
    p33 = prom<V +>{
      mm6 = ld mm;
      mm7 = force? mm6;
      checkMissing(mm7);
      c34 = `is.object`(mm7);
      if c34 then L3() else L4(mm7);
    L0(dx53):
      cf4 = ld cf;
      cf5 = force? cf4;
      checkMissing(cf5);
      c36 = `is.object`(cf5);
      if c36 then L9() else L10(cf5);
    L3():
      dr48 = tryDispatchBuiltin.1("[", mm7);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L5() else L4(dr48);
    L4(mm9):
      ij = ld ij;
      ij1 = force? ij;
      keep2 = ld keep;
      keep3 = force? keep2;
      checkMissing(keep3);
      c35 = `is.object`(keep3);
      if c35 then L6() else L7(mm9, keep3);
    L1(dx55):
      __14 = ldf `[` in base;
      r208 = dyn __14(mm7, ij1, dx55, FALSE);
      goto L0(r208);
    L2(dx57):
      ___7 = ldf `%*%` in base;
      r211 = dyn ___7(dx53, dx57);
      return r211;
    L5():
      dx52 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx52);
    L6():
      dr50 = tryDispatchBuiltin.1("[", keep3);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L8() else L7(mm9, dr50);
    L7(mm11, keep5):
      na = ld na;
      na1 = force? na;
      checkMissing(na1);
      r206 = `!`(na1);
      __13 = ldf `[` in base;
      r207 = dyn __13(keep5, r206);
      goto L1(r207);
    L9():
      dr52 = tryDispatchBuiltin.1("[", cf5);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L11() else L10(dr52);
    L10(cf7):
      na2 = ld na;
      na3 = force? na2;
      checkMissing(na3);
      r209 = `!`(na3);
      __15 = ldf `[` in base;
      r210 = dyn __15(cf7, r209);
      goto L2(r210);
    L8():
      dx54 = getTryDispatchBuiltinValue(dr50);
      goto L1(dx54);
    L11():
      dx56 = getTryDispatchBuiltinValue(dr52);
      goto L2(dx56);
    };
    r213 = dyn t(p33);
    check L321() else D118();
  L335():
    rnn1 = force? rnn;
    checkMissing(rnn1);
    c41 = `is.object`(rnn1);
    if c41 then L336() else L337(i104, rnn1);
  L343():
    cf11 = force? cf10;
    checkMissing(cf11);
    l35 = ld res;
    c42 = `is.object`(l35);
    if c42 then L344() else L345(i107, cf11, l35);
  L378():
    dx82 = getTryDispatchBuiltinValue(dr78);
    goto L69(i132, dx82);
  L379():
    p41 = prom<V +>{
      mm34 = ld mm;
      mm35 = force? mm34;
      checkMissing(mm35);
      c52 = `is.object`(mm35);
      if c52 then L2() else L3(mm35);
    L0(dx85):
      r271 = `!=`(dx85, 0.0);
      return r271;
    L2():
      dr80 = tryDispatchBuiltin.1("[", mm35);
      dc40 = getTryDispatchBuiltinDispatched(dr80);
      if dc40 then L4() else L3(dr80);
    L3(mm37):
      ij12 = ld ij;
      ij13 = force? ij12;
      keep18 = ld keep;
      keep19 = force? keep18;
      checkMissing(keep19);
      c53 = `is.object`(keep19);
      if c53 then L5() else L6(mm37, keep19);
    L1(dx87):
      __27 = ldf `[` in base;
      r270 = dyn __27(mm35, ij13, dx87, FALSE);
      goto L0(r270);
    L4():
      dx84 = getTryDispatchBuiltinValue(dr80);
      goto L0(dx84);
    L5():
      dr82 = tryDispatchBuiltin.1("[", keep19);
      dc41 = getTryDispatchBuiltinDispatched(dr82);
      if dc41 then L7() else L6(mm37, dr82);
    L6(mm39, keep21):
      na10 = ld na;
      na11 = force? na10;
      __26 = ldf `[` in base;
      r269 = dyn __26(keep21, na11);
      goto L1(r269);
    L7():
      dx86 = getTryDispatchBuiltinValue(dr82);
      goto L1(dx86);
    };
    p42 = prom<V +>{
      any4 = ld any;
      any5 = force? any4;
      checkMissing(any5);
      return any5;
    };
    r274 = dyn apply3(p41, 1, p42);
    check L380() else D147();
  L381():
    rj4 = force? rj3;
    checkMissing(rj4);
    goto L70(i141, rj4);
  D116():
    deopt 412 [i91, r204];
  D118():
    deopt 418 [i99, r213];
  D147():
    deopt 514 [i139, r266, l41, NA_LGL, r274];
  L58(i111, dx67):
    list = ldf list in base;
    r234 = dyn list(r232, dx67);
    check L340() else D128();
  L59(i115, dx69):
    st res = dx69;
    goto L47(i115);
  L318():
    goto L54(i91);
  L321():
    st rj = r213;
    l31 = ld rj;
    c37 = `is.object`(l31);
    if c37 then L322() else L323(i99, NA_LGL, l31);
  L336():
    dr62 = tryDispatchBuiltin.1("[", rnn1);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L338() else L337(i104, dr62);
  L337(i109, rnn3):
    ij6 = ld ij;
    check L339() else D127();
  L344():
    dr64 = tryDispatchBuiltin.0("[[<-", l35, cf11);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L346() else L345(i107, cf11, dr64);
  L345(i113, cf13, l37):
    j15 = ld j;
    check L347() else D132();
  L380():
    ___11 = ldf `[<-` in base;
    r275 = dyn ___11(l41, NA_LGL, r274);
    goto L69(i139, r275);
  D127():
    deopt 446 [i109, rnn3, ij6];
  D128():
    deopt 450 [i111, r234];
  D132():
    deopt 459 [i113, cf13, l37, cf11, j15];
  L55(i103, dx59):
    st rj = dx59;
    rj = ld rj;
    check L327() else D121();
  L322():
    dr54 = tryDispatchBuiltin.0("[<-", l31, NA_LGL);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L324() else L323(i99, NA_LGL, dr54);
  L323(i101, r215, l33):
    apply2 = ldf apply;
    check L325() else D119();
  L338():
    dx66 = getTryDispatchBuiltinValue(dr62);
    goto L58(i104, dx66);
  L339():
    ij7 = force? ij6;
    __19 = ldf `[` in base;
    r233 = dyn __19(rnn3, ij7);
    goto L58(i109, r233);
  L340():
    goto L57(i111, r234);
  L346():
    dx68 = getTryDispatchBuiltinValue(dr64);
    goto L59(i107, dx68);
  L347():
    j16 = force? j15;
    ____1 = ldf `[[<-` in base;
    r236 = dyn ____1(l37, cf11, j16);
    goto L59(i113, r236);
  D119():
    deopt 424 [i101, r215, l33, NA_LGL];
  D121():
    deopt 431 [i103, rj];
  L324():
    dx58 = getTryDispatchBuiltinValue(dr54);
    goto L55(i99, dx58);
  L325():
    p34 = prom<V +>{
      mm14 = ld mm;
      mm15 = force? mm14;
      checkMissing(mm15);
      c38 = `is.object`(mm15);
      if c38 then L2() else L3(mm15);
    L0(dx61):
      r220 = `!=`(dx61, 0.0);
      return r220;
    L2():
      dr56 = tryDispatchBuiltin.1("[", mm15);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L4() else L3(dr56);
    L3(mm17):
      ij2 = ld ij;
      ij3 = force? ij2;
      keep6 = ld keep;
      keep7 = force? keep6;
      checkMissing(keep7);
      c39 = `is.object`(keep7);
      if c39 then L5() else L6(mm17, keep7);
    L1(dx63):
      __17 = ldf `[` in base;
      r219 = dyn __17(mm15, ij3, dx63, FALSE);
      goto L0(r219);
    L4():
      dx60 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx60);
    L5():
      dr58 = tryDispatchBuiltin.1("[", keep7);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L7() else L6(mm17, dr58);
    L6(mm19, keep9):
      na4 = ld na;
      na5 = force? na4;
      __16 = ldf `[` in base;
      r218 = dyn __16(keep9, na5);
      goto L1(r218);
    L7():
      dx62 = getTryDispatchBuiltinValue(dr58);
      goto L1(dx62);
    };
    p35 = prom<V +>{
      any1 = ld any;
      any2 = force? any1;
      checkMissing(any2);
      return any2;
    };
    r223 = dyn apply2(p34, 1, p35);
    check L326() else D120();
  L327():
    rj1 = force? rj;
    checkMissing(rj1);
    goto L56(i103, rj1);
  D120():
    deopt 428 [i101, r215, l33, NA_LGL, r223];
  L326():
    ___8 = ldf `[<-` in base;
    r224 = dyn ___8(l33, NA_LGL, r223);
    goto L55(i101, r224);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg mf:*, reg mf1:V, reg c:L, reg mf3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg ____:cls, reg levels:cls, reg x:*, reg x1:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x2:*, reg x3:V, reg c1:L, reg c2:L, reg xl:*, reg xl1:V, reg c3:L, reg xl3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __1:cls, reg r6:V, reg p2:p(V +), reg r8:V |
    mkenv;
    st i = i;
    mf = ld mf;
    check L1() else D0();
  D0():
    deopt 0 [mf];
  L1():
    mf1 = force? mf;
    checkMissing(mf1);
    c = `is.object`(mf1);
    if c then L2() else L3(mf1);
  L0(dx1):
    st x = dx1;
    ____ = ldf `%||%`;
    check L6() else D2();
  L2():
    dr = tryDispatchBuiltin.1("[", mf1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(mf3):
    i1 = ld i;
    check L5() else D1();
  D1():
    deopt 3 [mf3, i1];
  D2():
    deopt 11 [];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    i2 = force? i1;
    __ = ldf `[` in base;
    r = dyn __(mf1, <missing>, i2, TRUE);
    goto L0(r);
  L6():
    p1 = prom<V +>{
      levels = ldf levels;
      p = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r2 = dyn levels(p);
      return r2;
    };
    p2 = prom<V +>{
      sym = ldf `is.character`;
      base = ldf `is.character` in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r5):
      c2 = `as.logical`(r5);
      if c2 then L5() else L1();
    L3():
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      c1 = `is.character`(x3);
      goto L0(c1);
    L4():
      r4 = dyn base(<sym x>);
      goto L0(r4);
    L1():
      invisible.0();
      return NULL;
    L5():
      xl = ld xl;
      xl1 = force? xl;
      checkMissing(xl1);
      c3 = `is.object`(xl1);
      if c3 then L6() else L7(xl1);
    L2(dx3):
      return dx3;
    L6():
      dr2 = tryDispatchBuiltin.1("[[", xl1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L8() else L7(dr2);
    L7(xl3):
      i3 = ld i;
      i4 = force? i3;
      __1 = ldf `[[` in base;
      r6 = dyn __1(xl3, i4);
      goto L2(r6);
    L8():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L2(dx2);
    };
    r8 = dyn ____(p1, p2);
    check L7() else D3();
  D3():
    deopt 14 [r8];
  L7():
    popenv;
    return r8;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nxl:*, reg nxl1:V, reg c:L, reg nxl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg x1:*, reg x2:V, reg r2:V, reg __:cls, reg r3:V, reg prod:cls, reg r4:V |
    mkenv;
    st x = x;
    sym = ldf prod;
    base = ldf prod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    nxl = ld nxl;
    check L4() else D0();
  L3():
    r = dyn base(<lang `[`(nxl, `>`(x, 0.0))>);
    goto L0(r);
  D0():
    deopt 2 [nxl];
  L4():
    nxl1 = force? nxl;
    checkMissing(nxl1);
    c = `is.object`(nxl1);
    if c then L5() else L6(nxl1);
  L1(dx1):
    prod = ldf prod in base;
    r4 = dyn prod(dx1);
    check L9() else D2();
  L5():
    dr = tryDispatchBuiltin.1("[", nxl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(nxl3):
    x1 = ld x;
    check L8() else D1();
  D1():
    deopt 4 [nxl3, x1];
  D2():
    deopt 10 [r4];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L8():
    x2 = force? x1;
    checkMissing(x2);
    r2 = `>`(x2, 0.0);
    __ = ldf `[` in base;
    r3 = dyn __(nxl3, r2);
    goto L1(r3);
  L9():
    goto L0(r4);
  }
}