#pragma once

#include "buggy-graph-pp/graph.hpp"

namespace Buggy
{
    bool isAtomic(Node const& node); // aka is not compound
    bool containsCompound(Node const& node);
    Node* getNodeById(Node* node, std::string const& id);
    int countInputs(Node const& node);
    void forAllNodes(Node& baseNode, std::function <void(Node&)> const& modifier);
}
