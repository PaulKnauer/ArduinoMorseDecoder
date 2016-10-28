#include "MorseCharBTree.h"

#include "Arduino.h"

MorseCharBTree::MorseCharBTree() {
  _root = new MorseChar(' ', NULL);
  MorseChar *e = new MorseChar('E', _root);
  MorseChar *t = new MorseChar('T', _root);
  _root->setChildren(e, t);

  MorseChar *i = new MorseChar('I', e);
  MorseChar *a = new MorseChar('A', e);
  e->setChildren(i, a);

  MorseChar *n = new MorseChar('N', t);
  MorseChar *m = new MorseChar('M', t);
  t->setChildren(n, m);

  MorseChar *s = new MorseChar('S', i);
  MorseChar *u = new MorseChar('U', i);
  i->setChildren(s, u);

  MorseChar *r = new MorseChar('R', a);
  MorseChar *w = new MorseChar('W', a);
  a->setChildren(r, w);

  MorseChar *d = new MorseChar('D', n);
  MorseChar *k = new MorseChar('K', n);
  n->setChildren(d, k);

  MorseChar *g = new MorseChar('G', m);
  MorseChar *o = new MorseChar('O', m);
  m->setChildren(g, o);

  MorseChar *h = new MorseChar('H', s);
  MorseChar *v = new MorseChar('V', s);
  s->setChildren(h, v);

  MorseChar *f = new MorseChar('F', u);
  MorseChar *uDiaeresis = new MorseChar('Ü', u);
  u->setChildren(f, uDiaeresis);

  MorseChar *l = new MorseChar('L', r);
  MorseChar *aDiaeresis = new MorseChar('Ä', r);
  r->setChildren(l, aDiaeresis);

  MorseChar *p = new MorseChar('P', w);
  MorseChar *j = new MorseChar('J', w);
  w->setChildren(p, j);

  MorseChar *b = new MorseChar('B', d);
  MorseChar *x = new MorseChar('X', d);
  d->setChildren(b, x);

  MorseChar *c = new MorseChar('C', k);
  MorseChar *y = new MorseChar('Y', k);
  k->setChildren(c, y);

  MorseChar *z = new MorseChar('Z', g);
  MorseChar *q = new MorseChar('Q', g);
  g->setChildren(z, q);

  MorseChar *oDiaeresis = new MorseChar('Ö', o);
  MorseChar *digraph = new MorseChar('*', o);
  o->setChildren(oDiaeresis, digraph);

  MorseChar *five = new MorseChar('5', h);
  MorseChar *four = new MorseChar('4', h);
  h->setChildren(five, four);

  MorseChar *sCircumflex = new MorseChar('Ŝ', v);
  MorseChar *three = new MorseChar('3', v);
  v->setchildren(sCircumflex, three);

  MorseChar *eAcute = new MorseChar('É', f);
  f->setChildren(eAcute, NULL);

  MorseChar *dStroke = new MorseChar('D', uDiaeresis);
  MorseChar *two = new MorseChar('2', uDiaeresis);
  uDiaeresis->setChildren(dStroke, two);

  MorseChar *eGrave = new MorseChar('È', l);
  l->setChildren(NULL, eGrave);

  MorseChar *plus = new MorseChar('+', aDiaeresis);
  aDiaeresis->setChildren(plus, NULL);

  MorseChar *thorn = new MorseChar('Þ', p);
  MorseChar *aGrave = new MorseChar('À', p);
  p->setChildren(thorn, aGrave);

  MorseChar *jCurcumflex = new MorseChar('Ĵ', j);
  MorseChar *one = new MorseChar('1', j);
  j->setChildren(jCurcumflex, one);

  MorseChar *six = new MorseChar('6', b);
  MorseChar *equals = new MorseChar('=', b);
  b->setChildren(six, equals);

  MorseChar *slash = new MorseChar('/', x);
  x->setChildren(slash, NULL);

  MorseChar *cCedilla = new MorseChar('Ç', c);
  MorseChar *nil = new MorseChar(' ', c);
  c->setChildren(cCedilla, nil);

  MorseChar *hCircumflex = new MorseChar('Ĥ', y);
//  MorseChar *openParenthesis = new MorseChar('(', y);
  y->setChildren(hCircumflex, NULL);

  MorseChar *seven = new MorseChar('7', z);
  MorseChar *nil = new MorseChar(' ', z);
  z->setChildren(seven, nil);

  MorseChar *gCircumflex = new MorseChar('Ĝ', q);
  MorseChar *nTilde = new MorseChar('Ñ', q);
  q->setChildren(gCircumflex, nTilde);

  MorseChar *eight = new MorseChar('8', oDiaeresis);
  oDiaeresis->setChildren(eight, NULL);

  MorseChar *nine = new MorseChar('9', digraph);
  MorseChar *zero = new MorseChar('0', digraph);
  digraph->setChildren(nine, zero);

  MorseChar *questionMark = new MorseChar('?', dStroke);
  MorseChar *underscore = new MorseChar('_', dStroke);
  dStroke->setChildren(questionMark, underscore);

  MorseChar *doubleQuotes = new MorseChar('"', eGrave);
  eGrave->setChildren(doubleQuotes, NULL);

  MorseChar *period = new MorseChar('.', plus);
  plus->setChildren(NULL, period);

  MorseChar *commercialAt = new MorseChar('@', aGrave);
  aGrave->setChildren(commercialAt, NULL);

  MorseChar *singleQuotes = new MorseChar('\'', _root);
  one->setChildren(singleQuotes, NULL);

  MorseChar *hyphen = new MorseChar('-', six);
  six->setChildren(NULL, hyphen);

  MorseChar *semicolon = new MorseChar(';', nil);
  MorseChar *exclamationMark = new MorseChar('!', nil);
  nil->setChildren(semicolon, exclamationMark);

  MorseChar *closeParenthesis = new MorseChar(')', hCircumflex);
  hCircumflex->setChildren(NULL, closeParenthesis);

  MorseChar *comma = new MorseChar(',', nil);
  nil->setChildren(NULL, comma);

  MorseChar *colon = new MorseChar(':', eight);
  eight->sertChildren(colon, NULL);
}

MorseChar *MorseCharBTree::getRoot() {
  return _root;
}

