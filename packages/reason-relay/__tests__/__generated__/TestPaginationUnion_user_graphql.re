/* @generated */

module Types = {
  [@ocaml.warning "-30"];
  type fragment_friendsConnection = {totalCount: int};

  type fragment = {
    firstName: string,
    friendsConnection: fragment_friendsConnection,
  };
};

module Internal = {
  type fragmentRaw;
  let fragmentConverter: Js.Dict.t(Js.Dict.t(Js.Dict.t(string))) = [%raw
    {json| {} |json}
  ];
  let fragmentConverterMap = ();
  let convertFragment = v =>
    v
    ->ReasonRelay.convertObj(
        fragmentConverter,
        fragmentConverterMap,
        Js.undefined,
      );
};

type t;
type fragmentRef;
external getFragmentRef:
  ReasonRelay.fragmentRefs([> | `TestPaginationUnion_user]) => fragmentRef =
  "%identity";

module Utils = {};

type relayOperationNode;

type operationType = ReasonRelay.fragmentNode(relayOperationNode);

let node: operationType = [%raw
  {json| {
  "argumentDefinitions": [],
  "kind": "Fragment",
  "metadata": null,
  "name": "TestPaginationUnion_user",
  "selections": [
    {
      "alias": null,
      "args": null,
      "kind": "ScalarField",
      "name": "firstName",
      "storageKey": null
    },
    {
      "alias": null,
      "args": [
        {
          "kind": "Literal",
          "name": "first",
          "value": 1
        }
      ],
      "concreteType": "UserConnection",
      "kind": "LinkedField",
      "name": "friendsConnection",
      "plural": false,
      "selections": [
        {
          "alias": null,
          "args": null,
          "kind": "ScalarField",
          "name": "totalCount",
          "storageKey": null
        }
      ],
      "storageKey": "friendsConnection(first:1)"
    }
  ],
  "type": "User",
  "abstractKey": null
} |json}
];
